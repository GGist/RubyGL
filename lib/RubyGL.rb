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

end

module RubyGL::Native
    extend FFI::Library
    ffi_lib "../ext/#{os.to_s}/SDL2.dll"
    ffi_lib "../ext/#{os.to_s}/RubyGL.so"
    
end

# Load Module Code
require './RubyGL/Native/window'
require './RubyGL/Native/glcontext'
require './RubyGL/Native/input'
require './RubyGL/Native/opengl'
