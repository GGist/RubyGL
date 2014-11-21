require_relative './native/opengl'

module RubyGL

    class VertexArray
        # Allocates a GPU buffer for vertex_array and transfers the data as a vertex
        # attribute array. This allows you to access the given data from within any
        # shader as long as it is bound beforehand.
        def initialize(vertex_array)
            buff_ptr = FFI::MemoryPointer.new(:uint)
            Native.glGenBuffers(1, buff_ptr)
            
            @buffer_id = buff_ptr.get_int(0)
            @buffer_elements = vertex_array.size
            @buffer_valid = true
            
            if @buffer_id <= 0 then
                raise "Could Not Allocate A GPU Buffer For The VertexArray Object"
            end
            
            Native.glBindBuffer(Native::GL_ARRAY_BUFFER, @buffer_id)
            
            vertex_data = FFI::MemoryPointer.new(:float, vertex_array.size)
            vertex_data.write_array_of_float(vertex_array)
            
            Native.glBufferData(Native::GL_ARRAY_BUFFER, vertex_data.size, vertex_data, Native::GL_STATIC_DRAW)
            
            Native.glBindBuffer(Native::GL_ARRAY_BUFFER, 0)
        end
        
        def draw(components)
            raise "Call To VertexArray#draw On Invalid Object" unless @buffer_valid
        
            Native.glDrawArrays(Native::GL_TRIANGLES, 0, @buffer_elements / components)
        end
        
        def draw_instanced(components, iterations)
            raise "Call To VertexArray#draw_instanced On Invalid Object" unless @buffer_valid
            
            Native.glDrawArraysInstanced(Native::GL_TRIANGLES, 0, @buffer_elements / components, iterations)
        end
        
        def vertex_attrib_div(location, instances_per_change)
            raise "Call To VertexArray#vertex_attrib_div On Invalid Object" unless @buffer_valid
            
            Native.glVertexAttribDivisor(location, instances_per_change)
        end
        
        # Binds the VertexArray to the attribute at location within a shader.
        def vertex_attrib_ptr(location, components)
            raise "Call To VertexArray#vertex_attrib_ptr On Invalid Object" unless @buffer_valid
        
            # TODO: Move This To Constructor In The Future
            Native.glEnableVertexAttribArray(location)
            
            Native.glBindBuffer(Native::GL_ARRAY_BUFFER, @buffer_id)
            
            Native.glVertexAttribPointer(location, components, Native::GL_FLOAT, Native::GL_FALSE, 0, FFI::MemoryPointer::NULL)
        
            Native.glBindBuffer(Native::GL_ARRAY_BUFFER, 0)
        end
        
        # This frees the currently allocated GPU buffer for this VertexArray and
        # invalidates this VertexArray object. Any calls to this object after calling
        # this method will throw a runtime error.
        def release()
            buff_ptr = FFI::MemoryPointer.new(:uint)
            buff_ptr.write_uint(@buffer_id)
            
            Native.glDeleteBuffers(1, buff_ptr)
            
            @buffer_valid = false
        end
    end
    
    class IndexArray
        def initialize(index_array)
            buff_ptr = FFI::MemoryPointer.new(:pointer)
            Native.glGenBuffers(1, buff_ptr)
            
            @buffer_id = buff_ptr.get_int(0)
            @buffer_elements = index_array.size
            @buffer_valid = true
            
            if @buffer_id <= 0 then
                raise "Could Not Allocate A GPU Buffer For The IndexArray Object"
            end
            
            Native.glBindBuffer(Native::GL_ELEMENT_ARRAY_BUFFER, @buffer_id)
            
            index_data = FFI::MemoryPointer.new(:uint, index_array.size)
            index_data.write_array_of_uint(index_array)
            
            Native.glBufferData(Native::GL_ELEMENT_ARRAY_BUFFER, index_data.size, index_data, Native::GL_STATIC_DRAW)
            
            Native.glBindBuffer(Native::GL_ELEMENT_ARRAY_BUFFER, 0)
        end
        
        def draw(components)
            raise "Call To IndexArray#draw On Frozen Object" unless @buffer_valid
        
            Native.glBindBuffer(Native::GL_ELEMENT_ARRAY_BUFFER, @buffer_id)
        
            Native.glDrawElements(Native::GL_TRIANGLES, @buffer_elements, Native::GL_UNSIGNED_INT, FFI::MemoryPointer::NULL)
        
            Native.glBindBuffer(Native::GL_ELEMENT_ARRAY_BUFFER, 0)
        end
        
        # This frees the currently allocated GPU buffer for this IndexArray and
        # invalidates this IndexArray object. Any calls to this object after calling
        # this method will throw a runtime error.
        def release()
            buff_ptr = FFI::MemoryPointer.new(:uint)
            buff_ptr.put_int(@buffer_id)
            
            Native.glDeleteBuffers(1, buff_ptr)
            
            @buffer_valid = false
        end
    end

end