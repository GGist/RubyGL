
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

    class Vector
        def initialize(size = 4)
            @vector = Array.new(size, 0.0)
        end
        
        def norm()
            new_vector = @vector.dup.norm!
            
            new_vector
        end
        
        def norm!()
            length = self.len
            
            for i in 0...@vector.size
                @vector[i] /= length
            end
        end
        
        def len()
            sum = 0
            
            for i in 0...@vector.size
                sum += @vector[i] * @vector[i]
            end
            
            Math::sqrt(sum)
        end
        
        def dim()
            @vector.size
        end
        
        def [](index)
            @vector[index]
        end
        
        def []=(index, value)
            @vector[index] = value
        end
        
        def to_ary()
            Array.new(@vector)
        end
        
        def to_a()
            self.to_ary
        end
    end

    # Stored In Column Order For Interoperability With OpenGL. Subscript Operator
    # Will Return A Vector That Represents A Column Within The Matrix. This Matrix
    # Class Only Supports Matrices Where The Number Of Rows Equals The Number Of
    # Columns; Operations Are Constrained As Such.
    class Matrix
        def initialize(diag = 1.0, dim = 4)
            @matrix = Array.new(dim) { |index|
                column = Vector.new(dim)
                column[index] = diag
                
                column
            }
        end
        
        def self.translation(x, y, z)
            matrix = Matrix.new(1.0, 4)
            
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
            
            rot_matrix = Matrix.new(1.0, 4)
            axis_priority.each { |(axis, _)|
                mat = Matrix.new(1.0, 4)
            
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
            
            mat = Matrix.new(1.0, 4)
            mat[0][0] = z_near / right
            mat[1][1] = z_near / top
            mat[2][2] = -(z_far + z_near) / (z_far - z_near)
            mat[3][2] = -2.0 * z_far * z_near / (z_far - z_near)
            mat[2][3] = -1.0
            
            mat
        end
        
        def self.orthogonal(left, right, bottom, top, z_near = -1.0, z_far = 1.0)
            mat = Matrix.new(1.0, 4)
            mat[0][0] = 2.0 / (right - left)
            mat[1][1] = 2.0 / (top - bottom)
            mat[2][2] = 2.0 / (z_near - z_far)
            mat[3][3] = 1.0
            mat[3][0] = -(right + left) / (right - left)
            mat[3][1] = -(top + bottom) / (top - bottom)
            mat[3][2] = -(z_far + z_near) / (z_far - z_near)
            
            mat
        end
        
        def dim()
            @matrix.size
        end
        
        def [](column)
            @matrix[column]
        end
        
        def []=(column, value)
            @matrix[column] = value
        end
        
        def *(other_matrix)
            if (self.dim != other_matrix.dim) then
                raise "Cannot Multiply Matrices Together: Matrices Have Different Dimensions"
            end
        
            new_matrix = Matrix.new(0, self.dim)
            for i in 0...self.dim
                for j in 0...self.dim
                    for k in 0...self.dim
                        new_matrix[j][i] += self[k][i] * other_matrix[j][k]
                    end
                end
            end
            
            new_matrix
        end
        
        def to_ary()
            @matrix.collect { |vec|
                vec.to_ary
            }.flatten!
        end
        
        def to_a()
            self.to_ary
        end
    end
    
end