require 'ffi'

module RubyGL::Native
    class EventType < FFI::Union
        
    end

    attach_function :initInput, [], :int
    attach_function :quitInput, [], :void
    attach_function :addEventWatch, [:pointer, :pointer], :void
    attach_function :deleteEventWatch, [:pointer, :pointer], :void
    attach_function :pumpEvents, [], :void
end