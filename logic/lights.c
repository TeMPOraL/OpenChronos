// driver
#include "display.h"
#include "ports.h"

// logic
#include "lights.h"

struct lights sLights;

u8 lightNames[MAX_LIGHTS][5] = {"SOFT",
				"HARD",
				"CHLL",
				"KCHN"};

u8 lightStateLabels[3][6] = {"OFF",
			     "ON",
			     "UNDEF",};
	
void reset_lights() {
	u8 i;
	sLights.currentLight = 0;

	//FIXME replace with memset-equivalent
	for(i = 0 ; i < MAX_LIGHTS ; ++i) {
		sLights.lightStates[i] = i%3;
	}
}

void sx_lights(u8 line) {
	if(++sLights.currentLight >= MAX_LIGHTS) {
		sLights.currentLight = 0;
	}
	//radio-refresh status
}

void mx_lights(u8 line) {
	
}

void display_lights(u8 line, u8 update) {
	clear_line(LINE2);
	display_chars(LCD_SEG_L1_3_0, lightNames[sLights.currentLight], SEG_ON);
	display_chars(LCD_SEG_L2_4_0, lightStateLabels[sLights.lightStates[sLights.currentLight]], SEG_ON);
}

