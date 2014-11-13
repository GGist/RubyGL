
module RubyGL
    
    class Util
        # Returns The Value Of The Array At The Wrapped Index Value
        def self.overflow_wrap(array, index)
            array[index % array.size]
        end
    end
    
end
