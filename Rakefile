require 'rake/task'
require 'rake/testtask'
require 'tmpdir'

/---------------------------------CONSTANTS-----------------------------------/

SDL_INCLUDE = 'C:\SDL\SDL2-2.0.3-master\include'
SDL_LIB = 'C:\SDL\SDL2-2.0.3'
SDL_BIN = 'C:\SDL\SDL2-2.0.3'

MINGW_LIB = 'C:\Users\millera9\Desktop\Dev\mingw32\lib'

PROJ_INCLUDE = 'lib/NativeGL/include/'
PROJ_SRC = 'lib/NativeGL/src/'

/---------------------------------RAKE JOBS-----------------------------------/

task :default do
	files = ['Audio', 'GLWindow', 'Input', 'OpenGL']

	obj = "gcc -I#{SDL_INCLUDE}  -I#{PROJ_INCLUDE} -c -fPIC REPLACE.c -o REPLACE.o"
	files.each { |file|
		sh (obj.gsub(/REPLACE/, PROJ_SRC + file))
		file = file.prepend PROJ_SRC
	}

	bin = "gcc -L#{SDL_LIB} -L#{MINGW_LIB} #{files.join('.o ') << '.o'} -lmingw32 -lSDL2main -lSDL2 -lopengl32 -shared -o ext/libwin.so"
	sh bin
end

task :bindings do
	shared_lib = "libwin.so"

	Dir.mktmpdir { |dir|
		# Generates Header And Source C Files
		sh "ruby bin/gl_code_gen.rb gl 4.5 OpenGL #{dir}"
	
		# Run Preprocessor On Source File
		sh "gcc -E -I#{SDL_INCLUDE} -o #{dir}/OpenGL.o #{dir}/OpenGL.c"
	
		# Pipe Preprocessor(ed) File And Header File To Generate Bindings
		sh "ruby bin/ffi_code_gen.rb #{dir}/OpenGL.o #{dir}/OpenGL.h \
			#{dir}/opengl.rb #{shared_lib}"
	
		# Move Files To Correct Folders
		mv "#{dir}/OpenGL.h", PROJ_INCLUDE
		mv "#{dir}/OpenGL.c", PROJ_SRC
		mv "#{dir}/opengl.rb", "lib/NativeGL"
	}
end

Rake::TestTask.new do |t|
  t.libs << "tests"
  t.test_files = FileList['tests/test*.rb']
  t.verbose = true
end
