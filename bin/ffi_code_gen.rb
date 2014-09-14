require 'fileutils'

def resolve_typedef(type, type_defs)
	while (type_defs[type]) do
		type = type_defs[type]
	end
	
	return type
end

def get_type(type, hash)
	hash[type]
end

def match_type(type, regex_hash)
	regex_hash.select { |key,val|
		type =~ key
	}.values[0]
end

def write_file(name, contents, mode = 'w+')
	File.open(name, mode) { |file|
		file << contents
	}
end

/--------------------------------START SCRIPT---------------------------------/
# ARGV: [Object File] [Header File] [Ruby Source Name] [Library Name]

SOURCE_INDENTS = 4
FFI_TYPES = { 'char' => 'char', 'signed char' => 'char',
'unsigned char' => 'uchar', 'int8_t' => 'int8', 'uint8_t' => 'uint8', 
'short' => 'short', 'unsigned short' => 'ushort', 'int16_t' => 'int16', 
'uint16_t' => 'uint16', 'int' => 'int', 'unsigned int' => 'uint', 
'int32_t' => 'int32', 'uint32_t' => 'uint32', 'long int' => 'long', 
'unsigned long int' => 'ulong', 'int64_t' => 'int64', 'uint64_t' => 'uint64', 
'long long int' => 'long_long', 'unsigned long long int' => 'ulong_long', 
'float' => 'float', 'double' => 'double' }
FFI_PTR_TYPES = { /const *char *\*/ => 'string', /\*/ => 'pointer' }

# Open Pre-Processor(ed) Source File
source_code = ''
File.open(ARGV[0]) { |file|
	source_code = file.read
}

# Associate Type Definitions With Their Actual Types
typedef_hash = {}
source_code.scan(/^typedef (.*?;)$/).flatten.each { |segment|
	segment.gsub!(/\*/, '* ')
	
	if (segment =~ /\(.*?\*.*?\)/) then # Function Pointer
		key = segment[/\* *(.*?) *\)/, 1]

		typedef_hash[key] = segment[0..-2] # Remove Semi-Colon
	else # Other Type
		key = segment[/([^ ]+);/, 1]
		
		typedef_hash[key] = segment[/(.*?) +[^ ]+;/, 1]
	end
}

# Open Header File
source_code = ''
File.open(ARGV[1]) { |file|
	source_code = file.read
}

# Associate Macros With Their Literal Types (OpenGL Enumerations)
macro_tuples = []
source_code.scan(/^#define GL_.+?$/i).each { |macro|
	token = macro[/^.+ +(.+) +.+$/, 1]
	value = macro[/^.+ +.+ +(.+)$/, 1]
	macro_tuples.push([token, value])
}

# Pull Out OpenGL Function Names From Header
gl_functions = source_code.scan(/^.+gl.+\(.+\);$/)

ffi_template = "require 'ffi'

module NativeGL
	extend FFI::Library
	ffi_lib '#{ARGV[3]}'
	
FUNCTIONS_GO_HERE
	
CONSTANTS_GO_HERE

end
"

# Append Functions (Param Type -> Typedefs -> Ruby Type)
buffer = ''
gl_functions.each { |signature|
	buffer << ' ' * SOURCE_INDENTS + 'attach_function :' +
		signature[/(gl.*?)\(.*?\);/, 1] + ', ['

	# Get Type List
	param_type_list = signature[/\((.*?);/, 1].split(/ *\w+[,\)] */)
	
	# Type Definition -> Primitive (Actual) Type
	param_type_list.map! { |param_type|
		# Parameter Type Could Use Multiple Type Definitions
		param_type.gsub!(/const/, '') # Ignore Const Qualifiers
		param_type.strip!
		
		simple_param_types = param_type.gsub(/\*/, ' ').split(' ')
		# Translate Each Type And Put Back Into param_type
		simple_param_types.each { |simple_param_type|
			primitive_type = resolve_typedef(simple_param_type, typedef_hash)
		
			param_type.sub!(/#{simple_param_type}/, primitive_type)
		}
		
		param_type
	}

	# Primitive Type -> Ruby FFI Type
	param_type_list.each { |param_type|
		if (get_type(param_type, FFI_TYPES)) then
			param_type = get_type(param_type, FFI_TYPES)
		else
			param_type = match_type(param_type, FFI_PTR_TYPES)
		end

		# Write Out FFI Type
		buffer << ':' + param_type + ', '
	}
	if (buffer[-1] == '[') then # No Parameters
		buffer << '],'
	else # At Least One Parameter
		buffer[-2..-1] = '],'
	end
	
	# Get Return Type
	return_type = signature.gsub(/ *const */, '')[/(.*?) /, 1]
	return_type = resolve_typedef(return_type, typedef_hash)
	
	if (get_type(return_type, FFI_TYPES)) then
		return_type = get_type(return_type, FFI_TYPES)
	elsif (match_type(return_type, FFI_PTR_TYPES))
		return_type = match_type(return_type, FFI_PTR_TYPES)
	end
	
	buffer << ' :' + return_type + "\n"
}
ffi_template.sub!(/FUNCTIONS_GO_HERE/, buffer)

# Append OpenGL Enumerations (Macros)
buffer = ''
macro_tuples.each { |name,val|
	buffer << ' ' * SOURCE_INDENTS + "#{name} = #{val}\n"
}
ffi_template.sub!(/CONSTANTS_GO_HERE/, buffer)

write_file(ARGV[2], ffi_template)
/---------------------------------END SCRIPT----------------------------------/