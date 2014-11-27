require 'ffi'
require_relative './all_enums'

module RubyGL::Native
    attach_function :initInput, [], :int
    attach_function :quitInput, [], :void
    attach_function :addEventWatch, [:pointer, :pointer], :void
    attach_function :deleteEventWatch, [:pointer, :pointer], :void
    attach_function :pumpEvents, [], :void
    
    # Overlaps With Layout Of Other Events; Used To Figure Out Current Event
    class CommonEvent < FFI::Struct
        layout :type, :uint32,
            :timestamp, :uint32
    end
    
    # WindowEvents Are Identified By:
    # :window_event
    class WindowEvent < FFI::Struct
        layout :type,   :uint32,
            :timestamp, :uint32,
            :window_id, :uint32,
            :event,     :uint8,
            :padding1,  :uint8,
            :padding2,  :uint8,
            :padding3,  :uint8,
            :data1,     :int32,
            :data2,     :int32
    end
    
    # KeyboardEvents Are Identified By:
    # :key_down
    # :key_up
    class Keysym < FFI::Struct
        layout :scan_code,  :scancode,
            :sym,          :keycode,
            :mod,          :uint16,
            :unused,       :uint32
    end
    class KeyboardEvent < FFI::Struct
        layout :type,   :uint32,
            :timestamp, :uint32,
            :window_id, :uint32,
            :state,     :uint8,
            :repeat,    :uint8,
            :padding1,  :uint8,
            :padding2,  :uint8,
            :keysym,    Keysym
    end
    
    # TextEditingEvents Are Identified By:
    # :text_editing
    class TextEditingEvent < FFI::Struct
        layout :type,   :uint32,
            :timestamp, :uint32,
            :window_id, :uint32,
            :text,     [:uint8, 32], # The Value Of SDL_TEXTEDITINGEVENT_TEXT_SIZE Is 32
            :start,     :int32,
            :length,    :int32
    end
    
    # TextInputEvents Are Identified By:
    # :text_input
    class TextInputEvent < FFI::Struct
        layout :type,   :uint32,
            :timestamp, :uint32,
            :window_id, :uint32,
            :text,     [:uint8, 32] # The Value Of SDL_TEXTEDITINGEVENT_TEXT_SIZE Is 32
    end
    
    # MouseMotionEvents Are Identified By:
    # :mouse_motion
    class MouseMotionEvent < FFI::Struct
        layout :type, :uint32,
            :timestamp, :uint32,
            :window_id, :uint32,
            :which,     :uint32,
            :state,     :uint32,
            :x,         :int32,
            :y,         :int32,
            :xrel,      :int32,
            :yrel,      :int32
    end
    
    # MouseButtonEvents Are Identified By:
    # :mouse_button_down
    # :mouse_button_up
    class MouseButtonEvent < FFI::Struct
        layout :type,   :uint32,
            :timestamp, :uint32,
            :window_id, :uint32,
            :which,     :uint32,
            :button,    :uint8,
            :state,     :uint8,
            :clicks,    :uint8,
            :padding1,  :uint8,
            :x,         :int32,
            :y,         :int32
    end
    
    # MouseWheelEvents Are Identified By:
    # :mouse_wheel
    class MouseWheelEvent < FFI::Struct
        layout :type,   :uint32,
            :timestamp, :uint32,
            :window_id, :uint32,
            :which,     :uint32,
            :x,         :int32,
            :y,         :int32
    end
    
    # JoyAxisEvents Are Identified By:
    # :joy_axis_motion
    class JoyAxisEvent < FFI::Struct
        layout :type,   :uint32,
            :timestamp, :uint32,
            :which,     :int32,
            :axis,      :uint8,
            :padding1,  :uint8,
            :padding2,  :uint8,
            :padding3,  :uint8,
            :value,     :int16,
            :padding4,  :uint16
    end
    
    # JoyBallEvents Are Identified By:
    # :joy_ball_motion
    class JoyBallEvent < FFI::Struct
        layout :type,   :uint32,
            :timestamp, :uint32,
            :which,     :int32,
            :ball,      :uint8,
            :padding1,  :uint8,
            :padding2,  :uint8,
            :padding3,  :uint8,
            :xrel,      :int16,
            :yrel,      :int16
    end
    
    # JoyHatEvents Are Identified By:
    # :joy_hat_motion
    class JoyHatEvent < FFI::Struct
        layout :type,   :uint32,
            :timestamp, :uint32,
            :which,     :int32,
            :hat,       :uint8,
            :value,     :uint8,
            :padding1,  :uint8,
            :padding2,  :uint8
    end
    
    # JoyButtonEvents Are Identified By:
    # :joy_button_down
    # :joy_button_up
    class JoyButtonEvent < FFI::Struct
        layout :type,   :uint32,
            :timestamp, :uint32,
            :which,     :int32,
            :button,    :uint8,
            :state,     :uint8,
            :padding1,  :uint8,
            :padding2,  :uint8
    end
    
    # JoyDeviceEvents Are Identified By:
    # :joy_device_added
    # :joy_device_removed
    class JoyDeviceEvent < FFI::Struct
        layout :type,   :uint32,
            :timestamp, :uint32,
            :which,     :int32
    end
    
    # ControllerAxisEvents Are Identified By:
    # :conroller_axis_motion
    class ControllerAxisEvent < FFI::Struct
        layout :type,   :uint32,
            :timestamp, :uint32,
            :which,     :int32,
            :axis,      :uint8,
            :padding1,  :uint8,
            :padding2,  :uint8,
            :padding3,  :uint8,
            :value,     :int16,
            :padding4,  :uint16
    end
    
    # ControllerButtonEvents Are Identified By:
    # :controller_button_down
    # :controller_button_up
    class ControllerButtonEvent < FFI::Struct
        layout :type,   :uint32,
            :timestamp, :uint32,
            :which,     :int32,
            :button,    :uint8,
            :state,     :uint8,
            :padding1,  :uint8,
            :padding2,  :uint8
    end
    
    # ControllerDeviceEvents Are Identified By:
    # :controller_device_added
    # :controller_device_removed
    # :controller_device_remapped
    class ControllerDeviceEvent < FFI::Struct
        layout :type,   :uint32,
            :timestamp, :uint32,
            :which,     :int32
    end
    
    # DropEvents Are Identified By:
    # :drop_file
    class DropEvent < FFI::Struct
        layout :type,   :uint32,
            :timestamp, :uint32,
            :file,      :string
    end
    
    # QuitEvents Are Identified By:
    # :quit
    class QuitEvent < FFI::Struct
        layout :type,   :uint32,
            :timestamp, :uint32
    end
    
    class Event < FFI::Union
        layout :common, CommonEvent,
            :window,    WindowEvent,
            :key,       KeyboardEvent,
            :edit,      TextEditingEvent,
            :text,      TextInputEvent,
            :motion,    MouseMotionEvent,
            :button,    MouseButtonEvent,
            :wheel,     MouseWheelEvent,
            :jaxis,     JoyAxisEvent,
            :jball,     JoyBallEvent,
            :jhat,      JoyHatEvent,
            :jbutton,   JoyButtonEvent,
            :jdevice,   JoyDeviceEvent,
            :caxis,     ControllerAxisEvent,
            :cbutton,   ControllerButtonEvent,
            :cdevice,   ControllerDeviceEvent,
            :quit,      QuitEvent,
            :drop,      DropEvent
    end
    
end