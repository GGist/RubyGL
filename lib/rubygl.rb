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

def relative_path(resource_path)
    File.join(File.dirname(File.expand_path(__FILE__)), resource_path)
end

# Initialize All Modules
module RubyGL
    module Native
        extend FFI::Library
        ffi_lib relative_path("../ext/#{os.to_s}/SDL2.dll")
        ffi_lib relative_path("../ext/#{os.to_s}/RubyGL.so")
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
