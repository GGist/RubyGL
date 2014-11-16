
module RubyGL

    class Conversion
        @@PI_DIV = Math::PI / 180.0
        @@DIV_PI = 180.0 / Math::PI
        
        def self.deg_to_rad(degrees)
            degrees * @@PI_DIV
        end
        
        def self.rad_to_deg(radians)
            radians * @@DIV_PI
        end
    end

    class Vec2
        def initialize()
            @data = Array.new(2, 0)
        end
        
        def norm!()
            curr_len = self.len()
            
            for i in 0...@data.size
                @data /= curr_len
            end
        end
        
        def norm()
            new_vector = Vec2.new()
            
            for i in 0...@data.size
                new_vector[i] = @data[i]
            end
            new_vector.norm!
            
            new_vector
        end
        
        def len()
            sum = 0
            
            for i in 0...@data.size
                sum += @data[i] * @data[i]
            end
            
            Math::sqrt(sum)
        end
        
        def [](index)
            @data[index]
        end
        
        def []=(index, value)
            @data[index] = value
        end
        
        def to_ary()
            Array.new(@data)
        end
        
        def to_a()
            self.to_ary
        end
    end
    
    class Vec3
        def initialize()
            @data = Array.new(3, 0)
        end
        
        def norm!()
            curr_len = self.len()
            
            for i in 0...@data.size
                @data /= curr_len
            end
        end
        
        def norm()
            new_vector = Vec2.new()
            
            for i in 0...@data.size
                new_vector[i] = @data[i]
            end
            new_vector.norm!
            
            new_vector
        end
        
        def len()
            sum = 0
            
            for i in 0...@data.size
                sum += @data[i] * @data[i]
            end
            
            Math::sqrt(sum)
        end
        
        def [](index)
            @data[index]
        end
        
        def []=(index, value)
            @data[index] = value
        end
        
        def to_ary()
            Array.new(@data)
        end
        
        def to_a()
            self.to_ary
        end
    end
    
    class Vec4
        def initialize()
            @data = Array.new(4, 0)
        end
        
        def norm!()
            curr_len = self.len()
            
            for i in 0...@data.size
                @data /= curr_len
            end
        end
        
        def norm()
            new_vector = Vec2.new()
            
            for i in 0...@data.size
                new_vector[i] = @data[i]
            end
            new_vector.norm!
            
            new_vector
        end
        
        def len()
            sum = 0
            
            for i in 0...@data.size
                sum += @data[i] * @data[i]
            end
            
            Math::sqrt(sum)
        end
        
        def [](index)
            @data[index]
        end
        
        def []=(index, value)
            @data[index] = value
        end
        
        def to_ary()
            Array.new(@data)
        end
        
        def to_a()
            self.to_ary
        end
    end
    
    # Stored In Column Order For Interoperability With OpenGL. Subscript Operator
    # Will Return A Vector That Represents A Column Within The Matrix. This Matrix
    # Class Only Supports Matrices Where The Number Of Rows Equals The Number Of
    # Columns; Operations Are Constrained As Such.
    class Mat4
        def initialize(diagonal = 1.0)
            @data = Array.new(4) { |index|
                column = Vec4.new
                column[index] = diagonal
                
                column
            }
        end
        
        def self.translation(x, y, z)
            matrix = Mat4.new(1.0)
            
            matrix[3][0] = x
            matrix[3][1] = y
            matrix[3][2] = z
            
            matrix
        end
        
        # The axis value should be 0 if that axis should not be rotated around;
        # any other value indicates its priority (higher priority axis is rotated
        # around before the lower priority axis).
        def self.rotation(x_axis, y_axis, z_axis, theta)
            rad_angle = Conversion::deg_to_rad(theta)
            sin_angle = Math::sin(rad_angle)
            cos_angle = Math::cos(rad_angle)
            
            # Multiply Lower -> Higher To Get Ordering Correct
            axis_priority = [[:x, x_axis], [:y, y_axis], [:z, z_axis]]
            axis_priority.delete_if { |(_, val)| 
                val == 0 
            }.sort!.reverse!
            
            rot_matrix = Mat4.new(1.0)
            axis_priority.each { |(axis, _)|
                mat = Mat4.new(1.0)
            
                if axis == :x then
                    mat[1][1] = mat[2][2] = cos_angle
                    mat[1][2] = sin_angle
                    mat[2][1] = -sin_angle
                elsif axis == :y then
                    mat[0][0] = mat[2][2] = cos_angle
                    mat[0][2] = -sin_angle
                    mat[2][0] = sin_angle
                else
                    mat[0][0] = mat[1][1] = cos_angle
                    mat[0][1] = sin_angle
                    mat[1][0] = -sin_angle
                end
                
                rot_matrix *= mat
            }
            
            rot_matrix
        end
        
        def self.perspective(fov, aspect, z_near, z_far)
            top = Math::tan(Conversion::deg_to_rad(fov) / 2) * z_near
            right = top * aspect
            
            mat = Mat4.new(1.0)
            mat[0][0] = z_near / right
            mat[1][1] = z_near / top
            mat[2][2] = -(z_far + z_near) / (z_far - z_near)
            mat[3][2] = -2.0 * z_far * z_near / (z_far - z_near)
            mat[2][3] = -1.0
            
            mat
        end
        
        def self.orthogonal(left, right, bottom, top, z_near = -1.0, z_far = 1.0)
            mat = Mat4.new(1.0)
            mat[0][0] = 2.0 / (right - left)
            mat[1][1] = 2.0 / (top - bottom)
            mat[2][2] = 2.0 / (z_near - z_far)
            mat[3][3] = 1.0
            mat[3][0] = -(right + left) / (right - left)
            mat[3][1] = -(top + bottom) / (top - bottom)
            mat[3][2] = -(z_far + z_near) / (z_far - z_near)
            
            mat
        end
        
        def *(other_matrix)
            new_matrix = Mat4.new(0)
            
            for i in 0...self.dim
                for j in 0...self.dim
                    for k in 0...self.dim
                        new_matrix[j][i] += self[k][i] * other_matrix[j][k]
                    end
                end
            end
            
            new_matrix
        end
        
        def dim()
            @data.size()
        end
        
        def [](index)
            @data[index]
        end
        
        def []=(index, value)
            @data[index] = value
        end
        
        def to_ary()
            @data.collect { |vec|
                vec.to_ary
            }.flatten!
        end
        
        def to_a()
            self.to_ary
        end
    end
    
end