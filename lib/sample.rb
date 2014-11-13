require './rubygl'

# Setup Code
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
RubyGL::Native.makeCurrent(window, context)
RubyGL::Native.setSwapInterval(0)

# User Code
persp_matrix = RubyGL::Matrix.perspective(90, 500.0 / 500.0, -0.001, -500)
diamond_buff = RubyGL::VertexArray.new(RubyGL::ComplexShape.gen_diamond(0.5, 0.5, 14))
color_shader = RubyGL::ShaderGenerator.faceted_shader()
color_shader.use_program()

pos_loc = color_shader.attrib_location("position")
mv_mat_loc = color_shader.uniform_location("modelView")
persp_mat_loc = color_shader.uniform_location("persp")
color_loc = color_shader.uniform_location("color")

t = FFI::MemoryPointer.new(:float, 16)
t.write_array_of_float(persp_matrix.to_a)
RubyGL::Native.glUniformMatrix4fv(persp_mat_loc, 1, 0, t)

t = FFI::MemoryPointer.new(:float, 4)
t.write_array_of_float([1.0, 0.0, 0.0, 1.0])
RubyGL::Native.glUniform4fv(color_loc, 1, t)
t = FFI::MemoryPointer.new(:float, 16)
diamond_buff.bind()
diamond_buff.vertex_attrib_ptr(pos_loc, 3)

RubyGL::Native.glEnable(RubyGL::Native::GL_DEPTH_TEST)
puts RubyGL::Native::glGetString(RubyGL::Native::GL_VERSION)

counter = 0
frames = 0
time = Time.now.strftime("%s").to_i
loop {
    RubyGL::Native.glClearColor(1.0, 1.0, 1.0, 1.0)
    RubyGL::Native.glClear(RubyGL::Native::GL_COLOR_BUFFER_BIT | RubyGL::Native::GL_DEPTH_BUFFER_BIT)

    rotation = RubyGL::Matrix.rotation(1.8, 0.0, 1.5, counter)
    translation = RubyGL::Matrix.translation(0, 0, -0.5)
    translation *= rotation
    t.write_array_of_float(translation.to_a)
    RubyGL::Native.glUniformMatrix4fv(mv_mat_loc, 1, 0, t)
    
    frames += 1
    counter += 0.05
    
    diamond_buff.draw(3)
    
    if (((Time.now.strftime("%s").to_i - time) * 1000.0).to_i > 1) then
        puts frames
        frames = 0
        time = Time.now.strftime("%s").to_i
    end
    RubyGL::Native.swapWindow(window)
    RubyGL::Native.pumpEvents()
}