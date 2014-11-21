require '../lib/rubygl'

# Default Setup (Window + OpenGL Context), OpenGL Calls Are Valid After This Is Created
config = RubyGL::DefaultSetup.new
puts RubyGL::Native::glGetString(RubyGL::Native::GL_VERSION)

class Particle
    #GLOBAL_MASS = (density of fluid * total volume) / total particles

    attr_accessor :mass, :velocity, :position, :force, :density, :pressure, 
                  :color
    
    def initialize()
        
    end
    
    def accelerate!(a_pressure, a_viscosity, a_interactive, a_gravity)
        # a = acceleration, d = derivative, a = F / m
        d_velocity  = a_pressure + a_viscosity + a_interactive + a_gravity
        
    end
end

shader = RubyGL::Shader.new('''
    #version 130
	uniform mat4 perspective;
	uniform mat4 modelview;
    in vec3 position;
    in vec3 offset;
    out vec3 vPosition;
	
    void main() {
		vec4 hPosition = modelview * (vec4(offset, 1) + vec4(position, 1));
        vPosition = hPosition.xyz;
        
		gl_Position = perspective * hPosition;
    }
''','''
    #version 130
    in vec3 vPosition;
    uniform vec4 color;
    uniform vec3 light = vec3(-1, -0.5, -0.5);
    out vec4 fColor;

    void main() {
        vec3 dx = dFdy(vPosition);
        vec3 dy = dFdx(vPosition);
        vec3 triangle_norm = normalize(cross(dx, dy));
        float factor = clamp(dot(triangle_norm, light), 0, 1);
        
        fColor = vec4(color.xyz * factor, color.w);
    }
''')
shader.use_program()

sphere = RubyGL::ComplexShape.gen_sphere(0.2, 0)
pos = []

for i in 1..90
    for j in 1..90
        for k in 5..50
            pos.push([i - 5, j - 5, -k])
        end
    end
end
pos.flatten!
puts pos.size / 3
vertices = RubyGL::VertexArray.new(sphere)
positions = RubyGL::VertexArray.new(pos)
persp_mat = RubyGL::Mat4.perspective(90, 500.0 / 500.0, -0.001, -500)

positions.vertex_attrib_ptr(shader.attrib_location("offset"), 3)
positions.vertex_attrib_div(shader.attrib_location("offset"), 1)
vertices.vertex_attrib_ptr(shader.attrib_location("position"), 3)

shader.send_uniform(:glUniformMatrix4fv, "perspective", persp_mat.to_a, 1, RubyGL::Native::GL_FALSE)
shader.send_uniform(:glUniform3fv, "light", [-1.0, -1.0, -1.0], 1)
shader.send_uniform(:glUniform4fv, "color", [1.0, 0.0, 0.0, 1.0], 1)

# Standard Depth Test So That Z-Buffer Testing Is Used
RubyGL::Native.glEnable(RubyGL::Native::GL_DEPTH_TEST)

# Track The Frame Rate And Get A Counter For Rotation
frames, counter = 0, 0
time = Time.now.strftime("%s").to_i

# Main Program Loop
t1 = RubyGL::Mat4.translation(-21, -20, 0.0)
decreasing = false
loop {
    RubyGL::Native.glClearColor(1.0, 1.0, 1.0, 1.0)
    RubyGL::Native.glClear(RubyGL::Native::GL_COLOR_BUFFER_BIT | RubyGL::Native::GL_DEPTH_BUFFER_BIT)
    
    if decreasing then
        if t1[3][2] <= -25 then
            decreasing = false
        end
        
        t1[3][2] -= 0.08
    else
        if t1[3][2] >= 25 then
            decreasing = true
        end
        
        t1[3][2] += 0.08
    end
    r1 = RubyGL::Mat4.rotation(0.0, 0.0, 1.0, counter)
    r1 *= t1
    shader.send_uniform(:glUniformMatrix4fv, "modelview", r1.to_a, 1, RubyGL::Native::GL_FALSE)
	
    frames += 1
    counter += 0.5
    
    # Draw Our Diamond (3 Components Per Vertex)
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