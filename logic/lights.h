// *************************************************************************************************
// Copyleft (C) 2013-Eternity, Temporal Research Centre
// *************************************************************************************************

#define MAX_LIGHTS 4

#define LIGHT_STATE_OFF 0
#define LIGHT_STATE_ON 1

// *************************************************************************************************
// Include section

// *************************************************************************************************
// Prototypes section

// internal functions
extern void reset_lights();

// menu functions
extern void sx_lights(u8 line);
extern void mx_lights(u8 line);
extern void display_lights(u8 line, u8 update);

// *************************************************************************************************
// Defines section

// *************************************************************************************************
// Global Variable section
struct lights
{
	u8 currentLight;
	u8 lightStates[4];
};

extern struct lights sLights;

// *************************************************************************************************
// Extern section

