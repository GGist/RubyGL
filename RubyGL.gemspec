# coding: utf-8
lib = File.expand_path('../lib', __FILE__)
$LOAD_PATH.unshift(lib) unless $LOAD_PATH.include?(lib)

Gem::Specification.new do |spec|
  spec.name          = "RubyGL"
  spec.version       = '0.1'
  spec.authors       = ["Andrew Miller"]
  spec.email         = ["millera9@seattleu.edu"]
  spec.summary       = %q{A Rubified OpenGL Library Using The Ruby FFI}
  spec.description   = %q{This project intends to provide a mix of high and low level abstractions in places where you may prefer one over the other. A lot of functionality is provided for times where you don't feel like writing boilerplate code or just want to test a concept. However, if you need any fine grained control from OpenGL you can do that too as this library provides access to the native calls you would come to expect using OpenGL.}
  spec.homepage      = "https://github.com/GGist/RubyGL"
  spec.license       = "MIT"

  spec.files         = ['lib/RubyGL.rb']
  spec.executables   = ['bin/RubyGL']
  spec.test_files    = ['tests/test_RubyGL.rb']
  spec.require_paths = ["lib"]
end
