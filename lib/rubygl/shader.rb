require_relative './native/opengl'

module RubyGL

    class Shader
        def initialize(vert_src, frag_src)
            @v_shader_id = Native.glCreateShader(Native::GL_VERTEX_SHADER)
            @f_shader_id = Native.glCreateShader(Native::GL_FRAGMENT_SHADER)
            @attrib_locs, @uniform_locs = {}, {}
            
            # Pointer Used To Point To The String Of Our Source Code
            shader_src_ptr = FFI::MemoryPointer.new(:pointer)
            shader_src_len = FFI::MemoryPointer.new(:int)
            
            v_shader_ptr = FFI::MemoryPointer.from_string(vert_src)
            f_shader_ptr = FFI::MemoryPointer.from_string(frag_src)
            
            shader_src_ptr.write_pointer(v_shader_ptr.address)
            shader_src_len.write_int(vert_src.size)
            Native.glShaderSource(@v_shader_id, 1, shader_src_ptr, shader_src_len)
            
            shader_src_ptr.write_pointer(f_shader_ptr.address)
            shader_src_len.write_int(frag_src.size)
            Native.glShaderSource(@f_shader_id, 1, shader_src_ptr, shader_src_len)
            
            Native.glCompileShader(@v_shader_id)
            Native.glCompileShader(@f_shader_id)
            
            # Throw Exception With Compile Error If Compilation Failed
            Shader.compile_status(@v_shader_id)
            Shader.compile_status(@f_shader_id)
            
            @program_id = Native.glCreateProgram()
            
            Native.glAttachShader(@program_id, @v_shader_id)
            Native.glAttachShader(@program_id, @f_shader_id)
            
            Native.glLinkProgram(@program_id)
            
            Shader.link_status(@program_id)
        end
        
        def use_program()
            Native.glUseProgram(@program_id)
        end
        
        # Splat Operator Aggregates Incoming Parameters And Expands Outgoing Parameters
        # If method_sym Does Not Accept A Pointer To The Data, Pass nil For data And
        # Pass In The Normal Parameters Required For The Specific Method.
        def send_uniform(method_sym, var_name, data = nil, *args)
            loc = @uniform_locs[var_name] ||= uniform_location(var_name)
            
            if data != nil then
                data_ptr = FFI::MemoryPointer.new(:float, data.size)
                data_ptr.write_array_of_float(data)
                
                RubyGL::Native.send(method_sym, loc, *args, data_ptr)
            else
                RubyGL::Native.send(method_sym, loc, *args)
            end
        end
        
        def attrib_location(var_name)
            Native.glGetAttribLocation(@program_id, var_name)
        end

        private
        def uniform_location(var_name)
            Native.glGetUniformLocation(@program_id, var_name)
        end
        
        def self.compile_status(shader_id)
            result = FFI::MemoryPointer.new(:int)
            Native.glGetShaderiv(shader_id, Native::GL_COMPILE_STATUS, result)
            
            if (result.get_int(0) != Native::GL_TRUE) then
                Native.glGetShaderiv(shader_id, Native::GL_INFO_LOG_LENGTH, result)
                
                compile_log = FFI::MemoryPointer.new(:char, result.get_int(0))
                
                Native.glGetShaderInfoLog(shader_id, compile_log.total, FFI::MemoryPointer::NULL, compile_log)
                
                raise compile_log.read_string_to_null()
            end
        end
        
        def self.link_status(program_id)
            result = FFI::MemoryPointer.new(:int)
            Native.glGetProgramiv(program_id, Native::GL_LINK_STATUS, result)
            
            if (result.get_int(0) != Native::GL_TRUE) then
                Native.glGetProgramiv(program_id, Native::GL_INFO_LOG_LENGTH, result)
                
                link_log = FFI::MemoryPointer.new(:char, result.get_int(0))
                
                Native.glGetShaderInfoLog(program_id, link_log.total, FFI::MemoryPointer::NULL, link_log)

                raise link_log.read_string_to_null()
            end
        end
    end
    
    class ShaderGenerator
        def self.faceted_shader()
            Shader.new('''
                #version 130
                in vec3 position;
                out vec3 vPosition;
                uniform mat4 modelview;
                uniform mat4 perspective;
                
                void main() {
                    vec4 hPosition = modelview * vec4(position, 1);
                    vPosition = hPosition.xyz;
                    
                    gl_Position = perspective * hPosition;
                }
            ''','''
                #version 130
                in vec3 vPosition;
                out vec4 fColor;
                uniform vec4 color;
                uniform vec3 light;
                
                void main() {
                    vec3 dx = dFdy(vPosition);
                    vec3 dy = dFdx(vPosition);
                    vec3 triangle_norm = normalize(cross(dx, dy));
                    float factor = clamp(dot(triangle_norm, light), 0, 1);
                    
                    fColor = vec4(color.xyz * factor, color.w);
                }
            ''')
        end
        
        def self.color_shader()
            Shader.new('''
                #version 130
                in vec3 position;
                uniform mat4 modelview;
                uniform mat4 perspective;
                
                void main() {
                    gl_Position = perspective * modelView * vec4(position, 1);
                }
            ''','''
                #version 130
                out vec4 fColor;
                uniform vec4 color;
                
                void main() {
                    fColor = color;
                }
            ''')
        end
        
        def self.phong_shader()
            Shader.new('''
                #version 130
                in vec3 position;
                in vec3 normal;
                out vec3 vPosition;
                out vec3 vNormal;
                uniform mat4 modelview;
                uniform mat4 perspective;
                
                void main() {
                    vec4 hPosition = modelview * vec4(position, 1);
                    vPosition = hPosition.xyz;
                    vNormal = (modelview * vec4(normal, 1)).xyz;
                    
                    gl_Position = perspective * hPosition;
                }
            ''','''
                #version 130
                in vec3 vPosition;
                in vec3 vNormal;
                out vec4 fColor;
                uniform vec4 color;
                uniform vec3 light;
                
                float PhongIntensity(vec3 pos, vec3 norm) {
                    vec3 N = normalize(norm);
                    vec3 L = normalize(light - pos);
                    vec3 E = normalize(pos);
                    vec3 R = reflect(L, N);
                    
                    float diffuse = abs(dot(N, L));
                    float specular = abs(dot(R, E));
                    
                    return clamp(pow(specular, 10) + diffuse, 0, 1);
                }
                
                void main() {
                    float intensity = PhongIntensity(vPosition, vNormal);
                    
                    fColor = vec4(intensity * color.xyz, color.w);
                }
            ''')
        end
    end

end
