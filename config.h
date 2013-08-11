// !!!! DO NOT EDIT !!!, use: make config

#ifndef _CONFIG_H_
#define _CONFIG_H_

#define CONFIG_FREQUENCY 868
#define OPTION_TIME_DISPLAY 0
#define CONFIG_METRIC_ONLY
// FIXEDPOINT is not set
#ifndef THIS_DEVICE_ADDRESS
#define THIS_DEVICE_ADDRESS {0xd9,0xc8,0x9b,0x42}
#endif // THIS_DEVICE_ADDRESS
// USE_LCD_CHARGE_PUMP is not set
#define USE_WATCHDOG
// DEBUG is not set
#define CONFIG_DAY_OF_WEEK
#define CONFIG_TEST
#define CONFIG_FAST_LCD_REFRESH
// CONFIG_BLUEROBIN is not set
#define CONFIG_ALTITUDE
#define CONFIG_VARIO
// CONFIG_ALTI_ACCUMULATOR is not set

#endif // _CONFIG_H_
