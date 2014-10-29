require './rubygl'

RubyGL::Native.initWindow
RubyGL::Native.initInput

RubyGL::Native.loadLibrary(FFI::Pointer::NULL)

RubyGL::Native.setAttribute(:context_major_version, 3)
RubyGL::Native.setAttribute(:context_minor_version, 3)
RubyGL::Native.setAttribute(:depth_size, 24)
RubyGL::Native.setAttribute(:doublebuffer, 1)

window = RubyGL::Native.createWindow("RubyGL Test Window", 50, 50, 500, 500, RubyGL::Native.OPENGL)
context = RubyGL::Native.createContext(window)

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