
// token definition
typedef struct {
	const char*		name;		// token name
	int				val;		// token value
} sToken;

// index of prefix token
enum {
// tokens without parameters
	HID_COLLECTION_END_INX = 0,
	HID_PUSH_INX,
	HID_POP_INX,
// 'main' report descriptor item tags
	HID_INPUT_INX,
	HID_OUTPUT_INX,
	HID_COLLECTION_INX,
	HID_FEATURE_INX,
// 'global' report item tags
	HID_USAGE_PAGE_INX,
	HID_LOGICAL_MIN_INX,
	HID_LOGICAL_MAX_INX,
	HID_PHYSICAL_MIN_INX,
	HID_PHYSICAL_MAX_INX,
	HID_UNIT_EXPONENT_INX,
	HID_UNIT_INX,
	HID_REPORT_SIZE_INX,
	HID_REPORT_ID_INX,
	HID_REPORT_COUNT_INX,
// 'local' report descriptor item tags
	HID_USAGE_INX,
	HID_USAGE_MIN_INX,
	HID_USAGE_MAX_INX,
};

// tokens - prefix byte
const sToken TokenPrefix[] = {
// tokens without parameters
	{ "HID_COLLECTION_END",	HID_COLLECTION_END },	// 0x00+0x00+0xC0 = 0xC0
	{ "HID_PUSH",			HID_PUSH },				// 0x00+0x04+0xA0 = 0xA4
	{ "HID_POP",			HID_POP },				// 0x00+0x04+0xB0 = 0xB4
// 'main' report descriptor item tags
	{ "HID_INPUT",			HID_INPUT0 },			// 0x00+0x00+0x80 = 0x80
	{ "HID_OUTPUT",			HID_OUTPUT0 },			// 0x00+0x00+0x90 = 0x90
	{ "HID_COLLECTION",		HID_COLLECTION0 },		// 0x00+0x00+0xA0 = 0xA0
	{ "HID_FEATURE",		HID_FEATURE0 },			// 0x00+0x00+0xB0 = 0xB0
// 'global' report item tags
	{ "HID_USAGE_PAGE",		HID_USAGE_PAGE0 },		// 0x00+0x04+0x00 = 0x04
	{ "HID_LOGICAL_MIN",	HID_LOGICAL_MIN0 },		// 0x00+0x04+0x10 = 0x14
	{ "HID_LOGICAL_MAX",	HID_LOGICAL_MAX0 },		// 0x00+0x04+0x20 = 0x24
	{ "HID_PHYSICAL_MIN",	HID_PHYSICAL_MIN0 },	// 0x00+0x04+0x30 = 0x34
	{ "HID_PHYSICAL_MAX",	HID_PHYSICAL_MAX0 },	// 0x00+0x04+0x40 = 0x44
	{ "HID_UNIT_EXPONENT",	HID_UNIT_EXPONENT0 },	// 0x00+0x04+0x50 = 0x54
	{ "HID_UNIT",			HID_UNIT0 },			// 0x00+0x04+0x60 = 0x64
	{ "HID_REPORT_SIZE",	HID_REPORT_SIZE0 },		// 0x00+0x04+0x70 = 0x74
	{ "HID_REPORT_ID",		HID_REPORT_ID0 },		// 0x00+0x04+0x80 = 0x84
	{ "HID_REPORT_COUNT",	HID_REPORT_COUNT0 },	// 0x00+0x04+0x90 = 0x94
// 'local' report descriptor item tags
	{ "HID_USAGE",			HID_USAGE0 },			// 0x00+0x08+0x00 = 0x08
	{ "HID_USAGE_MIN",		HID_USAGE_MIN0 },		// 0x00+0x08+0x10 = 0x18
	{ "HID_USAGE_MAX",		HID_USAGE_MAX0 },		// 0x00+0x08+0x20 = 0x28
};

// tokens - constant data following HID_INPUT, HID_OUTPUT and HID_FEATURE (as bit mask)
const sToken TokenInput[] = {
	{ "HID_DATA",				HID_DATA },				// 0
	{ "HID_CONSTANT",			HID_CONSTANT },			// B0	// 0x01

	{ "HID_ARRAY",				HID_ARRAY },			// 0
	{ "HID_VARIABLE",			HID_VARIABLE },			// B1	// 0x02

	{ "HID_ABSOLUTE",			HID_ABSOLUTE },			// 0
	{ "HID_RELATIVE",			HID_RELATIVE },			// B2	// 0x04

	{ "HID_NO_WRAP",			HID_NO_WRAP },			// 0
	{ "HID_WRAP",				HID_WRAP },				// B3	// 0x08

	{ "HID_LINEAR",				HID_LINEAR },			// 0
	{ "HID_NON_LINEAR",			HID_NON_LINEAR },		// B4	// 0x10

	{ "HID_PREFERRED_STATE",	HID_PREFERRED_STATE },	// 0
	{ "HID_NO_PREFERRED",		HID_NO_PREFERRED },		// B5	// 0x20

	{ "HID_NO_NULL_POSITION",	HID_NO_NULL_POSITION },	// 0
	{ "HID_NULL_STATE",			HID_NULL_STATE },		// B6	// 0x40

	{ "HID_NON_VOLATILE",		HID_NON_VOLATILE },		// B7	// 0
	{ "HID_VOLATILE",			HID_VOLATILE },			// B7	// 0x80 if used, data size must be 2 !

	{ "HID_BITFIELD",			HID_BITFIELD },			// B8	// 0
	{ "HID_BUFFERED_BYTES",		HID_BUFFERED_BYTES },	// B8	// 0x1000 if used, data size must be 2 !
};

// tokens - constant data following HID_COLLECTION
const sToken TokenColl[] = {
	{ "HID_COLLECTION_PHYSICAL",		HID_COLLECTION_PHYSICAL },			// 0x00
	{ "HID_COLLECTION_APPLICATION",		HID_COLLECTION_APPLICATION },		// 0x01
	{ "HID_COLLECTION_LOGICAL",			HID_COLLECTION_LOGICAL },			// 0x02
	{ "HID_COLLECTION_REPORT",			HID_COLLECTION_REPORT },			// 0x03
	{ "HID_COLLECTION_NAMED_ARRAY",		HID_COLLECTION_NAMED_ARRAY },		// 0x04
	{ "HID_COLLECTION_USAGE_SWITCH",	HID_COLLECTION_USAGE_SWITCH },		// 0x05
	{ "HID_COLLECTION_USAGE_MODIFIER",	HID_COLLECTION_USAGE_MODIFIER },	// 0x06
};

// index of usage page
enum {
	HID_USAGE_PAGE_DESKTOP_INX = 0,
	HID_USAGE_PAGE_SIMULATE_INX,
	HID_USAGE_PAGE_VIRTUAL_REALITY_INX,
	HID_USAGE_PAGE_SPORT_INX,
	HID_USAGE_PAGE_GAME_INX,
	HID_USAGE_PAGE_GENERIC_DEVICE_INX,
	HID_USAGE_PAGE_KEYBOARD_INX,
	HID_USAGE_PAGE_LED_INX,
	HID_USAGE_PAGE_BUTTON_INX,
	HID_USAGE_PAGE_ORDINAL_INX,
	HID_USAGE_PAGE_TELEPHONY_INX,
	HID_USAGE_PAGE_CONSUMER_INX,
	HID_USAGE_PAGE_DIGITIZER_INX,
	HID_USAGE_PAGE_PID_INX,
	HID_USAGE_PAGE_UNICODE_INX,
	HID_USAGE_PAGE_ALPHA_DISPLAY_INX,
	HID_USAGE_PAGE_MEDICAL_INX,
	HID_USAGE_PAGE_MONITOR_INX,
	HID_USAGE_PAGE_POWER_INX,
	HID_USAGE_PAGE_BARCODE_SCANNER_INX,
	HID_USAGE_PAGE_SCALE_INX,
	HID_USAGE_PAGE_MSR_INX,
	HID_USAGE_PAGE_CAMERA_INX,
	HID_USAGE_PAGE_ARCADE_INX,
	HID_USAGE_PAGE_FIDO_INX,
	HID_USAGE_PAGE_VENDOR_INX,
};

// tokens - usage page HID_USAGE_PAGE
const sToken TokenPage[] = {
	{ "HID_USAGE_PAGE_DESKTOP",			HID_USAGE_PAGE_DESKTOP },			// 0x01
	{ "HID_USAGE_PAGE_SIMULATE",		HID_USAGE_PAGE_SIMULATE },			// 0x02
	{ "HID_USAGE_PAGE_VIRTUAL_REALITY", HID_USAGE_PAGE_VIRTUAL_REALITY },	// 0x03
	{ "HID_USAGE_PAGE_SPORT", 			HID_USAGE_PAGE_SPORT },				// 0x04
	{ "HID_USAGE_PAGE_GAME", 			HID_USAGE_PAGE_GAME },				// 0x05
	{ "HID_USAGE_PAGE_GENERIC_DEVICE", 	HID_USAGE_PAGE_GENERIC_DEVICE },	// 0x06
	{ "HID_USAGE_PAGE_KEYBOARD", 		HID_USAGE_PAGE_KEYBOARD },			// 0x07
	{ "HID_USAGE_PAGE_LED", 			HID_USAGE_PAGE_LED },				// 0x08
	{ "HID_USAGE_PAGE_BUTTON", 			HID_USAGE_PAGE_BUTTON },			// 0x09
	{ "HID_USAGE_PAGE_ORDINAL", 		HID_USAGE_PAGE_ORDINAL },			// 0x0a
	{ "HID_USAGE_PAGE_TELEPHONY",	 	HID_USAGE_PAGE_TELEPHONY },			// 0x0b
	{ "HID_USAGE_PAGE_CONSUMER", 		HID_USAGE_PAGE_CONSUMER },			// 0x0c
	{ "HID_USAGE_PAGE_DIGITIZER", 		HID_USAGE_PAGE_DIGITIZER },			// 0x0d
	{ "HID_USAGE_PAGE_PID", 			HID_USAGE_PAGE_PID },				// 0x0f
	{ "HID_USAGE_PAGE_UNICODE", 		HID_USAGE_PAGE_UNICODE },			// 0x10
	{ "HID_USAGE_PAGE_ALPHA_DISPLAY", 	HID_USAGE_PAGE_ALPHA_DISPLAY },		// 0x14
	{ "HID_USAGE_PAGE_MEDICAL", 		HID_USAGE_PAGE_MEDICAL },			// 0x40
	{ "HID_USAGE_PAGE_MONITOR", 		HID_USAGE_PAGE_MONITOR },			// 0x80
	{ "HID_USAGE_PAGE_POWER", 			HID_USAGE_PAGE_POWER },				// 0x84
	{ "HID_USAGE_PAGE_BARCODE_SCANNER", HID_USAGE_PAGE_BARCODE_SCANNER },	// 0x8c
	{ "HID_USAGE_PAGE_SCALE", 			HID_USAGE_PAGE_SCALE },				// 0x8d
	{ "HID_USAGE_PAGE_MSR", 			HID_USAGE_PAGE_MSR },				// 0x8e
	{ "HID_USAGE_PAGE_CAMERA", 			HID_USAGE_PAGE_CAMERA },			// 0x90
	{ "HID_USAGE_PAGE_ARCADE", 			HID_USAGE_PAGE_ARCADE },			// 0x91
	{ "HID_USAGE_PAGE_FIDO", 			HID_USAGE_PAGE_FIDO },				// 0xF1D0
	{ "HID_USAGE_PAGE_VENDOR", 			HID_USAGE_PAGE_VENDOR },			// 0xFF00
};

// tokens - generic desktop page HID_USAGE_PAGE_DESKTOP
const sToken TokenDesktop[] = {
	{ "HID_USAGE_DESKTOP_POINTER",								HID_USAGE_DESKTOP_POINTER },								// 0x01
	{ "HID_USAGE_DESKTOP_MOUSE",								HID_USAGE_DESKTOP_MOUSE },									// 0x02
	{ "HID_USAGE_DESKTOP_JOYSTICK",								HID_USAGE_DESKTOP_JOYSTICK },								// 0x04
	{ "HID_USAGE_DESKTOP_GAMEPAD",								HID_USAGE_DESKTOP_GAMEPAD },								// 0x05
	{ "HID_USAGE_DESKTOP_KEYBOARD",								HID_USAGE_DESKTOP_KEYBOARD },								// 0x06
	{ "HID_USAGE_DESKTOP_KEYPAD",								HID_USAGE_DESKTOP_KEYPAD },									// 0x07
	{ "HID_USAGE_DESKTOP_MULTI_AXIS_CONTROLLER",				HID_USAGE_DESKTOP_MULTI_AXIS_CONTROLLER },					// 0x08
	{ "HID_USAGE_DESKTOP_TABLET_PC_SYSTEM",						HID_USAGE_DESKTOP_TABLET_PC_SYSTEM },						// 0x09
	{ "HID_USAGE_DESKTOP_X",									HID_USAGE_DESKTOP_X },										// 0x30
	{ "HID_USAGE_DESKTOP_Y",									HID_USAGE_DESKTOP_Y },										// 0x31
	{ "HID_USAGE_DESKTOP_Z",									HID_USAGE_DESKTOP_Z },										// 0x32
	{ "HID_USAGE_DESKTOP_RX",									HID_USAGE_DESKTOP_RX },										// 0x33
	{ "HID_USAGE_DESKTOP_RY",									HID_USAGE_DESKTOP_RY },										// 0x34
	{ "HID_USAGE_DESKTOP_RZ",									HID_USAGE_DESKTOP_RZ },										// 0x35
	{ "HID_USAGE_DESKTOP_SLIDER",								HID_USAGE_DESKTOP_SLIDER },									// 0x36
	{ "HID_USAGE_DESKTOP_DIAL",									HID_USAGE_DESKTOP_DIAL },									// 0x37
	{ "HID_USAGE_DESKTOP_WHEEL",								HID_USAGE_DESKTOP_WHEEL },									// 0x38
	{ "HID_USAGE_DESKTOP_HAT_SWITCH",							HID_USAGE_DESKTOP_HAT_SWITCH },								// 0x39
	{ "HID_USAGE_DESKTOP_COUNTED_BUFFER",						HID_USAGE_DESKTOP_COUNTED_BUFFER },							// 0x3A
	{ "HID_USAGE_DESKTOP_BYTE_COUNT",							HID_USAGE_DESKTOP_BYTE_COUNT },								// 0x3B
	{ "HID_USAGE_DESKTOP_MOTION_WAKEUP",						HID_USAGE_DESKTOP_MOTION_WAKEUP },							// 0x3C
	{ "HID_USAGE_DESKTOP_START",								HID_USAGE_DESKTOP_START },									// 0x3D
	{ "HID_USAGE_DESKTOP_SELECT",								HID_USAGE_DESKTOP_SELECT },									// 0x3E
	{ "HID_USAGE_DESKTOP_VX",									HID_USAGE_DESKTOP_VX },										// 0x40
	{ "HID_USAGE_DESKTOP_VY",									HID_USAGE_DESKTOP_VY },										// 0x41
	{ "HID_USAGE_DESKTOP_VZ",									HID_USAGE_DESKTOP_VZ },										// 0x42
	{ "HID_USAGE_DESKTOP_VBRX",									HID_USAGE_DESKTOP_VBRX },									// 0x43
	{ "HID_USAGE_DESKTOP_VBRY",									HID_USAGE_DESKTOP_VBRY },									// 0x44
	{ "HID_USAGE_DESKTOP_VBRZ",									HID_USAGE_DESKTOP_VBRZ },									// 0x45
	{ "HID_USAGE_DESKTOP_VNO",									HID_USAGE_DESKTOP_VNO },									// 0x46
	{ "HID_USAGE_DESKTOP_FEATURE_NOTIFICATION",					HID_USAGE_DESKTOP_FEATURE_NOTIFICATION },					// 0x47
	{ "HID_USAGE_DESKTOP_RESOLUTION_MULTIPLIER",				HID_USAGE_DESKTOP_RESOLUTION_MULTIPLIER },					// 0x48
	{ "HID_USAGE_DESKTOP_SYSTEM_CONTROL",						HID_USAGE_DESKTOP_SYSTEM_CONTROL },							// 0x80
	{ "HID_USAGE_DESKTOP_SYSTEM_POWER_DOWN",					HID_USAGE_DESKTOP_SYSTEM_POWER_DOWN },						// 0x81
	{ "HID_USAGE_DESKTOP_SYSTEM_SLEEP",							HID_USAGE_DESKTOP_SYSTEM_SLEEP },							// 0x82
	{ "HID_USAGE_DESKTOP_SYSTEM_WAKE_UP",						HID_USAGE_DESKTOP_SYSTEM_WAKE_UP },							// 0x83
	{ "HID_USAGE_DESKTOP_SYSTEM_CONTEXT_MENU",					HID_USAGE_DESKTOP_SYSTEM_CONTEXT_MENU },					// 0x84
	{ "HID_USAGE_DESKTOP_SYSTEM_MAIN_MENU",						HID_USAGE_DESKTOP_SYSTEM_MAIN_MENU },						// 0x85
	{ "HID_USAGE_DESKTOP_SYSTEM_APP_MENU",						HID_USAGE_DESKTOP_SYSTEM_APP_MENU },						// 0x86
	{ "HID_USAGE_DESKTOP_SYSTEM_MENU_HELP",						HID_USAGE_DESKTOP_SYSTEM_MENU_HELP },						// 0x87
	{ "HID_USAGE_DESKTOP_SYSTEM_MENU_EXIT",						HID_USAGE_DESKTOP_SYSTEM_MENU_EXIT },						// 0x88
	{ "HID_USAGE_DESKTOP_SYSTEM_MENU_SELECT",					HID_USAGE_DESKTOP_SYSTEM_MENU_SELECT },						// 0x89
	{ "HID_USAGE_DESKTOP_SYSTEM_MENU_RIGHT",					HID_USAGE_DESKTOP_SYSTEM_MENU_RIGHT },						// 0x8A
	{ "HID_USAGE_DESKTOP_SYSTEM_MENU_LEFT",						HID_USAGE_DESKTOP_SYSTEM_MENU_LEFT },						// 0x8B
	{ "HID_USAGE_DESKTOP_SYSTEM_MENU_UP",						HID_USAGE_DESKTOP_SYSTEM_MENU_UP },							// 0x8C
	{ "HID_USAGE_DESKTOP_SYSTEM_MENU_DOWN",						HID_USAGE_DESKTOP_SYSTEM_MENU_DOWN },						// 0x8D
	{ "HID_USAGE_DESKTOP_SYSTEM_COLD_RESTART",					HID_USAGE_DESKTOP_SYSTEM_COLD_RESTART },					// 0x8E
	{ "HID_USAGE_DESKTOP_SYSTEM_WARM_RESTART",					HID_USAGE_DESKTOP_SYSTEM_WARM_RESTART },					// 0x8F
	{ "HID_USAGE_DESKTOP_DPAD_UP",								HID_USAGE_DESKTOP_DPAD_UP },								// 0x90
	{ "HID_USAGE_DESKTOP_DPAD_DOWN",							HID_USAGE_DESKTOP_DPAD_DOWN },								// 0x91
	{ "HID_USAGE_DESKTOP_DPAD_RIGHT",							HID_USAGE_DESKTOP_DPAD_RIGHT },								// 0x92
	{ "HID_USAGE_DESKTOP_DPAD_LEFT",							HID_USAGE_DESKTOP_DPAD_LEFT },								// 0x93
	{ "HID_USAGE_DESKTOP_SYSTEM_DOCK",							HID_USAGE_DESKTOP_SYSTEM_DOCK },							// 0xA0
	{ "HID_USAGE_DESKTOP_SYSTEM_UNDOCK",						HID_USAGE_DESKTOP_SYSTEM_UNDOCK },							// 0xA1
	{ "HID_USAGE_DESKTOP_SYSTEM_SETUP",							HID_USAGE_DESKTOP_SYSTEM_SETUP },							// 0xA2
	{ "HID_USAGE_DESKTOP_SYSTEM_BREAK",							HID_USAGE_DESKTOP_SYSTEM_BREAK },							// 0xA3
	{ "HID_USAGE_DESKTOP_SYSTEM_DEBUGGER_BREAK",				HID_USAGE_DESKTOP_SYSTEM_DEBUGGER_BREAK },					// 0xA4
	{ "HID_USAGE_DESKTOP_APPLICATION_BREAK",					HID_USAGE_DESKTOP_APPLICATION_BREAK },						// 0xA5
	{ "HID_USAGE_DESKTOP_APPLICATION_DEBUGGER_BREAK",			HID_USAGE_DESKTOP_APPLICATION_DEBUGGER_BREAK },				// 0xA6
	{ "HID_USAGE_DESKTOP_SYSTEM_SPEAKER_MUTE",					HID_USAGE_DESKTOP_SYSTEM_SPEAKER_MUTE },					// 0xA7
	{ "HID_USAGE_DESKTOP_SYSTEM_HIBERNATE",						HID_USAGE_DESKTOP_SYSTEM_HIBERNATE },						// 0xA8
	{ "HID_USAGE_DESKTOP_SYSTEM_DISPLAY_INVERT",				HID_USAGE_DESKTOP_SYSTEM_DISPLAY_INVERT },					// 0xB0
	{ "HID_USAGE_DESKTOP_SYSTEM_DISPLAY_INTERNAL",				HID_USAGE_DESKTOP_SYSTEM_DISPLAY_INTERNAL },				// 0xB1
	{ "HID_USAGE_DESKTOP_SYSTEM_DISPLAY_EXTERNAL",				HID_USAGE_DESKTOP_SYSTEM_DISPLAY_EXTERNAL },				// 0xB2
	{ "HID_USAGE_DESKTOP_SYSTEM_DISPLAY_BOTH",					HID_USAGE_DESKTOP_SYSTEM_DISPLAY_BOTH },					// 0xB3
	{ "HID_USAGE_DESKTOP_SYSTEM_DISPLAY_DUAL",					HID_USAGE_DESKTOP_SYSTEM_DISPLAY_DUAL },					// 0xB4
	{ "HID_USAGE_DESKTOP_SYSTEM_DISPLAY_TOGGLE_INT_EXT",		HID_USAGE_DESKTOP_SYSTEM_DISPLAY_TOGGLE_INT_EXT },			// 0xB5
	{ "HID_USAGE_DESKTOP_SYSTEM_DISPLAY_SWAP_PRIMARY_SECONDARY",HID_USAGE_DESKTOP_SYSTEM_DISPLAY_SWAP_PRIMARY_SECONDARY },	// 0xB6
	{ "HID_USAGE_DESKTOP_SYSTEM_DISPLAY_LCD_AUTOSCALE",			HID_USAGE_DESKTOP_SYSTEM_DISPLAY_LCD_AUTOSCALE },			// 0xB7
	{ "HID_USAGE_DESKTOP_THROTTLE",								HID_USAGE_DESKTOP_THROTTLE },								// 0xBB
};

// tokens - consumer page HID_USAGE_PAGE_CONSUMER
const sToken TokenConsumer[] = {
// - Generic Control
	{ "HID_USAGE_CONSUMER_CONTROL",							HID_USAGE_CONSUMER_CONTROL },						// 0x0001
// - Power Control
	{ "HID_USAGE_CONSUMER_POWER",							HID_USAGE_CONSUMER_POWER },							// 0x0030
	{ "HID_USAGE_CONSUMER_RESET",							HID_USAGE_CONSUMER_RESET },							// 0x0031
	{ "HID_USAGE_CONSUMER_SLEEP",							HID_USAGE_CONSUMER_SLEEP },							// 0x0032
// - Screen Brightness
	{ "HID_USAGE_CONSUMER_BRIGHTNESS_INCREMENT",			HID_USAGE_CONSUMER_BRIGHTNESS_INCREMENT },			// 0x006F
	{ "HID_USAGE_CONSUMER_BRIGHTNESS_DECREMENT",			HID_USAGE_CONSUMER_BRIGHTNESS_DECREMENT },			// 0x0070
// - Mobile systems with Windows 8
	{ "HID_USAGE_CONSUMER_WIRELESS_RADIO_CONTROLS",			HID_USAGE_CONSUMER_WIRELESS_RADIO_CONTROLS },		// 0x000C
	{ "HID_USAGE_CONSUMER_WIRELESS_RADIO_BUTTONS",			HID_USAGE_CONSUMER_WIRELESS_RADIO_BUTTONS },		// 0x00C6
	{ "HID_USAGE_CONSUMER_WIRELESS_RADIO_LED",				HID_USAGE_CONSUMER_WIRELESS_RADIO_LED },			// 0x00C7
	{ "HID_USAGE_CONSUMER_WIRELESS_RADIO_SLIDER_SWITCH",	HID_USAGE_CONSUMER_WIRELESS_RADIO_SLIDER_SWITCH },	// 0x00C8
// - Media Control
	{ "HID_USAGE_CONSUMER_PLAY_PAUSE",						HID_USAGE_CONSUMER_PLAY_PAUSE },					// 0x00CD
	{ "HID_USAGE_CONSUMER_SCAN_NEXT",						HID_USAGE_CONSUMER_SCAN_NEXT },						// 0x00B5
	{ "HID_USAGE_CONSUMER_SCAN_PREVIOUS",					HID_USAGE_CONSUMER_SCAN_PREVIOUS },					// 0x00B6
	{ "HID_USAGE_CONSUMER_STOP",							HID_USAGE_CONSUMER_STOP },							// 0x00B7
	{ "HID_USAGE_CONSUMER_VOLUME",							HID_USAGE_CONSUMER_VOLUME },						// 0x00E0
	{ "HID_USAGE_CONSUMER_MUTE",							HID_USAGE_CONSUMER_MUTE },							// 0x00E2
	{ "HID_USAGE_CONSUMER_BASS",							HID_USAGE_CONSUMER_BASS },							// 0x00E3
	{ "HID_USAGE_CONSUMER_TREBLE",							HID_USAGE_CONSUMER_TREBLE },						// 0x00E4
	{ "HID_USAGE_CONSUMER_BASS_BOOST",						HID_USAGE_CONSUMER_BASS_BOOST },					// 0x00E5
	{ "HID_USAGE_CONSUMER_VOLUME_INCREMENT",				HID_USAGE_CONSUMER_VOLUME_INCREMENT },				// 0x00E9
	{ "HID_USAGE_CONSUMER_VOLUME_DECREMENT",				HID_USAGE_CONSUMER_VOLUME_DECREMENT },				// 0x00EA
	{ "HID_USAGE_CONSUMER_BASS_INCREMENT",					HID_USAGE_CONSUMER_BASS_INCREMENT },				// 0x0152
	{ "HID_USAGE_CONSUMER_BASS_DECREMENT",					HID_USAGE_CONSUMER_BASS_DECREMENT },				// 0x0153
	{ "HID_USAGE_CONSUMER_TREBLE_INCREMENT",				HID_USAGE_CONSUMER_TREBLE_INCREMENT },				// 0x0154
	{ "HID_USAGE_CONSUMER_TREBLE_DECREMENT",				HID_USAGE_CONSUMER_TREBLE_DECREMENT },				// 0x0155
// - Application Launcher
	{ "HID_USAGE_CONSUMER_AL_CONSUMER_CONTROL_CONFIGURATION", HID_USAGE_CONSUMER_AL_CONSUMER_CONTROL_CONFIGURATION }, // 0x0183
	{ "HID_USAGE_CONSUMER_AL_EMAIL_READER",					HID_USAGE_CONSUMER_AL_EMAIL_READER },				// 0x018A
	{ "HID_USAGE_CONSUMER_AL_CALCULATOR",					HID_USAGE_CONSUMER_AL_CALCULATOR },					// 0x0192
	{ "HID_USAGE_CONSUMER_AL_LOCAL_BROWSER",				HID_USAGE_CONSUMER_AL_LOCAL_BROWSER },				// 0x0194
// - Browser/Explorer Specific
	{ "HID_USAGE_CONSUMER_AC_SEARCH",						HID_USAGE_CONSUMER_AC_SEARCH },						// 0x0221
	{ "HID_USAGE_CONSUMER_AC_HOME",							HID_USAGE_CONSUMER_AC_HOME },						// 0x0223
	{ "HID_USAGE_CONSUMER_AC_BACK",							HID_USAGE_CONSUMER_AC_BACK },						// 0x0224
	{ "HID_USAGE_CONSUMER_AC_FORWARD",						HID_USAGE_CONSUMER_AC_FORWARD },					// 0x0225
	{ "HID_USAGE_CONSUMER_AC_STOP",							HID_USAGE_CONSUMER_AC_STOP },						// 0x0226
	{ "HID_USAGE_CONSUMER_AC_REFRESH",						HID_USAGE_CONSUMER_AC_REFRESH },					// 0x0227
	{ "HID_USAGE_CONSUMER_AC_BOOKMARKS",					HID_USAGE_CONSUMER_AC_BOOKMARKS },					// 0x022A
// - Mouse Horizontal scroll
	{ "HID_USAGE_CONSUMER_AC_PAN",							HID_USAGE_CONSUMER_AC_PAN },						// 0x0238
};

// tokens - FIDO alliance page HID_USAGE_PAGE_FIDO
const sToken TokenFido[] = {
	{ "HID_USAGE_FIDO_U2FHID",		HID_USAGE_FIDO_U2FHID },	// 0x01	// U2FHID usage for top-level collection
	{ "HID_USAGE_FIDO_DATA_IN",		HID_USAGE_FIDO_DATA_IN },	// 0x20	// Raw IN data report
	{ "HID_USAGE_FIDO_DATA_OUT",	HID_USAGE_FIDO_DATA_OUT },	// 0x21	// Raw OUT data report
};