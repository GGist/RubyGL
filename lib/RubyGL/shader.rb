require_relative './Native/opengl'

module RubyGL

    class Shader
        public
        
        
        def initialize(vert_src, frag_src)
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
            
            Shader.compile_status(@v_shader_id)
            Shader.compile_status(@f_shader_id)
            
            @program_id = Native.glCreateProgram()
            
            Native.glAttachShader(@program_id, @v_shader_id)
            Native.glAttachShader(@program_id, @f_shader_id)
            
            Native.glLinkProgram(@program_id)
            
            Shader.link_status(@program_id)
        end
        
        def use_shader()
            Native.glUseProgram(@program_id)
        end
        
        def attrib_location(var_name)
            Native.glGetAttribLocation(@program_id, var_name)
        end
        
        def uniform_location(var_name)
            Native.glGetAttribLocation(@program_id, var_name)
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

end
