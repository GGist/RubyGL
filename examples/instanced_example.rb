require '../lib/rubygl'

# Default Setup (Window + OpenGL Context), OpenGL Calls Are Valid After This Is Created
config = RubyGL::DefaultSetup.new({:width => 360, :height => 360})
puts RubyGL::Native::glGetString(RubyGL::Native::GL_VERSION)

# Create A Custom Faceted Shader
shader = RubyGL::Shader.new('''
    #version 130
    uniform mat4 perspective;
    uniform mat4 modelview;
    in vec3 position;
    in vec3 offset;
    out vec3 vPosition;
	
    void main() {
        vec4 hPosition = modelview * vec4(offset + position, 1);
        vPosition = hPosition.xyz;
        
        gl_Position = perspective * hPosition;
    }
''','''
    #version 130
    in vec3 vPosition;
    uniform vec4 color;
    uniform vec3 light;
    out vec4 fColor;

    void main() {
        vec3 dx = dFdy(vPosition);
        vec3 dy = dFdx(vPosition);
        vec3 triangle_norm = normalize(cross(dx, dy));
        float factor = clamp(dot(triangle_norm, light), 0.3, 1);
        
        fColor = vec4(color.xyz * factor, color.w);
    }
''')
shader.use_program()

# Generate A Sphere With Radius 0.2 And 0 Extra Rings (Double Tetrahedron)
sphere = RubyGL::ComplexShape.gen_sphere(0.2, 0)

# Generate Positions For Multiple Copies Of Our Shape
pos = []
for x in 1..60
    for y in 1..60
        for z in 1..60
            pos.push([x * 2, y * 2, -z * 2])
        end
    end
end
pos.flatten!
puts pos.size / 3
# Allocate Vertex Attribute Arrays
vertices = RubyGL::VertexArray.new(sphere)
positions = RubyGL::VertexArray.new(pos)

persp_mat = RubyGL::Mat4.perspective(90, 500.0 / 500.0, -0.001, -500)

# Associate in Values With Our Attribute Arrays
vertices.vertex_attrib_ptr(shader.attrib_location("position"), 3)
positions.vertex_attrib_ptr(shader.attrib_location("offset"), 3)

# Increment Our Position Vector Once Every Instance
positions.vertex_attrib_div(shader.attrib_location("offset"), 1)

# Send Uniforms To Their Respective Shaders
shader.send_uniform(:glUniformMatrix4fv, "perspective", persp_mat.to_a, 1, RubyGL::Native::GL_FALSE)
shader.send_uniform(:glUniform3fv, "light", [-1.0, -1.0, -1.0], 1)
shader.send_uniform(:glUniform4fv, "color", [1.0, 0.0, 0.0, 1.0], 1)

# Standard Depth Test So That Z-Buffer Testing Is Used
RubyGL::Native.glEnable(RubyGL::Native::GL_DEPTH_TEST)

# Used To Reduce Graininess Between Clustered Fragments On The Screen
RubyGL::Native.glEnable(RubyGL::Native::GL_BLEND)
RubyGL::Native.glBlendFunc(RubyGL::Native::GL_ONE, RubyGL::Native::GL_ZERO)

# Track The Frame Rate And Get A Counter For Rotation
frames, counter = 0, 0
time = Time.now.strftime("%s").to_i

# Center Our Grid Of Shapes
t1 = RubyGL::Mat4.translation(-61, -60, -40)
focused, angle = false, 150

# Callback Triggered When Application Is Closed
RubyGL::Event.register(:quit) {
    vertices.release
    positions.release
    config.teardown
    abort("Application Closed")
}

# Main Program Loop
loop {
    RubyGL::Native.glClearColor(1.0, 1.0, 1.0, 1.0)
    RubyGL::Native.glClear(RubyGL::Native::GL_COLOR_BUFFER_BIT | RubyGL::Native::GL_DEPTH_BUFFER_BIT)
    
    # Cube Is Rotated Into Place And Zoomed In To In A Spiral
    r1 = nil
    if !focused then
        r1 = RubyGL::Mat4.rotation(0.0, 1.0, 0.0, angle)
        angle -= 1.0
        
        if angle <= 0 then
            focused = true
        end
        
        r1 *= t1
    else
        r1 = RubyGL::Mat4.rotation(0.0, 0.0, 1.0, counter)
        
        r1 *= t1
        
        t1[3][2] += 0.28
        counter += 0.3
    end
    
    shader.send_uniform(:glUniformMatrix4fv, "modelview", r1.to_a, 1, RubyGL::Native::GL_FALSE)
	
    frames += 1
    
    # Draw Shapes (3 Components Per Vertex & (pos.size / 3) Number Of Instances)
    vertices.draw_instanced(3, pos.size / 3)
    
    # Calculate Frame Rate
    if (((Time.now.strftime("%s").to_i - time) * 1000.0).to_i > 1) then
        puts frames
        frames = 0
        time = Time.now.strftime("%s").to_i
    end
    
    # Updates Screen And Executes Input Callbacks
    config.end_frame()
}
