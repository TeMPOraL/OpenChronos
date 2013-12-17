// *************************************************************************************************
// Copyleft (C) 2013-Eternity, Temporal Research Centre
// *************************************************************************************************

// *************************************************************************************************
// Include section

// *************************************************************************************************
// Prototypes section

// internal functions
void toggle_beeper();
extern void reset_lifesaver();

// menu functions
extern void sx_lifesaver(u8 line);
extern void mx_lifesaver(u8 line);
extern void display_lifesaver(u8 line, u8 update);

// *************************************************************************************************
// Defines section
#define LIFESAVER_SOUND_STATE_ON          (0u)
#define LIFESAVER_SOUND_STATE_OFF           (1u)
#define LIFESAVER_STATE_RUNNING (0u)
#define LIFESAVER_STATE_CONFIGURING (1u)

#define LIFESAVER_DEFAULT_ON_TICKS                                         (CONV_MS_TO_TICKS(100))
#define LIFESAVER_DEFAULT_OFF_TICKS                                        (CONV_MS_TO_TICKS(2000))

#define LIFESAVER_CPR_BPM                                                  (CONV_MS_TO_TICKS(600)) //100 BPM == 1/100 M/B == 60*1000 / 100 msec/B == 600 Msec/b

// *************************************************************************************************
// Global Variable section
struct lifesaver
{
	u8 soundState;
	u8 menuState;
        u16 bpm;
};
extern struct lifesaver sLifesaver;

// *************************************************************************************************
// Extern section
