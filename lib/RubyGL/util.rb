
module RubyGL
    
    class Util
        # Returns The Value Of The Array At The Wrapped Index Value
        def self.overflow_wrap(array, index)
            array[index % array.size]
        end
        
        def self.gen_index_arrays(vertex_array)
            
        end
        
        def self.gen_vertex_normals(vertices)
            normals = Array.new(vertices.size, 0)
        
            vertices.each_slice(9) { |x1, y1, z1, x2, y2, z2, x3, y3, z3|
                
            }
        end
    end
    
end
