require 'ffi'

module RubyGL::Native
	attach_function :initWindow, [], :int
	attach_function :quitWindow, [], :void
	attach_function :createWindow, [:string, :int, :int, :int, :int, :uint32], :pointer
	attach_function :destroyWindow, [:pointer], :void
	attach_function :hideWindow, [:pointer], :void
	attach_function :showWindow, [:pointer], :void
	attach_function :setWindowBrightness, [:pointer, :float], :int
	attach_function :showSimpleMessageBox, [:uint32, :string, :string, :pointer], :int
	
	attach_variable :FULLSCREEN, :int
	attach_variable :OPENGL, :int
	attach_variable :SHOWN, :int
	attach_variable :HIDDEN, :int
	attach_variable :BORDERLESS, :int
	attach_variable :RESIZABLE, :int
	attach_variable :MINIMIZED, :int
	attach_variable :MAXIMIZED, :int
	attach_variable :INPUT_FOCUS, :int
	attach_variable :MOUSE_FOCUS, :int
	attach_variable :FULLSCREEN_DESKTOP, :int
	attach_variable :ALLOW_HIGHDPI, :int
end