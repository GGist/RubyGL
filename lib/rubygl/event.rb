require_relative './native/all_enums'

module RubyGL
    
    class Event
        @@callbacks = {}
        
        # Accepts an event_type symbol (see native/all_enums.rb) and a block that
        # will be passed a struct containing event information (see native/input.rb)
        def self.register(event_type, &block)
            callback = FFI::Function.new(:int, [:pointer, :pointer]) do |_, event_ptr|
                event_union = Native::Event.new(event_ptr)
                
                # Makes Our Case Statement Less Verbose
                events = Native::ALL_EVENTS
                
                # Map Multiple Events To The Same Struct
                if (event_union[:common][:type] == events[event_type]) then
                    case events[event_type]
                    when events[:quit]
                        block.call(event_union[:quit])
                    when events[:window_event]
                        block.call(event_union[:window])
                    when events[:key_down], events[:key_up]
                        block.call(event_union[:key])
                    when events[:text_editing]
                        block.call(event_union[:edit])
                    when events[:text_input]
                        block.call(event_union[:text])
                    when events[:mouse_motion]
                        block.call(event_union[:motion])
                    when events[:mouse_button_down], events[:mouse_button_up]
                        block.call(event_union[:button])
                    when events[:mouse_wheel]
                        block.call(event_union[:wheel])
                    when events[:joy_axis_motion]
                        block.call(event_union[:jaxis])
                    when events[:joy_ball_motion]
                        block.call(event_union[:jball])
                    when events[:joy_hat_motion]
                        block.call(event_union[:jhat])
                    when events[:joy_button_down], events[:joy_button_up]
                        block.call(event_union[:jbutton])
                    when events[:joy_device_added], events[:joy_device_removed]
                        block.call(event_union[:jdevice])
                    when events[:controller_axis_motion]
                        block.call(event_union[:caxis])
                    when events[:controller_button_down], events[:controller_button_up]
                        block.call(event_union[:cbutton])
                    when events[:controller_device_added], events[:controller_device_removed], events[:controller_device_remapped]
                        block.call(event_union[:cdevice])
                    when events[:drop_file]
                        block.call(event_union[:drop])
                    end
                end
            end
            @@callbacks[event_type] = callback
            
            Native.addEventWatch(callback, nil)
        end
        
    end
    
end