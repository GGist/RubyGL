# coding: utf-8

Gem::Specification.new do |spec|
  spec.name          = 'rubygl'
  spec.version       = '0.1.0'
  spec.authors       = ["Andrew Miller"]
  spec.email         = ["millera9@seattleu.edu"]
  spec.summary       = %q{A Complete Solution For Graphics Programming In Ruby!}
  spec.description   = %q{This library provides you with all of the essentials for 
  doing graphics programming in Ruby including windowing, context management, 
  1:1 mapping of opengl calls, and input handling. The backend of this library 
  consists of FFI functions with 1:1 mapping to the C code that makes all of this 
  possible. The frontend of this library provides abstractions for interacting with
  the backend functionality so that you do not have to deal with the manual memory
  management from within Ruby that the backend requires.}
  spec.homepage      = "https://github.com/GGist/RubyGL"
  spec.license       = "MIT"
  
  spec.files         = `git ls-files`.split($/)
  spec.require_paths = ["lib"]
  
  spec.add_dependency 'ffi'
end
