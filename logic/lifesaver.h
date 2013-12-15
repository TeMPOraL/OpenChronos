// *************************************************************************************************
// Copyleft (C) 2013-Eternity, Temporal Research Centre
// *************************************************************************************************

// *************************************************************************************************
// Include section

// *************************************************************************************************
// Prototypes section

// internal functions
void toggle_beeper();

// menu functions
extern void sx_lifesaver(u8 line);
extern void mx_lifesaver(u8 line);
extern void display_lifesaver(u8 line, u8 update);

// *************************************************************************************************
// Defines section
#define LIFESAVER_SOUND_ON          (0u)
#define LIFESAVER_SOUND_OFF           (1u)

#define LIFESAVER_DEFAULT_ON                                         (CONV_MS_TO_TICKS(100))
#define LIFESAVER_DEFAULT_OFF                                        (CONV_MS_TO_TICKS(5000))

// *************************************************************************************************
// Global Variable section
struct lifesaver
{
	u8 state;
        u8 bpm;
};
extern struct lifesaver sLifesaver;

// *************************************************************************************************
// Extern section
