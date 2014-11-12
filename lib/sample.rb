require './rubygl'

v_src = '''
    #version 300
        in vec3 vPosition;
    
    void main() {
        gl_Position = vec4(vPosition, 1);
    }
'''
f_src = '''
    #version 300
    out vec4 fColor;
        
    void main() {
        fColor = vec4(1, 0, 0, 1);
    }
'''

def allocate_memory()
    mem_ptr = FFI::MemoryPointer.new(:pointer)
    RubyGL::Native.glGenBuffers(1, mem_ptr);

    RubyGL::Native.glBindBuffer(RubyGL::Native::GL_ARRAY_BUFFER, mem_ptr.get_int(0))
    
    floats = RubyGL::ComplexShape::gen_diamond(0.5, 0.5, 4)
    data = FFI::MemoryPointer.new(:float, floats.size)
    data.write_array_of_float(floats)
    RubyGL::Native.glBufferData(RubyGL::Native::GL_ARRAY_BUFFER, floats.size * 4, data, RubyGL::Native::GL_STATIC_DRAW)
    
    loc = RubyGL::Native.glGetAttribLocation(3, "vPosition")
    puts loc
    RubyGL::Native.glEnableVertexAttribArray(loc)
    RubyGL::Native.glVertexAttribPointer(loc, 3, RubyGL::Native::GL_FLOAT, RubyGL::Native::GL_FALSE, 0, FFI::MemoryPointer::NULL)
end

a = RubyGL::Matrix.rotation(false, false, true, 90)
puts a.to_a.to_s
t = RubyGL::Matrix.perspective(15, 930.0 / 800.0, -0.001, -500)
RubyGL::Native.initWindow
RubyGL::Native.initInput

RubyGL::Native.loadLibrary(FFI::Pointer::NULL)

RubyGL::Native.setAttribute(:context_major_version, 4)
RubyGL::Native.setAttribute(:context_minor_version, 2)
RubyGL::Native.setAttribute(:context_profile_mask, RubyGL::Native.CONTEXT_PROFILE_COMPATIBILITY)
RubyGL::Native.setAttribute(:depth_size, 24)
RubyGL::Native.setAttribute(:doublebuffer, 1)

window = RubyGL::Native.createWindow("RubyGL Test Window", 50, 50, 500, 500, RubyGL::Native.OPENGL)
context = RubyGL::Native.createContext(window)
RubyGL::Native.glEnable(RubyGL::Native::GL_DEPTH_TEST)
shader = RubyGL::Shader.new(v_src, f_src)
allocate_memory()
shader.use_shader()

RubyGL::Native.makeCurrent(window, context)
RubyGL::Native.setSwapInterval(0)

puts RubyGL::Native::glGetString(RubyGL::Native::GL_VERSION)

frames = 0
time = Time.now.strftime("%s").to_i

mem = FFI::MemoryPointer.new(:int, 3)
mem.put_array_of_int32(0, [0, 1, 2])

loop {
    RubyGL::Native.glClearColor(1.0, 1.0, 0.0, 1.0)
    RubyGL::Native.glClear(RubyGL::Native::GL_COLOR_BUFFER_BIT | RubyGL::Native::GL_DEPTH_BUFFER_BIT)

    frames += 1
    
    RubyGL::Native.glDrawArrays(RubyGL::Native::GL_TRIANGLES, 0, 540 / 3)
    #RubyGL::Native.glDrawElements(RubyGL::Native::GL_TRIANGLES, 540 / 3, RubyGL::Native::GL_UNSIGNED_INT, mem)

    if (((Time.now.strftime("%s").to_i - time) * 1000.0).to_i > 1) then
        puts frames
        frames = 0
        time = Time.now.strftime("%s").to_i
    end
    RubyGL::Native.glFlush()
    RubyGL::Native.swapWindow(window)
    RubyGL::Native.pumpEvents()
}