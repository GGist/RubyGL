RubyGL - [![Build Status](https://travis-ci.org/GGist/RubyGL.svg)](https://travis-ci.org/GGist/RubyGL) [![Documentation](http://img.shields.io/badge/docs-in--progress-blue.svg)](http://ggist.github.io/RubyGL/index.html) [![License](http://img.shields.io/badge/license-MIT-lightgrey.svg)](https://raw.githubusercontent.com/GGist/RubyGL/master/LICENSE)
=======
A Complete Solution For Graphics Programming In Ruby.

Installing - [![Gem Version](https://badge.fury.io/rb/rubygl.svg)](http://badge.fury.io/rb/rubygl)
----------
Currently supports Windows and MacOSX out of the box.
```
gem install rubygl
```

Examples Gallery
----------------
<img src="https://cloud.githubusercontent.com/assets/5248583/5156041/53eeb3ce-725b-11e4-908b-0b5aa7b37e2e.gif">
<img align="right" src="https://cloud.githubusercontent.com/assets/5248583/5156042/55d1ee0e-725b-11e4-9edf-b240051a41b7.gif">

Frequently Asked Questions
--------------------------
**Q: Why am I getting an error saying the library could not be loaded?**  
A: Both shared libraries are compiled as 32-bit binaries. As such, you will need a 32-bit version of ruby and the ruby devkit (to use the appropriate ffi gem) in order to run your program. If you wish to use 64-bit versions of these tools, you will have to get the appropriate SDL binary and recompile the rubygl binary.

**Q: Why are my shaders not working?**  
A: You probably have an older version of GLSL (1.2 or earler) so your version of GLSL may not support the ```in``` and ```out``` 
variables (the shaders in ShaderGenerator use these). To work around this, you can change the ```in``` qualifiers in the 
vertex shader to ```attribute``` qualifiers and the ```out``` qualifiers to ```varying``` qualifiers. In the fragment 
shader change the ```in``` qualifiers to ```varying``` qualifiers and remove any ```out``` variables; you should use the 
built-in ```gl_FragColor``` variable to assign the output fragment color. Lastly, make sure to update the ```#version XXX```
tag for the version of GLSL your GPU can support (Ex: ```#version 120``` if running GLSL 1.2). You can check your
GLSL version by running ```puts RubyGL::Native::glGetString(RubyGL::Native::GL_SHADING_LANGUAGE_VERSION)```.

**Q: Why is my program giving a segmentation fault?**  
A: You are most likely trying to call an OpenGL function that does not exist in your GPUs version of OpenGL. The offending
function should be given to you in the stack trace. I have compiled the rubygl shared library for the latest version of OpenGL
in compatibility mode to let users call any function that their version of OpenGL may support; the library will assume
that any OpenGL function you are calling is valid (I should probably change this), hence the segmentation fault. Go to 
https://www.opengl.org/sdk/docs/man/ to see which functions are supported by each OpenGL version. You can run 
```puts RubyGL::Native::glGetString(RubyGL::Native::GL_VERSION)``` to see what version of OpenGL you have.

Known Issues
------------
- Not sure how to support Linux without requiring users to compile a shared library
- Windows does not guarantee that OpenGL functions loaded during context creation will be valid for other contexts
 - Need to figure out how to efficiently swap these out if the user creates more than one context
