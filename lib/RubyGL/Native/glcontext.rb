require 'ffi'

module RubyGL::Native
	enum :attr, [:red_size, 0,
		:green_size,
		:blue_size,
		:alpha_size,
		:buffer_size,
		:doublebuffer,
		:depth_size,
		:stencil_size,
		:accum_red_size,
		:accum_green_size,
		:accum_blue_size,
		:accum_alpha_size,
		:stereo,
		:multisamplebuffers,
		:multisamplesamples,
		:accelerated_visual,
		:retained_backing,
		:context_major_version,
		:context_minor_version,
		:context_egl,
		:context_flags,
		:context_profile_mask,
		:share_with_current_context,
		:framebuffer_srgb_capable ]
	
	attach_function :loadLibrary, [:pointer], :int
	attach_function :unloadLibrary, [], :void
	attach_function :createContext, [:pointer], :pointer
	attach_function :deleteContext, [:pointer], :void
	attach_function :setAttribute, [:attr, :int], :int
	attach_function :makeCurrent, [:pointer, :pointer], :int
	attach_function :setSwapInterval, [:int], :int
	attach_function :swapWindow, [:pointer], :void
	
	# SDL_GLcontextFlag
	attach_variable :CONTEXT_DEBUG_FLAG, :int
	attach_variable :CONTEXT_FORWARD_COMPATIBLE_FLAG, :int
	attach_variable :CONTEXT_ROBUST_ACCESS_FLAG, :int
	attach_variable :CONTEXT_RESET_ISOLATION_FLAG, :int
	
	# SDL_GLprofile
	attach_variable :CONTEXT_PROFILE_CORE, :int
	attach_variable :CONTEXT_PROFILE_COMPATIBILITY, :int
	attach_variable :CONTEXT_PROFILE_ES, :int
end