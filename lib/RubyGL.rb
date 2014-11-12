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
                raise Error::WebDriverError, "unknown os: #{host_os.inspect}"
        end
    )
end

# Initialize All Modules
module RubyGL
    module Native
        extend FFI::Library
        ffi_lib "../ext/#{os.to_s}/SDL2.dll"
        ffi_lib "../ext/#{os.to_s}/RubyGL.so"
    end
end

# Load Module Code
require_relative './RubyGL/shader'
require_relative './RubyGL/gpu_buffer'
require_relative './RubyGL/geometry'
require_relative './RubyGL/math'

require_relative './RubyGL/Native/window'
require_relative './RubyGL/Native/glcontext'
require_relative './RubyGL/Native/input'
require_relative './RubyGL/Native/opengl'
