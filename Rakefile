require 'rake/task'
require 'rake/testtask'
require 'tmpdir'

SDL_INCLUDE = 'C:\Users\millera9\Desktop\Dev\SDL2-2.0.3\i686-w64-mingw32\include\SDL2'
SDL_LIB = 'C:\Users\millera9\Desktop\Dev\SDL2-2.0.3\i686-w64-mingw32\lib'
SDL_BIN = 'C:\Users\millera9\Desktop\Dev\SDL2-2.0.3\i686-w64-mingw32\bin'

MINGW_LIB = ''

PROJ_INCLUDE = 'lib/RubyGL/Native/include'
PROJ_SRC = 'lib/RubyGL/Native/src/'

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

/---------------------------------RAKE JOBS-----------------------------------/

task :default do
    files = ['Audio', 'Window', 'GLContext', 'Input', 'OpenGL']
    
    # Build Object Files
    obj = "gcc -I#{SDL_INCLUDE}  -I#{PROJ_INCLUDE} -c -fPIC REPLACE.c -o REPLACE.o"
    files.each { |file|
        sh (obj.gsub(/REPLACE/, PROJ_SRC + file))
        file = file.prepend PROJ_SRC
    }

    # Build Shared Object File
    bin = "gcc -L#{SDL_LIB} -L#{MINGW_LIB} #{files.join('.o ') << '.o'} \
        -lmingw32 -lSDL2main -lSDL2 -lopengl32 -shared -o \
        ext/#{os.to_s}/RubyGL.so"
    sh bin
end

task :clean do
    # Clean Out Object Files
    FileUtils.rm Dir.glob(PROJ_SRC + '/*.o')
end

task :bindings do
    shared_lib = "RubyGL.so"

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
        mv "#{dir}/opengl.rb", "lib/RubyGL/Native/"
    }
end

Rake::TestTask.new do |t|
  t.libs << "tests"
  t.test_files = FileList['tests/test*.rb']
  t.verbose = true
end
