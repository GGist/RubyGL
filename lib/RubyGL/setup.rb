require_relative './Native/glcontext'
require_relative './Native/window'

module RubyGL

    class DefaultSetup
        def initialize(x = 50, y = 50, width = 500, height = 500)
            RubyGL::Native.initWindow
            RubyGL::Native.initInput
            RubyGL::Native.loadLibrary(FFI::Pointer::NULL)
            
            RubyGL::Native.setAttribute(:context_major_version, 4)
            RubyGL::Native.setAttribute(:context_minor_version, 2)
            RubyGL::Native.setAttribute(:context_profile_mask, RubyGL::Native.CONTEXT_PROFILE_COMPATIBILITY)
            
            RubyGL::Native.setAttribute(:depth_size, 24)
            RubyGL::Native.setAttribute(:doublebuffer, 1)
            
            @window = RubyGL::Native.createWindow("RubyGL Window", x, y, width, height, RubyGL::Native.OPENGL)
            @context = RubyGL::Native.createContext(@window)
            
            RubyGL::Native.makeCurrent(@window, @context)
            RubyGL::Native.setSwapInterval(0)
        end
        
        def show_dialog(title, message)
            RubyGL::Native.showSimpleMessageBox(0, title, message, @window)
        end
        
        def apply()
            RubyGL::Native.swapWindow(@window)
            
            RubyGL::Native.pumpEvents()
        end
        
        def teardown()
            RubyGL::Native.deleteContext(@context)
            RubyGL::Native.destroyWindow(@window)
        
            RubyGL::Native.unloadLibrary()
            RubyGL::Native.quitWindow()
            RubyGL::Native.quitInput()
        end
    end

end