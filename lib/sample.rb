require './rubygl'

# Get A Default Setup, All OpenGL Calls Are Valid After A Setup Is Created
config = RubyGL::Setup.new
puts RubyGL::Native::glGetString(RubyGL::Native::GL_VERSION)

# Generate Vertices For A Diamond And Push Them To GPU Memory
diamond_data = RubyGL::ComplexShape.gen_diamond(0.5, 0.5, 14)
diamond_buff = RubyGL::VertexArray.new(diamond_data)

# Setup Our Perspective Matrix And Pre-Programmed Shader
persp_mat = RubyGL::Matrix.perspective(90, 500.0 / 500.0, -0.001, -500)
shader = RubyGL::ShaderGenerator.faceted_shader()
shader.use_program()

# Get The Locations Of Our Input "Attribute" Variables To The Shader
position_loc = shader.attrib_location("position")
mv_loc = shader.uniform_location("modelView")

# Associate Our position Variable With Our Diamond GPU Buffer (3 Components Per Vertex)
diamond_buff.bind() # Always Has To Be Bound Before Associating Attribute Pointers
diamond_buff.vertex_attrib_ptr(position_loc, 3)

# Powerful Shorthand For Specifying An OpenGL Uniform Function, Uniform Variable 
# Name, Input Data, And Any Extra Parameters Required By The Given Function Symbol 
shader.send_uniform(:glUniformMatrix4fv, "persp", persp_mat.to_a, 1, RubyGL::Native::GL_FALSE)
shader.send_uniform(:glUniform4fv, "vLight", [1.0, 0.0, 0.0, 1.0], 1)
shader.send_uniform(:glUniform4fv, "color", [1.0, 0.0, 0.0, 1.0], 1)

# Standard Depth Test So That Z-Buffer Testing Is Used
RubyGL::Native.glEnable(RubyGL::Native::GL_DEPTH_TEST)

# Track The Frame Time And Get A Counter For Rotation
frames, counter = 0, 0
time = Time.now.strftime("%s").to_i

# Main Program Loop
loop {
    RubyGL::Native.glClearColor(1.0, 1.0, 1.0, 1.0)
    RubyGL::Native.glClear(RubyGL::Native::GL_COLOR_BUFFER_BIT | RubyGL::Native::GL_DEPTH_BUFFER_BIT)

    # Matrix Operations Are Applied To The Object In Reverse Order They Were Multiplied
    t1 = RubyGL::Matrix.translation(0.0, -0.25, -0.15) # Translate Fourth
    r1 = RubyGL::Matrix.rotation(0.0, 1.0, 0.0, counter)
    r2 = RubyGL::Matrix.rotation(0.0, 0.0, 1.0, 45)
    r3 = RubyGL::Matrix.rotation(0.0, 1.0, 0.0, -counter)
    t1 *= r1 # Spin Third
    t1 *= r2 # Tilt (45 Degrees) Second
    t1 *= r3 # Roll First
    shader.send_uniform(:glUniformMatrix4fv, "modelView", t1.to_a, 1, RubyGL::Native::GL_FALSE)
    
    frames += 1
    counter += 0.05
    
    # Draw Our Diamond (3 Components Per Vertex)
    diamond_buff.draw(3)
    
    # Calculate Frame Time
    if (((Time.now.strftime("%s").to_i - time) * 1000.0).to_i > 1) then
        puts frames
        frames = 0
        time = Time.now.strftime("%s").to_i
    end
    
    # Any Updates That Our Default Setup Needs To Perform
    config.update_window()
    
    # Run Any Input Callbacks That Have Been Triggered
    RubyGL::Native.pumpEvents()
}