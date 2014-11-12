require_relative './math'

module RubyGL

    # All Point Operations Return New Points
    class Point
        attr_accessor :x, :y, :z
        
        def initialize(x, y, z = 0)
            @x = x
            @y = y
            @z = z
        end
        
        def +(point)
            Point.new(@x + point.x, @y + point.y, @z + point.z)
        end
        
        def -(point)
            Point.new(@x - point.x, @y - point.y, @z - point.z)
        end
        
        def scale(value)
            Point.new(@x * value, @y * value, @z * value)
        end
        
        def distance(point)
            temp = self - point
            
            Math::sqrt(temp.x * temp.x + temp.y * temp.y + temp.z * temp.z)
        end
        
        def midpoint(point)
            Point.new((@x + point.x) * 0.5, (@y + point.y) * 0.5, (@z + point.z) * 0.5)
        end
        
        def to_ary
            [@x, @y, @z]
        end
        
        def to_a
            self.to_ary
        end
    end

    # Class For Generating 2-D Shapes
    class SimpleShape
    
    end
    
    # Class For Generating 3-D Shapes
    class ComplexShape
        # girdle_facets should be an even number
        def self.gen_diamond(diamond_height, girdle_radius, girdle_facets)
            # Table Y Value Is Equal To diamond_height
            girdle_y_value = diamond_height * 2.0 / 3.0 # Girdle Upper Ring
            crown_y_midpoint = (diamond_height - girdle_y_value) * 2.0 / 3.0
            
            girdle_thickness = diamond_height / 10.0
            
            table_radius = girdle_radius / 2.0
            table_facets = girdle_facets / 2.0
            
            girdle_points = []
            girdle_point_factor = 360.0 / girdle_facets # Multiply With Point Index To Get Degree
            # Generate x And z Values For Diamond Girdle
            for i in 0...girdle_facets
                curr_degree = i.to_f * girdle_point_factor
                curr_rad = MathHelper::deg_to_rad(curr_degree)
                
                x = Math::cos(curr_rad) * girdle_radius
                z = Math::sin(curr_rad) * girdle_radius
                
                girdle_points.push(Point.new(x, girdle_y_value, z))
            end
            
            table_points = []
            table_point_factor = 360.0 / table_facets # Multiply With Point Index To Get Degree
            # Generate x And z Values For Diamond Table
            for i in 0...table_facets
                curr_degree = i.to_f * table_point_factor
                curr_rad = MathHelper::deg_to_rad(curr_degree)
                
                x = Math::cos(curr_rad) * table_radius
                z = Math::sin(curr_rad) * table_radius
                
                table_points.push(Point.new(x, diamond_height, z))
            end
            
            vertex_array = []
            # Traverse Every Other Point On The Girdle
            for i in 0...girdle_points.size / 2
                center_girdle_index = (i * 2) + 1
                left_girdle_index = center_girdle_index - 1
                right_girdle_index = center_girdle_index + 1
                
                gird_center = girdle_points[center_girdle_index]
                gird_left = girdle_points[left_girdle_index]
                gird_right = overflow_wrap(girdle_points, right_girdle_index)
                
                tab_left = table_points[left_girdle_index / 2]
                tab_right = overflow_wrap(table_points, right_girdle_index / 2)
                
                # Crown Triangles
                # Using 3D Equation Of A Line To Get Central Connection Point For Crown
                slope = tab_left.midpoint(tab_right) - gird_center
                crown_midpoint = slope.scale(crown_y_midpoint) + gird_center
                
                vertex_array.push([crown_midpoint.to_a, gird_left.to_a, gird_center.to_a])
                vertex_array.push([crown_midpoint.to_a, gird_center.to_a, gird_right.to_a])
                
                vertex_array.push([crown_midpoint.to_a, tab_left.to_a, gird_left.to_a])
                vertex_array.push([crown_midpoint.to_a, gird_right.to_a, tab_right.to_a])
                
                vertex_array.push([crown_midpoint.to_a, tab_right.to_a, tab_left.to_a])
                
                # Girdle Triangles
                lower_gird_center = Point.new(gird_center.x, gird_center.y - girdle_thickness, gird_center.z)
                lower_gird_left = Point.new(gird_left.x, gird_left.y - girdle_thickness, gird_left.z)
                lower_gird_right = Point.new(gird_right.x, gird_right.y - girdle_thickness, gird_right.z)
                
                vertex_array.push([gird_center.to_a, gird_left.to_a, lower_gird_left.to_a])
                vertex_array.push([gird_center.to_a, lower_gird_left.to_a, lower_gird_center.to_a])
                
                vertex_array.push([gird_center.to_a, lower_gird_center.to_a, gird_right.to_a])
                vertex_array.push([gird_right.to_a, lower_gird_center.to_a, lower_gird_right.to_a])
                
                # Pavilion Triangles
                pavil_bottom = Point.new(0, 0, 0)
                
                vertex_array.push([lower_gird_center.to_a, lower_gird_left.to_a, pavil_bottom.to_a])
                vertex_array.push([lower_gird_center.to_a, pavil_bottom.to_a, lower_gird_right.to_a])
                
                # Table Triangles
                table_mid = Point.new(0, diamond_height, 0)
                
                vertex_array.push([table_mid.to_a, tab_left.to_a, tab_right.to_a])
            end
            
            vertex_array.flatten!
            
            vertex_array
        end
        
        private
        # Wraps Around Array Overflow; Will Not Work For Underflow.
        def self.overflow_wrap(array, index)
            array[index % array.size]
        end
    end
    
end