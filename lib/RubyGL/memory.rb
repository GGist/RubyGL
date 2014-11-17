require_relative './Native/opengl'

module RubyGL

    class VertexArray
        def initialize(vertex_array)
            buff_ptr = FFI::MemoryPointer.new(:pointer)
            Native.glGenBuffers(1, buff_ptr)
            
            @buffer_id = buff_ptr.get_int(0)
            @buffer_elements = vertex_array.size
            
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
            Native.glDrawArrays(Native::GL_TRIANGLES, 0, @buffer_elements / components)
        end
        
        def vertex_attrib_ptr(location, components)
            # TODO: Move This To Constructor In The Future
            Native.glEnableVertexAttribArray(location)
            
            Native.glBindBuffer(Native::GL_ARRAY_BUFFER, @buffer_id)
            
            Native.glVertexAttribPointer(location, components, Native::GL_FLOAT, Native::GL_FALSE, 0, FFI::MemoryPointer::NULL)
        
            Native.glBindBuffer(Native::GL_ARRAY_BUFFER, 0)
        end
    end
    
    class IndexArray
        def initialize(index_array)
            buff_ptr = FFI::MemoryPointer.new(:pointer)
            Native.glGenBuffers(1, buff_ptr)
            
            @buffer_id = buff_ptr.get_int(0)
            @buffer_elements = index_array.size
            
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
            Native.glBindBuffer(Native::GL_ELEMENT_ARRAY_BUFFER, @buffer_id)
        
            Native.glDrawElements(Native::GL_TRIANGLES, @buffer_elements, Native::GL_UNSIGNED_INT, FFI::MemoryPointer::NULL)
        
            Native.glBindBuffer(Native::GL_ELEMENT_ARRAY_BUFFER, 0)
        end
    end

end