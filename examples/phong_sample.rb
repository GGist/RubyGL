require '../lib/rubygl'

# Default Setup (Window + OpenGL Context), OpenGL Calls Are Valid After This Is Created
config = RubyGL::DefaultSetup.new
puts RubyGL::Native::glGetString(RubyGL::Native::GL_VERSION)

# Generate Indices, Vertices, And Vertex Normals For A Diamond
(vertices, indices) = RubyGL::Util.gen_index_arrays(RubyGL::ComplexShape.gen_diamond(0.5, 0.5, 14), 3)
normals = RubyGL::Util.gen_vertex_normals(indices, vertices)

# Push All Of Our Data To The GPU
index_buff = RubyGL::IndexArray.new(indices)
vertex_buff = RubyGL::VertexArray.new(vertices)
normal_buff = RubyGL::VertexArray.new(normals)

# Set Up Our Perspective Matrix And Pre-Programmed Shader
persp_mat = RubyGL::Mat4.perspective(90, 500.0 / 500.0, -0.001, -500)
shader = RubyGL::ShaderGenerator.phong_shader()
shader.use_program()

# Get The Locations Of Our Input "Attribute" Variables To The Shader
position_loc = shader.attrib_location("position")
normal_loc = shader.attrib_location("normal")

# Associate Our position Variable With Our Diamond GPU Buffer (3 Components Per Vertex)
vertex_buff.vertex_attrib_ptr(position_loc, 3)
normal_buff.vertex_attrib_ptr(normal_loc, 3)

# Powerful Shorthand For Specifying An OpenGL Uniform Function, Uniform Variable 
# Name, Input Data, And Any Extra Parameters Required By The Given Function Symbol 
shader.send_uniform(:glUniformMatrix4fv, "perspective", persp_mat.to_a, 1, RubyGL::Native::GL_FALSE)
shader.send_uniform(:glUniform3fv, "light", [1.0, 0.2, 0.5], 1)
shader.send_uniform(:glUniform4fv, "color", [1.0, 0.0, 0.0, 0.2], 1)

# Standard Depth Test So That Z-Buffer Testing Is Used
RubyGL::Native.glEnable(RubyGL::Native::GL_DEPTH_TEST)

# Track The Frame Time And Get A Counter For Rotation
frames, counter = 0, 0
time = Time.now.strftime("%s").to_i

# Main Program Loop
loop {
    RubyGL::Native.glClearColor(1.0, 1.0, 1.0, 1.0)
    RubyGL::Native.glClear(RubyGL::Native::GL_COLOR_BUFFER_BIT | RubyGL::Native::GL_DEPTH_BUFFER_BIT)
    
    # Matrix Operations Are Always Applied In Reverse Order They Were Multiplied
    t1 = RubyGL::Mat4.translation(0.0, -0.25, -0.15) # 4: Translate
    r1 = RubyGL::Mat4.rotation(0.0, 1.0, 0.0, counter)
    r2 = RubyGL::Mat4.rotation(0.0, 0.0, 1.0, 45)
    r3 = RubyGL::Mat4.rotation(0.0, 1.0, 0.0, -counter)
    t1 *= r1 # 3: Spin Around New Y Axis
    t1 *= r2 # 2: Tilt (45 Degrees)
    t1 *= r3 # 1: Spin Around Initial Y Axis
    shader.send_uniform(:glUniformMatrix4fv, "modelview", t1.to_a, 1, RubyGL::Native::GL_FALSE)
    
    frames += 1
    counter += 0.05
    
    # Draw Our Diamond (3 Components Per Vertex)
    index_buff.draw(3)
    
    # Calculate Frame Time
    if (((Time.now.strftime("%s").to_i - time) * 1000.0).to_i > 1) then
        puts frames
        frames = 0
        time = Time.now.strftime("%s").to_i
    end
    
    # Updates Screen And Executes Input Callbacks
    config.end_frame()
}