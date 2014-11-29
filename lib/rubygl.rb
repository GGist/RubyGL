require 'ffi'
require 'rbconfig'

# OS Detection
def os
    @os ||= (
        host_os = RbConfig::CONFIG['host_os']
        
        case host_os
            when /mswin|msys|mingw|cygwin|bccwin|wince|emc/
                :windows
            when /darwin|mac os/
                :macosx
            when /linux/
                :linux
            when /solaris|bsd/
                :unix
            else
                raise Error::WebDriverError, "Unknown OS: #{host_os.inspect}"
        end
    )
end

# Expand Relative Path Into Absolute Path
def relative_path(resource_path)
    File.join(File.dirname(File.expand_path(__FILE__)), resource_path)
end

# Initialize All Modules
module RubyGL
    module Native
        extend FFI::Library
        if os == :windows
            ffi_lib relative_path("../ext/windows/SDL2.dll")
            ffi_lib relative_path("../ext/windows/RubyGL.so")
        elsif os == :macosx
            ffi_lib relative_path("../ext/macosx/SDL2")
            ffi_lib relative_path("../ext/macosx/RubyGL.so")
        else
            abort("Current OS Not Supported")
        end
    end
end

# Load Module Code
require_relative './rubygl/event'
require_relative './rubygl/geometry'
require_relative './rubygl/math'
require_relative './rubygl/memory'
require_relative './rubygl/setup'
require_relative './rubygl/shader'
require_relative './rubygl/util'

require_relative './rubygl/native/window'
require_relative './rubygl/native/glcontext'
require_relative './rubygl/native/input'
require_relative './rubygl/native/opengl'