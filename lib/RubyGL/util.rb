
module RubyGL
    
    class Util
        # Returns the value of the array at the overflow wrapped index value.
        def self.overflow_wrap(array, index)
            array[index % array.size]
        end
        
        # Returns [vertices, indices] where vertices is an array of unique vertices
        # corresponding to the vertices in vertex_array and indices is the zero based
        # index array that references the unqiue vertices stored in vertices.
        def self.gen_index_arrays(vertex_array, components)
            unique_points, point_indices, index_hash = [], [], {}
            
            curr_index = 0
            vertex_array.each_slice(components) { |point|
                index = index_hash[point]
                
                if index then
                    point_indices.push(index)
                else
                    unique_points.push(point)
                    point_indices.push(curr_index)
                    
                    index_hash[point] = curr_index
                    curr_index += 1
                end
            }
            unique_points.flatten!
            
            [unique_points, point_indices]
        end
        
        
        # Returns an array of vertex normals which is indexable by the indices array.
        # The components parameter should be the number of components per vertex for
        # each triangle. 
        # 
        # The vertices parameters must contain 3 component vertices or this function 
        # will not be able to compute appropriate normals.
        def self.gen_vertex_normals(indices, vertices)
            normals = Array.new(vertices.size, Vec3.new)
            
            indices.each_slice(3) { |i1, i2, i3|
                # 3 Components Per Vertex (Index References 3 Components)
                adj_i1, adj_i2, adj_i3 = i1 * 3, i2 * 3, i3 * 3
                
                # Construct Triangle Vertices
                v1 = Vec3.new(vertices[adj_i1..adj_i1 + 2])
                v2 = Vec3.new(vertices[adj_i2..adj_i2 + 2])
                v3 = Vec3.new(vertices[adj_i3..adj_i3 + 2])
                
                d1 = v2 - v1
                d2 = v3 - v2
                
                normal = d1.cross(d2)
                normal.norm!
                
                normals[i1] += normal
                normals[i2] += normal
                normals[i3] += normal
            }
            
            # Normalize All Vectors And Convert From Vec3 To Flat Array
            normals.map! { |normal_vector|
                normal_vector.norm!
                
                normal_vector.to_a
            }
            normals.flatten!
            
            normals
        end
    end
    
end
