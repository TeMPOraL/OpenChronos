// driver
#include "display.h"
#include "ports.h"

// logic
#include "lights.h"

#define MAX_LIGHTS_CAPTIONS 4

struct lights sLights;

u8 lightNames[MAX_LIGHTS_CAPTIONS][5] = {"SOFT",
					"HARD",
					"CHLL",
					"KTCN"};

void reset_lights() {
	sLights.currentLight = 0;
}

void sx_lights(u8 line) {
	if(++sLights.currentLight >= MAX_LIGHTS_CAPTIONS) {
		sLights.currentLight = 0;
	}
}

void mx_lights(u8 line) {
	//set up the BPM mode
}

void display_lights(u8 line, u8 update) {
	u8* wat = "MAKA";
	display_chars(LCD_SEG_L1_3_0, lightNames[sLights.currentLight], SEG_ON);

}

