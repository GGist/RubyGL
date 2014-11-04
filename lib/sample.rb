require './rubygl'

def create_shader()
    v_shader = RubyGL::Native.glCreateShader(RubyGL::Native::GL_VERTEX_SHADER)
    f_shader = RubyGL::Native.glCreateShader(RubyGL::Native::GL_FRAGMENT_SHADER)
    
    v_src = '''
        #version 150
        in vec3 vPosition;
    
        void main() {
            gl_Position = vec4(vPosition, 1);
        }
    '''
    f_src = '''
        #version 150
        out vec4 fColor;
        
        void main() {
            fColor = vec4(1, 0, 0, 1);
        }
    '''
    
    src_ptr = FFI::MemoryPointer.new(:pointer)
    len_ptr = FFI::MemoryPointer.new(:int)
    
    v_src_ptr = FFI::MemoryPointer.from_string(v_src)
    
    f_src_ptr = FFI::MemoryPointer.from_string(f_src)
    
    src_ptr.write_pointer(v_src_ptr.address)
    len_ptr.write_int(v_src.size)
    RubyGL::Native.glShaderSource(v_shader, 1, src_ptr, len_ptr)
    
    src_ptr.write_pointer(f_src_ptr.address)
    len_ptr.write_int(f_src.size)
    RubyGL::Native.glShaderSource(f_shader, 1, src_ptr, len_ptr)
    
    RubyGL::Native.glCompileShader(v_shader)
    RubyGL::Native.glCompileShader(f_shader)
    
    test_ptr = FFI::MemoryPointer.new(:int)
    
    RubyGL::Native.glGetShaderiv(f_shader, RubyGL::Native::GL_COMPILE_STATUS, test_ptr)
    puts test_ptr.get_int 0
    
    program = RubyGL::Native.glCreateProgram()
    
    RubyGL::Native.glAttachShader(program, v_shader)
    RubyGL::Native.glAttachShader(program, f_shader)
    
    RubyGL::Native.glLinkProgram(program)
end

def allocate_memory()
    
end

RubyGL::Native.initWindow
RubyGL::Native.initInput

RubyGL::Native.loadLibrary(FFI::Pointer::NULL)

RubyGL::Native.setAttribute(:context_major_version, 3)
RubyGL::Native.setAttribute(:context_minor_version, 3)
RubyGL::Native.setAttribute(:depth_size, 24)
RubyGL::Native.setAttribute(:doublebuffer, 1)

window = RubyGL::Native.createWindow("RubyGL Test Window", 50, 50, 500, 500, RubyGL::Native.OPENGL)
context = RubyGL::Native.createContext(window)
#create_shader()

RubyGL::Native.makeCurrent(window, context)
RubyGL::Native.setSwapInterval(0)

puts RubyGL::Native::glGetString(RubyGL::Native::GL_VERSION)

frames = 0
time = Time.now.strftime("%s").to_i

loop {
    RubyGL::Native.glClearColor(0.0, 1.0, 0.0, 1.0)
    RubyGL::Native.glClear(RubyGL::Native::GL_COLOR_BUFFER_BIT)

    RubyGL::Native.swapWindow(window)
    frames += 1

    if (((Time.now.strftime("%s").to_i - time) * 1000.0).to_i > 1) then
        puts frames
        frames = 0
        time = Time.now.strftime("%s").to_i
    end
    
    RubyGL::Native.pumpEvents()
}