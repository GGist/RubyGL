require './NativeGL/gl_window'
require './NativeGL/input'
require './NativeGL/opengl'

window = RubyWrapper.createGLWindow()
context = RubyWrapper.createGLContext(window)

puts("Load OpenGL returned: " + CWrapper.loadLibrary.to_s)

RubyWrapper.bindCallback do
	puts 't'
end

NativeGL.glClearColor(0.0, 0.0, 1.0, 1.0)
 
while (true) do
	NativeGL.glClear(NativeGL::GL_COLOR_BUFFER_BIT)
	
	CWrapper.swapBuffer(window)
	
	CWrapper.pumpEvents()
end