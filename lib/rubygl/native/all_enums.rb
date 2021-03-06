
module RubyGL::Native

    # The different types of attributes that can be set for a specific OpenGL
    # context. Only a few of these are going to be used in a simple application.
    ALL_ATTRIBS = enum :attribute, [ 
        :red_size, 0,
        :green_size,
        :blue_size,
        :alpha_size,
        :buffer_size,
        :doublebuffer,
        :depth_size,
        :stencil_size,
        :accum_red_size,
        :accum_green_size,
        :accum_blue_size,
        :accum_alpha_size,
        :stereo,
        :multisamplebuffers,
        :multisamplesamples,
        :accelerated_visual,
        :retained_backing,
        :context_major_version,
        :context_minor_version,
        :context_egl,
        :context_flags,
        :context_profile_mask,
        :share_with_current_context,
        :framebuffer_srgb_capable 
    ]
    
    # The different types of events that may be generated during an applications
    # lifetime. These correlate to the different type of event structs that are given
    # to us when one of these events occurs. See input.rb for the list of structs.
    ALL_EVENTS = enum :event_type, [ 
        # Quit Events
        :quit, 0x100,
        # Window Events
        :window_event, 0x200,
        # Keyboard Events
        :key_down, 0x300,
        :key_up,
        :text_editing,
        :text_input,
        # Mouse Events
        :mouse_motion, 0x400,
        :mouse_button_down,
        :mouse_button_up,
        :mouse_wheel,
        # Joystick Events
        :joy_axis_motion, 0x600,
        :joy_ball_motion,
        :joy_hat_motion,
        :joy_button_down,
        :joy_button_up,
        :joy_device_added,
        :joy_device_removed,
        # Game Controller Events
        :controller_axis_motion, 0x650,
        :controller_button_down,
        :controller_button_up,
        :controller_device_added,
        :controller_device_removed,
        :controller_device_remapped,
        # Drag And Drop Events
        :drop_file, 0x1000 
    ]
    
    # Translate symbolic mouse buttons to their actual value
    def self.mouse_button_mask(button)
        (1 << (button - 1))
    end
    
    # Mouse button values that correspond to the :button value within the 
    # MouseButtonEvent struct
    ALL_MOUSECODES = enum :mousecode, [
        # Symbolic Enumerations, SHOULD NOT BE USED
        :button_left, mouse_button_mask(1),
        :button_midle, mouse_button_mask(2),
        :button_right, mouse_button_mask(3),
        :button_x1, mouse_button_mask(4),
        :button_x2, mouse_button_mask(5)
    ]
    
    # Key modifier values that correspond to the :mod value within the Keysym 
    # struct
    ALL_KEYMODS = enum :keymods, [
        :kmod_none, 0x0000,
        :kmod_lshift, 0x0001,
        :kmod_rshift, 0x0002,
        :kmod_lctrl, 0x0040,
        :kmod_rctrl, 0x0080,
        :kmod_lalt, 0x0100,
        :kmod_ralt, 0x0200,
        :kmod_lgui, 0x0400,
        :kmod_rgui, 0x0800,
        :kmod_num, 0x1000,
        :kmod_caps, 0x2000,
        :kmod_mode, 0x4000,
        :kmod_reserved, 0x8000
    ]
    
    # Physical key codes which map to the location of specific keys on a keyboard. 
    # These should almost never be used because a user will not be able to arrange
    # their keyboard setup in order to achieve a more preferred layout.
    ALL_SCANCODES = enum :scancode, [ 
        :scancode_a, 4,
        :scancode_b, 5,
        :scancode_c, 6,
        :scancode_d, 7,
        :scancode_e, 8,
        :scancode_f, 9,
        :scancode_g, 10,
        :scancode_h, 11,
        :scancode_i, 12,
        :scancode_j, 13,
        :scancode_k, 14,
        :scancode_l, 15,
        :scancode_m, 16,
        :scancode_n, 17,
        :scancode_o, 18,
        :scancode_p, 19,
        :scancode_q, 20,
        :scancode_r, 21,
        :scancode_s, 22,
        :scancode_t, 23,
        :scancode_u, 24,
        :scancode_v, 25,
        :scancode_w, 26,
        :scancode_x, 27,
        :scancode_y, 28,
        :scancode_z, 29,
        
        :scancode_1, 30,
        :scancode_2, 31,
        :scancode_3, 32,
        :scancode_4, 33,
        :scancode_5, 34,
        :scancode_6, 35,
        :scancode_7, 36,
        :scancode_8, 37,
        :scancode_9, 38,
        :scancode_0, 39,
        
        :scancode_return, 40,
        :scancode_escape, 41,
        :scancode_backspace, 42,
        :scancode_tab, 43,
        :scancode_space, 44,
        
        :scancode_minus, 45,
        :scancode_equals, 46,
        :scancode_leftbracket, 47,
        :scancode_rightbracket, 48,
        :scancode_backslash, 49,
        :scancode_nonushash, 50,
        :scancode_semicolon, 51,
        :scancode_apostrophe, 52,
        :scancode_grave, 53,
        :scancode_comma, 54,
        :scancode_period, 55,
        :scancode_slash, 56,
        
        :scancode_capslock, 57,
        
        :scancode_f1, 58,
        :scancode_f2, 59,
        :scancode_f3, 60,
        :scancode_f4, 61,
        :scancode_f5, 62,
        :scancode_f6, 63,
        :scancode_f7, 64,
        :scancode_f8, 65,
        :scancode_f9, 66,
        :scancode_f10, 67,
        :scancode_f11, 68,
        :scancode_f12, 69,

        :scancode_printscreen, 70,
        :scancode_scrolllock, 71,
        :scancode_pause, 72,
        :scancode_insert, 73,
     
        :scancode_home, 74,
        :scancode_pageup, 75,
        :scancode_delete, 76,
        :scancode_end, 77,
        :scancode_pagedown, 78,
        :scancode_right, 79,
        :scancode_left, 80,
        :scancode_down, 81,
        :scancode_up, 82,

        :scancode_numlockclear, 83,
     
        :scancode_kp_divide, 84,
        :scancode_kp_multiply, 85,
        :scancode_kp_minus, 86,
        :scancode_kp_plus, 87,
        :scancode_kp_enter, 88,
        :scancode_kp_1, 89,
        :scancode_kp_2, 90,
        :scancode_kp_3, 91,
        :scancode_kp_4, 92,
        :scancode_kp_5, 93,
        :scancode_kp_6, 94,
        :scancode_kp_7, 95,
        :scancode_kp_8, 96,
        :scancode_kp_9, 97,
        :scancode_kp_0, 98,
        :scancode_kp_period, 99,

        :scancode_nonusbackslash, 100,
     
        :scancode_application, 101,
        :scancode_power, 102,
     
        :scancode_kp_equals, 103,
        :scancode_f13, 104,
        :scancode_f14, 105,
        :scancode_f15, 106,
        :scancode_f16, 107,
        :scancode_f17, 108,
        :scancode_f18, 109,
        :scancode_f19, 110,
        :scancode_f20, 111,
        :scancode_f21, 112,
        :scancode_f22, 113,
        :scancode_f23, 114,
        :scancode_f24, 115,
        :scancode_execute, 116,
        :scancode_help, 117,
        :scancode_menu, 118,
        :scancode_select, 119,
        :scancode_stop, 120,
        :scancode_again, 121,
        :scancode_undo, 122,
        :scancode_cut, 123,
        :scancode_copy, 124,
        :scancode_paste, 125,
        :scancode_find, 126,
        :scancode_mute, 127,
        :scancode_volumeup, 128,
        :scancode_volumedown, 129,
        #:scancode_lockingcapslock, 130,
        #:scancode_lockingnumlock, 131,
        #:scancode_lockingscrolllock, 132,
        :scancode_kp_comma, 133,
        :scancode_kp_equalsas400, 134,

        :scancode_international1, 135,
     
        :scancode_international2, 136,
        :scancode_international3, 137,
        :scancode_international4, 138,
        :scancode_international5, 139,
        :scancode_international6, 140,
        :scancode_international7, 141,
        :scancode_international8, 142,
        :scancode_international9, 143,
        :scancode_lang1, 144,
        :scancode_lang2, 145,
        :scancode_lang3, 146,
        :scancode_lang4, 147,
        :scancode_lang5, 148,
        :scancode_lang6, 149,
        :scancode_lang7, 150,
        :scancode_lang8, 151,
        :scancode_lang9, 152,

        :scancode_alterase, 153,
        :scancode_sysreq, 154,
        :scancode_cancel, 155,
        :scancode_clear, 156,
        :scancode_prior, 157,
        :scancode_return2, 158,
        :scancode_separator, 159,
        :scancode_out, 160,
        :scancode_oper, 161,
        :scancode_clearagain, 162,
        :scancode_crsel, 163,
        :scancode_exsel, 164,

        :scancode_kp_00, 176,
        :scancode_kp_000, 177,
        :scancode_thousandsseparator, 178,
        :scancode_decimalseparator, 179,
        :scancode_currencyunit, 180,
        :scancode_currencysubunit, 181,
        :scancode_kp_leftparen, 182,
        :scancode_kp_rightparen, 183,
        :scancode_kp_leftbrace, 184,
        :scancode_kp_rightbrace, 185,
        :scancode_kp_tab, 186,
        :scancode_kp_backspace, 187,
        :scancode_kp_a, 188,
        :scancode_kp_b, 189,
        :scancode_kp_c, 190,
        :scancode_kp_d, 191,
        :scancode_kp_e, 192,
        :scancode_kp_f, 193,
        :scancode_kp_xor, 194,
        :scancode_kp_power, 195,
        :scancode_kp_percent, 196,
        :scancode_kp_less, 197,
        :scancode_kp_greater, 198,
        :scancode_kp_ampersand, 199,
        :scancode_kp_dblampersand, 200,
        :scancode_kp_verticalbar, 201,
        :scancode_kp_dblverticalbar, 202,
        :scancode_kp_colon, 203,
        :scancode_kp_hash, 204,
        :scancode_kp_space, 205,
        :scancode_kp_at, 206,
        :scancode_kp_exclam, 207,
        :scancode_kp_memstore, 208,
        :scancode_kp_memrecall, 209,
        :scancode_kp_memclear, 210,
        :scancode_kp_memadd, 211,
        :scancode_kp_memsubtract, 212,
        :scancode_kp_memmultiply, 213,
        :scancode_kp_memdivide, 214,
        :scancode_kp_plusminus, 215,
        :scancode_kp_clear, 216,
        :scancode_kp_clearentry, 217,
        :scancode_kp_binary, 218,
        :scancode_kp_octal, 219,
        :scancode_kp_decimal, 220,
        :scancode_kp_hexadecimal, 221,

        :scancode_lctrl, 224,
        :scancode_lshift, 225,
        :scancode_lalt, 226,
        :scancode_lgui, 227,
        :scancode_rctrl, 228,
        :scancode_rshift, 229,
        :scancode_ralt, 230,
        :scancode_rgui, 231,

        :scancode_mode, 257,

        :scancode_audionext, 258,
        :scancode_audioprev, 259,
        :scancode_audiostop, 260,
        :scancode_audioplay, 261,
        :scancode_audiomute, 262,
        :scancode_mediaselect, 263,
        :scancode_www, 264,
        :scancode_mail, 265,
        :scancode_calculator, 266,
        :scancode_computer, 267,
        :scancode_ac_search, 268,
        :scancode_ac_home, 269,
        :scancode_ac_back, 270,
        :scancode_ac_forward, 271,
        :scancode_ac_stop, 272,
        :scancode_ac_refresh, 273,
        :scancode_ac_bookmarks, 274,
     

        :scancode_brightnessdown, 275,
        :scancode_brightnessup, 276,
        :scancode_displayswitch, 277,
     
        :scancode_kbdillumtoggle, 278,
        :scancode_kbdillumdown, 279,
        :scancode_kbdillumup, 280,
        :scancode_eject, 281,
        :scancode_sleep, 282,

        :scancode_app1, 283,
        :scancode_app2, 284,
        :num_scancodes, 512 
    ]
    
    # Used to convert some scan codes into key codes.
    def self.scancode_to_keycode(scancode)
        code_value = ALL_SCANCODES[scancode]
        
        code_value | (1 << 30)
    end
    
    # Virtual key codes which map to the value that the operating system gets
    # when a key is pushed. These should be used almost always by default as
    # users can always remap their keys if they have a different layout and
    # wish to have a more comfortable layout for controls.
    ALL_KEYCODES = enum :keycode, [
        :keycode_unknown, 0,
        :keycode_return, "\r".ord,
        :keycode_escape, "\033".ord,
        :keycode_backspace, "\b".ord,
        :keycode_tab, "\t".ord,
        :keycode_space, " ".ord,
        :keycode_exclaim, "!".ord,
        :keycode_quotedbl, "\".ord",
        :keycode_hash, "#".ord,
        :keycode_percent, "%".ord,
        :keycode_dollar, "$".ord,
        :keycode_ampersand, "&".ord,
        :keycode_quote, "\"".ord,
        :keycode_leftparen, "(".ord,
        :keycode_rightparen, ")".ord,
        :keycode_asterisk, "*".ord,
        :keycode_plus, "+".ord,
        :keycode_comma, ",".ord,
        :keycode_minus, "-".ord,
        :keycode_period, ".".ord,
        :keycode_slash, "/".ord,
        :keycode_0, "0".ord,
        :keycode_1, "1".ord,
        :keycode_2, "2".ord,
        :keycode_3, "3".ord,
        :keycode_4, "4".ord,
        :keycode_5, "5".ord,
        :keycode_6, "6".ord,
        :keycode_7, "7".ord,
        :keycode_8, "8".ord,
        :keycode_9, "9".ord,
        :keycode_colon, ":keycode_".ord,
        :keycode_semicolon, ";".ord,
        :keycode_less, "<".ord,
        :keycode_equals, "=".ord,
        :keycode_greater, ">".ord,
        :keycode_question, "?".ord,
        :keycode_at, "@".ord,

        # skip uppercase letters

        :keycode_leftbracket, "[".ord,
        :keycode_backslash, "\\".ord,
        :keycode_rightbracket, "]".ord,
        :keycode_caret, "^".ord,
        :keycode_underscore, "_".ord,
        :keycode_backquote, "`".ord,
        :keycode_a, "a".ord,
        :keycode_b, "b".ord,
        :keycode_c, "c".ord,
        :keycode_d, "d".ord,
        :keycode_e, "e".ord,
        :keycode_f, "f".ord,
        :keycode_g, "g".ord,
        :keycode_h, "h".ord,
        :keycode_i, "i".ord,
        :keycode_j, "j".ord,
        :keycode_k, "k".ord,
        :keycode_l, "l".ord,
        :keycode_m, "m".ord,
        :keycode_n, "n".ord,
        :keycode_o, "o".ord,
        :keycode_p, "p".ord,
        :keycode_q, "q".ord,
        :keycode_r, "r".ord,
        :keycode_s, "s".ord,
        :keycode_t, "t".ord,
        :keycode_u, "u".ord,
        :keycode_v, "v".ord,
        :keycode_w, "w".ord,
        :keycode_x, "x".ord,
        :keycode_y, "y".ord,
        :keycode_z, "z".ord,

        :keycode_capslock, scancode_to_keycode(:scancode_capslock),

        :keycode_f1, scancode_to_keycode(:scancode_f1),
        :keycode_f2, scancode_to_keycode(:scancode_f2),
        :keycode_f3, scancode_to_keycode(:scancode_f3),
        :keycode_f4, scancode_to_keycode(:scancode_f4),
        :keycode_f5, scancode_to_keycode(:scancode_f5),
        :keycode_f6, scancode_to_keycode(:scancode_f6),
        :keycode_f7, scancode_to_keycode(:scancode_f7),
        :keycode_f8, scancode_to_keycode(:scancode_f8),
        :keycode_f9, scancode_to_keycode(:scancode_f9),
        :keycode_f10, scancode_to_keycode(:scancode_f10),
        :keycode_f11, scancode_to_keycode(:scancode_f11),
        :keycode_f12, scancode_to_keycode(:scancode_f12),

        :keycode_printscreen, scancode_to_keycode(:scancode_printscreen),
        :keycode_scrolllock, scancode_to_keycode(:scancode_scrolllock),
        :keycode_pause, scancode_to_keycode(:scancode_pause),
        :keycode_insert, scancode_to_keycode(:scancode_insert),
        :keycode_home, scancode_to_keycode(:scancode_home),
        :keycode_pageup, scancode_to_keycode(:scancode_pageup),
        :keycode_delete, 127, # SDL Uses A 177 Literal, But That Seems To Be Wrong
        :keycode_end, scancode_to_keycode(:scancode_end),
        :keycode_pagedown, scancode_to_keycode(:scancode_pagedown),
        :keycode_right, scancode_to_keycode(:scancode_right),
        :keycode_left, scancode_to_keycode(:scancode_left),
        :keycode_down, scancode_to_keycode(:scancode_down),
        :keycode_up, scancode_to_keycode(:scancode_up),

        :keycode_numlockclear, scancode_to_keycode(:scancode_numlockclear),
        :keycode_kp_divide, scancode_to_keycode(:scancode_kp_divide),
        :keycode_kp_multiply, scancode_to_keycode(:scancode_kp_multiply),
        :keycode_kp_minus, scancode_to_keycode(:scancode_kp_minus),
        :keycode_kp_plus, scancode_to_keycode(:scancode_kp_plus),
        :keycode_kp_enter, scancode_to_keycode(:scancode_kp_enter),
        :keycode_kp_1, scancode_to_keycode(:scancode_kp_1),
        :keycode_kp_2, scancode_to_keycode(:scancode_kp_2),
        :keycode_kp_3, scancode_to_keycode(:scancode_kp_3),
        :keycode_kp_4, scancode_to_keycode(:scancode_kp_4),
        :keycode_kp_5, scancode_to_keycode(:scancode_kp_5),
        :keycode_kp_6, scancode_to_keycode(:scancode_kp_6),
        :keycode_kp_7, scancode_to_keycode(:scancode_kp_7),
        :keycode_kp_8, scancode_to_keycode(:scancode_kp_8),
        :keycode_kp_9, scancode_to_keycode(:scancode_kp_9),
        :keycode_kp_0, scancode_to_keycode(:scancode_kp_0),
        :keycode_kp_period, scancode_to_keycode(:scancode_kp_period),

        :keycode_application, scancode_to_keycode(:scancode_application),
        :keycode_power, scancode_to_keycode(:scancode_power),
        :keycode_kp_equals, scancode_to_keycode(:scancode_kp_equals),
        :keycode_f13, scancode_to_keycode(:scancode_f13),
        :keycode_f14, scancode_to_keycode(:scancode_f14),
        :keycode_f15, scancode_to_keycode(:scancode_f15),
        :keycode_f16, scancode_to_keycode(:scancode_f16),
        :keycode_f17, scancode_to_keycode(:scancode_f17),
        :keycode_f18, scancode_to_keycode(:scancode_f18),
        :keycode_f19, scancode_to_keycode(:scancode_f19),
        :keycode_f20, scancode_to_keycode(:scancode_f20),
        :keycode_f21, scancode_to_keycode(:scancode_f21),
        :keycode_f22, scancode_to_keycode(:scancode_f22),
        :keycode_f23, scancode_to_keycode(:scancode_f23),
        :keycode_f24, scancode_to_keycode(:scancode_f24),
        :keycode_execute, scancode_to_keycode(:scancode_execute),
        :keycode_help, scancode_to_keycode(:scancode_help),
        :keycode_menu, scancode_to_keycode(:scancode_menu),
        :keycode_select, scancode_to_keycode(:scancode_select),
        :keycode_stop, scancode_to_keycode(:scancode_stop),
        :keycode_again, scancode_to_keycode(:scancode_again),
        :keycode_undo, scancode_to_keycode(:scancode_undo),
        :keycode_cut, scancode_to_keycode(:scancode_cut),
        :keycode_copy, scancode_to_keycode(:scancode_copy),
        :keycode_paste, scancode_to_keycode(:scancode_paste),
        :keycode_find, scancode_to_keycode(:scancode_find),
        :keycode_mute, scancode_to_keycode(:scancode_mute),
        :keycode_volumeup, scancode_to_keycode(:scancode_volumeup),
        :keycode_volumedown, scancode_to_keycode(:scancode_volumedown),
        :keycode_kp_comma, scancode_to_keycode(:scancode_kp_comma),
        :keycode_kp_equalsas400, scancode_to_keycode(:scancode_kp_equalsas400),

        :keycode_alterase, scancode_to_keycode(:scancode_alterase),
        :keycode_sysreq, scancode_to_keycode(:scancode_sysreq),
        :keycode_cancel, scancode_to_keycode(:scancode_cancel),
        :keycode_clear, scancode_to_keycode(:scancode_clear),
        :keycode_prior, scancode_to_keycode(:scancode_prior),
        :keycode_return2, scancode_to_keycode(:scancode_return2),
        :keycode_separator, scancode_to_keycode(:scancode_separator),
        :keycode_out, scancode_to_keycode(:scancode_out),
        :keycode_oper, scancode_to_keycode(:scancode_oper),
        :keycode_clearagain, scancode_to_keycode(:scancode_clearagain),
        :keycode_crsel, scancode_to_keycode(:scancode_crsel),
        :keycode_exsel, scancode_to_keycode(:scancode_exsel),

        :keycode_kp_00, scancode_to_keycode(:scancode_kp_00),
        :keycode_kp_000, scancode_to_keycode(:scancode_kp_000),
        :keycode_thousandsseparator, scancode_to_keycode(:scancode_thousandsseparator),
        :keycode_decimalseparator, scancode_to_keycode(:scancode_decimalseparator),
        :keycode_currencyunit, scancode_to_keycode(:scancode_currencyunit),
        :keycode_currencysubunit, scancode_to_keycode(:scancode_currencysubunit),
        :keycode_kp_leftparen, scancode_to_keycode(:scancode_kp_leftparen),
        :keycode_kp_rightparen, scancode_to_keycode(:scancode_kp_rightparen),
        :keycode_kp_leftbrace, scancode_to_keycode(:scancode_kp_leftbrace),
        :keycode_kp_rightbrace, scancode_to_keycode(:scancode_kp_rightbrace),
        :keycode_kp_tab, scancode_to_keycode(:scancode_kp_tab),
        :keycode_kp_backspace, scancode_to_keycode(:scancode_kp_backspace),
        :keycode_kp_a, scancode_to_keycode(:scancode_kp_a),
        :keycode_kp_b, scancode_to_keycode(:scancode_kp_b),
        :keycode_kp_c, scancode_to_keycode(:scancode_kp_c),
        :keycode_kp_d, scancode_to_keycode(:scancode_kp_d),
        :keycode_kp_e, scancode_to_keycode(:scancode_kp_e),
        :keycode_kp_f, scancode_to_keycode(:scancode_kp_f),
        :keycode_kp_xor, scancode_to_keycode(:scancode_kp_xor),
        :keycode_kp_power, scancode_to_keycode(:scancode_kp_power),
        :keycode_kp_percent, scancode_to_keycode(:scancode_kp_percent),
        :keycode_kp_less, scancode_to_keycode(:scancode_kp_less),
        :keycode_kp_greater, scancode_to_keycode(:scancode_kp_greater),
        :keycode_kp_ampersand, scancode_to_keycode(:scancode_kp_ampersand),
        :keycode_kp_dblampersand, scancode_to_keycode(:scancode_kp_dblampersand),
        :keycode_kp_verticalbar, scancode_to_keycode(:scancode_kp_verticalbar),
        :keycode_kp_dblverticalbar, scancode_to_keycode(:scancode_kp_dblverticalbar),
        :keycode_kp_colon, scancode_to_keycode(:scancode_kp_colon),
        :keycode_kp_hash, scancode_to_keycode(:scancode_kp_hash),
        :keycode_kp_space, scancode_to_keycode(:scancode_kp_space),
        :keycode_kp_at, scancode_to_keycode(:scancode_kp_at),
        :keycode_kp_exclam, scancode_to_keycode(:scancode_kp_exclam),
        :keycode_kp_memstore, scancode_to_keycode(:scancode_kp_memstore),
        :keycode_kp_memrecall, scancode_to_keycode(:scancode_kp_memrecall),
        :keycode_kp_memclear, scancode_to_keycode(:scancode_kp_memclear),
        :keycode_kp_memadd, scancode_to_keycode(:scancode_kp_memadd),
        :keycode_kp_memsubtract, scancode_to_keycode(:scancode_kp_memsubtract),
        :keycode_kp_memmultiply, scancode_to_keycode(:scancode_kp_memmultiply),
        :keycode_kp_memdivide, scancode_to_keycode(:scancode_kp_memdivide),
        :keycode_kp_plusminus, scancode_to_keycode(:scancode_kp_plusminus),
        :keycode_kp_clear, scancode_to_keycode(:scancode_kp_clear),
        :keycode_kp_clearentry, scancode_to_keycode(:scancode_kp_clearentry),
        :keycode_kp_binary, scancode_to_keycode(:scancode_kp_binary),
        :keycode_kp_octal, scancode_to_keycode(:scancode_kp_octal),
        :keycode_kp_decimal, scancode_to_keycode(:scancode_kp_decimal),
        :keycode_kp_hexadecimal, scancode_to_keycode(:scancode_kp_hexadecimal),

        :keycode_lctrl, scancode_to_keycode(:scancode_lctrl),
        :keycode_lshift, scancode_to_keycode(:scancode_lshift),
        :keycode_lalt, scancode_to_keycode(:scancode_lalt),
        :keycode_lgui, scancode_to_keycode(:scancode_lgui),
        :keycode_rctrl, scancode_to_keycode(:scancode_rctrl),
        :keycode_rshift, scancode_to_keycode(:scancode_rshift),
        :keycode_ralt, scancode_to_keycode(:scancode_ralt),
        :keycode_rgui, scancode_to_keycode(:scancode_rgui),

        :keycode_mode, scancode_to_keycode(:scancode_mode),

        :keycode_audionext, scancode_to_keycode(:scancode_audionext),
        :keycode_audioprev, scancode_to_keycode(:scancode_audioprev),
        :keycode_audiostop, scancode_to_keycode(:scancode_audiostop),
        :keycode_audioplay, scancode_to_keycode(:scancode_audioplay),
        :keycode_audiomute, scancode_to_keycode(:scancode_audiomute),
        :keycode_mediaselect, scancode_to_keycode(:scancode_mediaselect),
        :keycode_www, scancode_to_keycode(:scancode_www),
        :keycode_mail, scancode_to_keycode(:scancode_mail),
        :keycode_calculator, scancode_to_keycode(:scancode_calculator),
        :keycode_computer, scancode_to_keycode(:scancode_computer),
        :keycode_ac_search, scancode_to_keycode(:scancode_ac_search),
        :keycode_ac_home, scancode_to_keycode(:scancode_ac_home),
        :keycode_ac_back, scancode_to_keycode(:scancode_ac_back),
        :keycode_ac_forward, scancode_to_keycode(:scancode_ac_forward),
        :keycode_ac_stop, scancode_to_keycode(:scancode_ac_stop),
        :keycode_ac_refresh, scancode_to_keycode(:scancode_ac_refresh),
        :keycode_ac_bookmarks, scancode_to_keycode(:scancode_ac_bookmarks),

        :keycode_brightnessdown, scancode_to_keycode(:scancode_brightnessdown),
        :keycode_brightnessup, scancode_to_keycode(:scancode_brightnessup),
        :keycode_displayswitch, scancode_to_keycode(:scancode_displayswitch),
        :keycode_kbdillumtoggle, scancode_to_keycode(:scancode_kbdillumtoggle),
        :keycode_kbdillumdown, scancode_to_keycode(:scancode_kbdillumdown),
        :keycode_kbdillumup, scancode_to_keycode(:scancode_kbdillumup),
        :keycode_eject, scancode_to_keycode(:scancode_eject),
        :keycode_sleep, scancode_to_keycode(:scancode_sleep) 
    ]
        
end
