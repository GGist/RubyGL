require 'ffi'

module CWrapper
	extend FFI::Library
	ffi_lib 'libwin.so'
	
	attach_function :bindEventCallback, [:pointer], :void
	attach_function :pumpEvents, [], :void
end

module RubyWrapper
	def self.bindCallback(&callback)
		CWrapper.bindEventCallback(FFI::Function.new(:void, [], callback))
	end
end