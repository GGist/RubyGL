require 'rake/task'
require 'rake/testtask'
require 'tmpdir'

# Dependency Locations
SDL_INCLUDE = 'C:\Users\GG\Desktop\SDL2-2.0.3\i686-w64-mingw32\include\SDL2'
SDL_LIB = 'C:\Users\GG\Desktop\SDL2-2.0.3\i686-w64-mingw32\lib'
SDL_BIN = 'C:\Users\GG\Desktop\SDL2-2.0.3\i686-w64-mingw32\bin'

# C File Locations
PROJ_INCLUDE = 'lib/rubygl/native/include/'
PROJ_SRC = 'lib/rubygl/native/src/'

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

task :default => [:bindings, :build, :clean]

# Builds The RubyGL Shared Library From C Source Files And SDL Library
task :build do
    files = ['Window', 'GLContext', 'Input', 'OpenGL']
    
    # Build Object Files
    obj = "gcc -I#{SDL_INCLUDE}  -I#{PROJ_INCLUDE} -c -fPIC REPLACE.c -o REPLACE.o"
    files.each { |file|
        sh (obj.gsub(/REPLACE/, PROJ_SRC + file))
        file = file.prepend PROJ_SRC
    }

    # Build Shared Object File
    bin = "gcc -L#{SDL_LIB} #{files.join('.o ') << '.o'} -lSDL2main -lSDL2 \
           -lopengl32 -shared -o ext/#{os.to_s}/RubyGL.so"
    sh bin 
end

# Created The Documentation For The Library
task :doc do
    sh "rdoc lib/*"
end

# Clean Out Generated Files Silently
task :clean do
    FileUtils.rm_r('doc', {:secure => true, :force => true})

    FileUtils.rm_f(PROJ_INCLUDE + '/OpenGL.h')
    
    FileUtils.rm_f(PROJ_SRC + '/OpenGL.c')
    
    FileUtils.rm_f Dir.glob(PROJ_SRC + '/*.o')
end

# Generate Updated OpenGL Bindings
task :bindings do
    gl_api, gl_version, shared_lib = 'gl', '4.5C', 'RubyGL.so'

    Dir.mktmpdir { |dir|
        # Generates C Header And Source Files
        sh "ruby bin/gl_code_gen.rb #{gl_api} #{gl_version} OpenGL #{dir}"
    
        # Run Preprocessor On C Source File
        sh "gcc -E -I#{SDL_INCLUDE} -o #{dir}/OpenGL.o #{dir}/OpenGL.c"
    
        # Pipe Preprocessor(ed) File And Header File To Generate Bindings
        sh "ruby bin/ffi_code_gen.rb #{dir}/OpenGL.o #{dir}/OpenGL.h \
            #{dir}/opengl.rb #{shared_lib}"
    
        # Move Files To Correct Folders
        mv "#{dir}/OpenGL.h", PROJ_INCLUDE
        mv "#{dir}/OpenGL.c", PROJ_SRC
        mv "#{dir}/opengl.rb", "lib/rubygl/native/"
    }
end

# Run All Tests In The tests Directory
Rake::TestTask.new do |t|
  t.libs << 'test' << 'lib/rubygl'
  t.test_files = FileList['test/test*.rb']
  t.verbose = true
end
