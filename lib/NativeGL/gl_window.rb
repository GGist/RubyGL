$: << File.expand_path(File.dirname(__FILE__))
require 'ffi'

module CWrapper
	extend FFI::Library
	ffi_lib 'libwin.so'
	
	attach_function :loadLibrary, [], :int
	attach_function :createGLWindow, [:int, :int, :int, :int, :int, :int, 
	                                  :string, :uint32], :pointer
	attach_function :createGLContext, [:pointer], :int
	attach_function :setGLAttributes, [:int, :int, :int, :int], :void
										
	attach_function :swapBuffer, [:pointer], :void
										
	attach_variable :FULLSCREEN, :WINDOW_FULLSCREEN, :int
	attach_variable :SHOW, :WINDOW_SHOWN, :int
	attach_variable :HIDE, :WINDOW_HIDDEN, :int
	attach_variable :BORDERLESS, :WINDOW_BORDERLESS, :int
	attach_variable :RESIZABLE, :WINDOW_RESIZABLE, :int
	attach_variable :MINIMIZE, :WINDOW_MINIMIZED, :int
	attach_variable :MAXIMIZE, :WINDOW_MAXIMIZED, :int
	attach_variable :INPUT_FOCUS, :WINDOW_INPUT_FOCUS, :int
	attach_variable :MOUSE_FOCUS, :WINDOW_MOUSE_FOCUS, :int
	attach_variable :FULLSCREEN_DESKTOP, :WINDOW_FULLSCREEN_DESKTOP, :int
	attach_variable :HIGHDPI, :WINDOW_ALLOW_HIGHDPI, :int
end

module RubyWrapper
	def self.initGLEW()
		if (CWrapper.initGLEW == 0) then
			raise 'Was not able to initialize GLEW.'
		end
	end
	
	def self.createGLWindow(options = {})
		options = { major: 3, minor: 3, xPosition: 100, yPosition: 100, 
		            width: 480, height: 480, title: 'LibraryName', flags: 0
		          }.merge(options)
		
		CWrapper.createGLWindow(options[:major], options[:minor], 
		                        options[:xPosition], options[:yPosition], 
		                        options[:width], options[:height], 
		                        options[:title], options[:flags])
	end
	
	def self.createGLContext(glWindow)
		CWrapper.createGLContext(glWindow)
	end
end