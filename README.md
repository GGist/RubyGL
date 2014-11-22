RubyGL - [![License](http://img.shields.io/badge/license-MIT-lightgrey.svg)](https://raw.githubusercontent.com/GGist/RubyGL/master/LICENSE)
=======
A Complete Solution For Graphics Programming In Ruby.

Installing
----------
```
gem install rubygl
```

Examples Gallery
----------------
<img src="https://cloud.githubusercontent.com/assets/5248583/5153451/f474fb5a-71de-11e4-9e9f-5e0940e9e605.gif">
<img src="https://cloud.githubusercontent.com/assets/5248583/5153380/ba4e8134-71da-11e4-9aa6-c56540748355.gif">

Frequently Asked Questions
--------------------------
**Q: Why are my shaders not working?**  
A: You probably have an older version of GLSL (1.2 or earler) so your shader may not support the ```in``` and ```out``` 
variables (the shaders in ShaderGenerator use these). To work around this, you can change the ```in``` qualifiers in the 
vertex shader to ```attribute``` qualifiers and the ```out``` qualifiers to ```varying``` qualifiers. In the fragment 
shader change the ```in``` qualifiers to ```varying``` qualifiers and remove any ```out``` variables; you should use the 
built-in ```gl_FragColor``` variable to assign the output fragment color.

Known Issues
------------
- Only supports Windows at the moment (OSX support coming soon)
- Not sure how to support Linux without requiring users to compile a shared library
- Windows does not guarantee that OpenGL functions loaded during context creation will be valid for other contexts
 - Need to figure out how to efficiently swap these out if the user creates more than one context
