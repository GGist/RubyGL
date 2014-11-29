# coding: utf-8

Gem::Specification.new do |spec|
  spec.authors       = ["Andrew Miller"]
  spec.email         = ["millera9@seattleu.edu"]
  spec.homepage      = "https://github.com/GGist/RubyGL"
  
  spec.summary       = %q{A Complete Solution For Graphics Programming In Ruby.}
  spec.description   = %q{This library provides you with all of the essentials for 
  doing graphics programming in Ruby including windowing, context management, 
  1:1 mapping of OpenGL calls, and input handling. Currently supports both Windows
  and MacOSX.}
  
  spec.files         = `git ls-files`.split($/)
  spec.name          = 'rubygl'
  spec.version       = '0.3.1'
  spec.require_paths = ["lib"]
  spec.license       = "MIT"
  
  spec.add_runtime_dependency 'ffi', '~> 0'
end
