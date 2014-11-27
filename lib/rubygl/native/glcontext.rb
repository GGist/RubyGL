require 'ffi'
require_relative './all_enums'

module RubyGL::Native
    attach_function :loadLibrary, [:pointer], :int
    attach_function :unloadLibrary, [], :void
    attach_function :createContext, [:pointer], :pointer
    attach_function :deleteContext, [:pointer], :void
    attach_function :setAttribute, [:attribute, :int], :int
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