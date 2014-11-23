require 'net/http'
require 'openssl'
require 'rexml/document'
require 'fileutils'

# Decorate String Class With Convenience Methods For Parsing
class String
    def to_bool
        return true if self == true || self =~ (/^(?:true|t|yes|y|1)$/i)
        return false if self == false || self.blank? || self =~ (/^(?:false|f|no|n|0)$/i)
        raise ArgumentError.new("Invalid Boolean: \"#{self}\"")
    end
    def to_bool?
        begin
            self.to_bool
        rescue
            return false
        end
        return true
    end
    def is_i?
        !!(self =~ /\A[-+]?[0-9]+\Z/)
    end
    def replace_tags(sub)
        self.gsub(/\<.*?\>/, sub)
    end
end

# Returns The Page Source Of The url And Aborts If Anything Other Than A 200
# Is Received.
def get_page_source(url)
    uri = URI.parse url
    
    http = Net::HTTP.new(uri.host, uri.port)
    if (uri.kind_of? URI::HTTPS) then
        http.use_ssl = true
        http.verify_mode = OpenSSL::SSL::VERIFY_NONE
    end
    
    response = http.get(uri.path)
    if (response.code != '200') then
        abort("\nWas not able to pull xml file from #{uri}" +
        "Response Code: #{response.code}")
    end
    
    return response.body
end

# Returns An API List In The Form Of [[API, Version], ...]
def get_api_list(root)
    api_list = []

    root.each_element('feature') { |element|
        api = element.attributes['api']
        version = element.attributes['number']
        
        api_list.push [api, version]
    }
    
    return api_list
end

# Builds An ASCII Grid View From The Tuple List Supplied. The Cell Sizes Will
# Dynamically Scale Based On The Biggest Cell So That Columns Are Aligned.
def get_grid_view(console_width, tuple_list)
    formatting_chars = 6

    # Find Size Of Longest String Element (With Formatting)
    max_length = tuple_list.sort {    |a,b|
        string_one = a[0] + a[1]
        string_two = b[0] + b[1]
        
        string_one.size <=> string_two.size
    }.last.join('').size + tuple_list.size.to_s.size + formatting_chars
    
    options_per_row = console_width / max_length
    
    # Build 1-D Array Of Concatenated Strings
    curr_iteraion = -1
    concat_list = tuple_list.collect { |a,b|
        curr_iteraion += 1
        ' ' + curr_iteraion.to_s + ': ' + a + ' ' + b + ' '
    }
    formatting_chars -= 5
    
    # Expand Concatenated Strings Into Result
    result = '-' * console_width
    curr_column = 1
    concat_list.each { |concat_item|
        num_padding = max_length - concat_item.size - formatting_chars
        
        result << concat_item << ' ' * num_padding
        
        if (curr_column == options_per_row) then
            result << "\n" + ('-' * console_width)
            curr_column = 1
        else
            result << '|'
            curr_column += 1
        end
    }
    
    result << "\n" + ('-' * console_width) if result[-1] != '-'
    
    return result
end

# Pads The String With pad_char So That It Fills columns Completely
def get_pretty(columns, pad_char, string)
    padding = pad_char * ((columns - string.size) / 2)
    
    result = (padding + string + padding)
    result << pad_char if result.size < columns
    
    return result
end

# Writes contents Out To path/name Using mode
def write_file(path, name, contents, mode = 'w+')
    FileUtils.mkdir_p(path)
    
    File.open(path + '/' + name, mode) { |file|
        file << contents
    }
end

# Verify The Supplied api And version Numbers Against The api_list
def valid_api_values?(api_list, api, version)
    api_list.find_index { |api_tuple|
        api_tuple[0].casecmp(api) && api_tuple[1].to_f == version
    } != nil
end

# Verify The Supplied "api_index" To Make Sure It Is Valid
def valid_api_index?(api_list, api_index)
    api_index.is_i? && (0...api_list.size).include?(api_index.to_i)
end

# Prompt User With An api_list In A Grid View For An api_index Selection
def prompt_user(api_list)
    # Prompt User
    print get_pretty(COLUMN_WIDTH, ' ', GRID_TITLE)
    print get_grid_view(COLUMN_WIDTH, api_list)
    puts "Note: OpenGL 3.2 introduced the notion of a 'core' profile which
    essentially means that it is not completely backwards compatible with
    earlier versions. To retain this backwards compatibility (not recommended)
    append a 'C' to the index number of the API you want.".gsub(/\s+/, ' ')

    # User Input
    print "\nEnter The Index Number Next To The API You Want: "
    api_index = gets.chomp
    compatibility_mode = false

    if (api_index[-1].upcase == 'C') then
        compatibility_mode = true
        api_index = api_index[0..-2]
    end

    while (!valid_api_index?(api_list, api_index)) do
        print "Please Enter A Valid Input: "
        api_index = gets.chomp
    
        if (api_index[-1].upcase == 'C') then
            compatibility_mode = true
            api_index = api_index[0..-2]
        else
            compatibility_mode = false
        end
    end
    api_index = api_index.to_i
    
    return [api_list[api_index][0], api_list[api_index][1].to_f, 
        compatibility_mode]
end

/--------------------------------START SCRIPT---------------------------------/

# ARGV: (GL_API GL_VERSION) NAME FOLDER 
# All Optional, If GL_API Is Specified Then GL_VERSION Must Be As Well

# Constants
COLUMN_WIDTH = 80
GRID_TITLE = "OpenGL API Versions"
GL_URL = 'https://cvs.khronos.org/svn/repos/ogl/trunk/doc/registry/public/api'
GL_PATH = '/gl.xml'
EGL_URL = 'https://www.khronos.org/registry/egl/api'
EGL_KHR_PATH = '/KHR/khrplatform.h'
SOURCE_INDENTS = 2

# Execution Variables
gl_header = 'OpenGL.h'
gl_source = 'OpenGL.c'
directory = './'
api, version, compatibility_mode = nil, nil, false

# Check Command Line Arguments
if (ARGV[0]) then
    api = ARGV[0]
    version = ARGV[1].to_f
    compatibility_mode = ARGV[1][-1].casecmp('C') == 0
end
if (ARGV[2]) then
    gl_header = ARGV[2] + '.h'
    gl_source = ARGV[2] + '.c'
end
if (ARGV[3]) then
    directory = ARGV[3]
end

print "\n" + get_pretty(COLUMN_WIDTH, '-', "Pulling Data From Web")
puts "- #{GL_URL + GL_PATH}"
source = get_page_source(GL_URL + GL_PATH)
puts get_pretty(COLUMN_WIDTH, '-', "Finished Pulling Data")

print get_pretty(COLUMN_WIDTH, '-', "Building XML Structure")
puts "Bytes: #{source.size}"
root = REXML::Document.new(source).root
puts get_pretty(COLUMN_WIDTH, '-', "Finished Building XML Structure")
    
# Extract API And Version Information
api_list = get_api_list(root) # [[API, Version], ...]

if (!api || !version) then # Prompt User
    api_tuple = prompt_user(api_list)
    
    api = api_tuple[0]
    version = api_tuple[1]
    compatibility_mode = api_tuple[2]
else # Verify User Parameters
    if (!valid_api_values?(api_list, api, version)) then
        abort("Invalid API Or Version Parameters Passed To Script")
    end
end

puts get_pretty(COLUMN_WIDTH, '-', "API/Version/Profile - #{api}/#{version}/" + 
    (compatibility_mode ? "Compatibility" : "Core"))

# Parse All Enumerations And Commands
all_enums, all_commands = {}, {}
print get_pretty(COLUMN_WIDTH, '-', "Crawling XML Structure")

puts "Parsing Enumerations..."
root.each_element('enums/enum') { |element|
    all_enums[element.attributes['name']] = element.attributes['value']
}
puts "Parsed All Enumerations\n\n"

puts "Parsing Commands..."
root.each_element('commands/command') { |element|
    comm_name = element.elements['proto/name'].text
    
    command = element.elements['proto'].to_s.replace_tags(' ').squeeze(' ').strip
    command << '('
    
    element.each_element('param') { |innerElement|
        command << innerElement.to_s.replace_tags(' ').squeeze(' ').strip + ', '
    }
    command[-2..-1] = '' if command.end_with? ', '

    all_commands[comm_name] = command + ');'
}
puts "Parsed All Commands"

puts get_pretty(COLUMN_WIDTH, '-', "Finished Crawling XML Structure")

#-----------------------------Build Header File-------------------------------
used_enums, used_commands = {}, {}

header_template = "#ifndef #{gl_header.upcase.sub(/\./, '_')}
#define #{gl_header.upcase.sub(/\./, '_')}

#ifdef __cplusplus
extern \"C\" {
#endif

#if defined(_WIN32) && !defined(APIENTRY) && !defined(__CYGWIN__) && !defined(__SCITECH_SNAP__)
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN 1
#endif
#include <windows.h>
#undef near // Used As An Identifier In OpenGL
#undef far // Used As An Identifier In OpenGL
#endif

#ifndef APIENTRY
#define APIENTRY
#endif

COMMENTS_GO_HERE

TYPEDEFS_GO_HERE

DEFINES_GO_HERE

FUNCTIONS_GO_HERE

#ifdef __cplusplus
}
#endif

#endif"

print get_pretty(COLUMN_WIDTH, '-', "Generating File #{gl_header}")

puts "Appending Comments To #{gl_header}..."
buffer = "/*\n"
root.elements['comment'].text.each_line { |line|
    buffer << '** ' << line
}
buffer << "\n*/"
header_template.sub!(/COMMENTS_GO_HERE/, buffer)
puts "Comments Have Been Appended\n\n"

# Pull Out All Possible Include Dependencies
puts "Appending Type Definitions To #{gl_header}..."
possible_includes = {}
root.each_element('types/type[@name]') { |element|
    possible_includes[element.attributes['name']] = element.text
}

# Pull Out All Possible Types And Check If They Have Include Dependencies
actual_includes, buffer = {}, ''
attrib_filter = api == 'gl' ? 'not(@api)' : "@api='#{api}'"
root.each_element("types/type[#{attrib_filter} and not(@name)]") { |element|
    content = element.to_s.replace_tags(' ').squeeze(' ').strip
    content.gsub!(/ +;/, ';')
    buffer << content << "\n"
    
    requires = element.attributes['requires']
    if (requires && !actual_includes[requires]) then
        actual_includes[requires] = possible_includes[requires]
    end
}

# Any Header Dependencies Found
actual_includes.each { |require,include|
    if (require == 'khrplatform') then
        print get_pretty(COLUMN_WIDTH, '-', "Pulling Data From Web")
        puts "- #{EGL_URL + EGL_KHR_PATH}"
        
        source = get_page_source(EGL_URL + EGL_KHR_PATH)
        write_file("#{directory}/KHR", 'khrplatform.h', source)
        
        print get_pretty(COLUMN_WIDTH, '-', "Finished Pulling Data")
    end
    
    # Ugh, Khronos Re-Used The Require Attribute For Non-Header Dependencies!!!
    if (include) then
        buffer.prepend(include + "\n")
    end
}
header_template.sub!(/TYPEDEFS_GO_HERE/, buffer)
puts "Appended Type Definitions\n\n"

puts "Filtering Macros And Commands..."
root.each_element('feature') { |element|
    if (element.attributes['api'] == api && element.attributes['number'].to_f <= version) then
        element.each_element('require/enum') { |inner_element|
            enum_name = inner_element.attributes['name']
            used_enums[enum_name] = all_enums[enum_name]
        }
        
        element.each_element('require/command') { |inner_element|
            comm_name = inner_element.attributes['name']
            used_commands[comm_name] = all_commands[comm_name]
        }
        if (!compatibility_mode) then
            element.each_element('remove/enum') { |inner_element|
                enum_name = inner_element.attributes['name']
                used_enums.delete(enum_name)
            }
            element.each_element('remove/command') { |inner_element|
                comm_name = inner_element.attributes['name']
                used_commands.delete(comm_name)
            }
        end
    end
}
puts "Filtered Macros And Commands\n\n"

puts "Appending Macro To #{gl_header}..."
used_enums, buffer = used_enums.to_a.sort, ''
used_enums.each { |name,value|
    buffer << '#define ' << name << ' ' << value << "\n"
}
header_template.sub!(/DEFINES_GO_HERE/, buffer)
puts "Appended Macros\n\n"

puts "Appending Commands To #{gl_header}..."
used_commands, buffer = used_commands.to_a.sort, ''
used_commands.each { |name,signature|
    buffer << signature << "\n"
}
header_template.sub!(/FUNCTIONS_GO_HERE/, buffer)
puts "Appended Commands"

write_file(directory, gl_header, header_template)
puts get_pretty(COLUMN_WIDTH, '-', "Finished Generating #{gl_header}")

#-----------------------------Build Source File-------------------------------
print get_pretty(COLUMN_WIDTH, '-', "Generating File #{gl_source}")

buffer = "#include \"#{gl_header}\"\n#include \"SDL.h\"\n\n"

puts "Appending Command Definitions To #{gl_source}..."
used_commands.each { |name,signature|
    buffer << signature[0..-2] + " {\n"

    # Break Function Down
    func_return_type = signature[/\A(.*?)gl/, 1].strip
    typedef_name = 'GL_' + name[2..-1] + '_Func'
    func_ptr_name = name + '_ptr'
    param_type_list = []
    unless (signature =~ /\(\);/) then # Has At Least One Parameter
        param_type_list = signature[/\((.*?);/, 1].split(/ *\w+[,\)] */)
    end
    param_name_list = signature.scan(/(\w+)[,\)]/).flatten

    # Append Typedef
    buffer << ' ' * SOURCE_INDENTS + 'typedef ' + func_return_type + 
        " (APIENTRY * #{typedef_name})("
    param_type_list.each { |param_type|
        buffer << param_type + ', '
    }
    if (buffer[-2..-1] == ', ') then
        buffer[-2..-1] = ');'
    else
        buffer << ');'
    end
    buffer << "\n"

    # Append Pointer Initialization
    buffer << ' ' * SOURCE_INDENTS + 'static ' + typedef_name + ' ' + 
        func_ptr_name + " = NULL;\n\n"

    buffer << ' ' * SOURCE_INDENTS + "if (#{func_ptr_name} == NULL) {\n" +
        ' ' * (SOURCE_INDENTS * 2) + func_ptr_name + 
        " = (#{typedef_name})SDL_GL_GetProcAddress(__func__);\n" +
        ' ' * SOURCE_INDENTS + "}\n\n"
            
    # Append Function Pointer Call
    buffer << ' ' * SOURCE_INDENTS + func_ptr_name + '('
    param_name_list.each { |param_name|
        buffer << param_name + ', '
    }
    if (buffer[-2..-1] == ', ') then
        buffer[-2..-1] = ');'
    else
        buffer << ');'
    end
    
    buffer << "\n}\n\n"
}
write_file(directory, gl_source, buffer)
puts "Finished Appending Command Definitions"

print get_pretty(COLUMN_WIDTH, '-', "Finished Generating #{gl_source}")

/---------------------------------END SCRIPT----------------------------------/