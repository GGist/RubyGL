
module RubyGL

    class Vector
        def initialize(size = 4)
            @vector = Array.new(size, 0.0)
        end
        
        def dim
            @vector.size
        end
        
        def [](index)
            @vector[index]
        end
        
        def []=(index, value)
            @vector[index] = value
        end
        
        def to_ary
            Array.new(@vector)
        end
        
        def to_a
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
            
            matrix[0][3] = x
            matrix[1][3] = y
            matrix[2][3] = z
            
            matrix
        end
        
        def self.rotation(x_axis, y_axis, z_axis, theta)
            rad_angle = MathHelper::deg_to_rad(theta)
            sin_angle = Math::sin(rad_angle)
            cos_angle = Math::cos(rad_angle)
            
            rot_matrix = Matrix.new(1.0, 4)
            
            if x_axis then
                x_mat = Matrix.new(1.0, 4)
                
                x_mat[2][2] = x_mat[1][1] = cos_angle
                x_mat[2][1] = sin_angle
                x_mat[1][2] = -x_mat[2][1]
                
                rot_matrix *= x_mat
            end
            
            if y_axis then
                y_mat = Matrix.new(1.0, 4)
                
                y_mat[2][2] = y_mat[0][0] = cos_angle
                y_mat[0][2] = sin_angle
                y_mat[2][0] = -y_mat[0][2]
                
                rot_matrix *= y_mat
            end
            
            if z_axis then
                z_mat = Matrix.new(1.0, 4)
                
                z_mat[0][0] = z_mat[1][1] = cos_angle
                z_mat[1][0] = sin_angle
                z_mat[0][1] = -z_mat[1][0]
                
                rot_matrix *= z_mat
            end
            
            rot_matrix
        end
        
        def self.perspective(fov, aspect, z_near, z_far)
            top = Math::tan(MathHelper::deg_to_rad(fov) / 2) * z_near
            right = top * aspect
            
            mat = Matrix.new(1.0, 4)
            mat[0][0] = z_near / right
            mat[1][1] = z_near / top
            mat[2][2] = -(z_far + z_near) / (z_far - z_near)
            mat[2][3] = -2.0 * z_far * z_near / (z_far - z_near)
            mat[3][2] = -1.0
            
            mat
        end
        
        def self.orthogonal(left, right, bottom, top, z_near = -1.0, z_far = 1.0)
            mat = Matrix.new(1.0, 4)
            mat[0][0] = 2.0 / (right - left)
            mat[1][1] = 2.0 / (top - bottom)
            mat[2][2] = 2.0 / (z_near - z_far)
            mat[3][3] = 1.0
            mat[0][3] = -(right + left) / (right - left)
            mat[1][3] = -(top + bottom) / (top - bottom)
            mat[2][3] = -(z_far + z_near) / (z_far - z_near)
            
            mat
        end
        
        def dim
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
                        new_matrix[i][j] += self[i][k] * other_matrix[k][j]
                    end
                end
            end
            
            new_matrix
        end
        
        def to_ary
            @matrix.collect { |vec|
                vec.to_ary
            }.flatten!
        end
        
        def to_a
            self.to_ary
        end
    end

    class MathHelper
        @@PI_DIV = Math::PI / 180.0
        @@DIV_PI = 180.0 / Math::PI
        
        def self.deg_to_rad(degrees)
            degrees * @@PI_DIV
        end
        
        def self.rad_to_deg(radians)
            radians * @@DIV_PI
        end
    end
    
end