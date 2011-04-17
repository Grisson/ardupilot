// Example config file. Use APM_Config.h.reference and the wiki to find additional defines to setup your plane.
// Once you upload the code, run the factory "reset" to save all config values to EEPROM.
// After reset, use the setup mode to set your radio limits for CH1-4, and to set your flight modes.

// GPS is auto-selected

#define MAG_ORIENTATION		AP_COMPASS_COMPONENTS_DOWN_PINS_BACK

#define GPS_PROTOCOL GPS_PROTOCOL_MTK

#define GCS_PROTOCOL        GCS_PROTOCOL_NONE
//#define GCS_PORT 0

#define SERIAL0_BAUD			38400

# define STABILIZE_ROLL_P 		0.75
# define STABILIZE_PITCH_P		0.75
//# define STABILIZE_DAMPENER		0.1


//#define ACRO_RATE_TRIGGER 4200
// if you want full ACRO mode, set value to 0
// if you want mostly stabilize with flips, set value to 4200



// Logging
//#define LOG_CURRENT ENABLED

# define LOG_ATTITUDE_FAST		DISABLED
# define LOG_ATTITUDE_MED 		DISABLED
# define LOG_GPS 				DISABLED
# define LOG_PM 				DISABLED
# define LOG_CTUN				ENABLED
# define LOG_NTUN				DISABLED
# define LOG_MODE				DISABLED
# define LOG_RAW				DISABLED
# define LOG_CMD				DISABLED
# define LOG_CURRENT			DISABLED

