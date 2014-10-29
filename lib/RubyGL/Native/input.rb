require 'ffi'

module RubyGL::Native
    attach_function :initInput, [], :int
    attach_function :quitInput, [], :void
    attach_function :addEventWatch, [:pointer, :pointer], :void
    attach_function :pumpEvents, [], :void
end