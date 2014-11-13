require_relative './Native/opengl'

module RubyGL

    class Shader
        public
        def initialize(vert_src, frag_src)
            @v_shader_src = vert_src
            @f_shader_src = frag_src
            
            @v_shader_id = Native.glCreateShader(Native::GL_VERTEX_SHADER)
            @f_shader_id = Native.glCreateShader(Native::GL_FRAGMENT_SHADER)
            
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
        
        def vertex_source()
            @v_shader_src
        end
        
        def fragment_source()
            @f_shader_src
        end
        
        def attrib_location(var_name)
            Native.glGetAttribLocation(@program_id, var_name)
        end
        
        def uniform_location(var_name)
            Native.glGetUniformLocation(@program_id, var_name)
        end
        
        private
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
                uniform mat4 modelView;
                uniform mat4 persp;
                
                void main() {
                    vec4 hPosition = modelView * vec4(position, 1);
                    vPosition = hPosition.xyz;
                    gl_Position = persp * hPosition;
                }
            ''','''
                #version 130
                in vec3 vPosition;
                out vec4 fColor;
                uniform vec4 color;
                uniform vec3 vLight = vec3(-1, -0.5, -1);
                
                void main() {
                    vec3 dx = dFdy(vPosition);
                    vec3 dy = dFdx(vPosition);
                    vec3 triangle_norm = normalize(cross(dx, dy));
                    float factor = clamp(dot(triangle_norm, vLight), 0, 1);
                    
                    fColor = vec4(color.xyz * factor, color.w);
                }
            ''')
        end
        
        def self.color_shader()
            Shader.new('''
                #version 130
                in vec3 position;
                uniform mat4 modelView;
                uniform mat4 persp;
                
                void main() {
                    gl_Position = persp * modelView * vec4(position, 1);
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
                out vec3 vPosition;
                uniform mat4 modelView;
                uniform mat4 persp;
                
                void main() {
                    vec4 hPosition = modelView * vec4(position, 1);
                    vPosition = hPosition;
                    gl_Position = persp * hPosition;
                }
            ''','''
                #version 130
                in vec3 vPosition;
                out vec4 fColor;
                uniform vec4 color;
                uniform vec3 vLight = vec3(-1, -0.5, -1);
                
                void main() {
                    vec3 dx = dFdy(vPosition);
                    vec3 dy = dFdx(vPosition);
                    vec3 triangle_norm = normalize(cross(dx, dy));
                    float factor = clamp(dot(triangle_norm, vLight), 0, 1);
                    
                    fColor = vec4(color.xyz * factor, color.w);
                }
            ''')
        end
    end

end
