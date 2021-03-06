// driver
#include "display.h"
#include "buzzer.h"
#include "ports.h"

// logic
#include "lifesaver.h"

struct lifesaver sLifesaver;

void reset_lifesaver() {
	sLifesaver.bpm = LIFESAVER_CPR_BPM;
	sLifesaver.soundState = LIFESAVER_SOUND_STATE_OFF;
	sLifesaver.menuState = LIFESAVER_STATE_RUNNING;
}

void sx_lifesaver(u8 line) {
	toggle_beeper();
}

void mx_lifesaver(u8 line) {
	//set up the BPM mode
}

void toggle_beeper() {
	if(sLifesaver.soundState == LIFESAVER_SOUND_STATE_ON) {
		stop_buzzer();
		sLifesaver.soundState = LIFESAVER_SOUND_STATE_OFF;
	}
	else {
		start_buzzer(255, LIFESAVER_DEFAULT_ON_TICKS, sLifesaver.bpm - LIFESAVER_DEFAULT_ON_TICKS);
		sLifesaver.soundState = LIFESAVER_SOUND_STATE_ON;
	}
}

void display_lifesaver(u8 line, u8 update) {
	u8* str;
	if(update == DISPLAY_LINE_UPDATE_FULL) {
		display_symbol(LCD_ICON_HEART, SEG_ON);
	}
	else if(update == DISPLAY_LINE_CLEAR) {
		display_symbol(LCD_ICON_HEART, SEG_OFF);
	}

	str = int_to_array(100, 4, 1);
	display_chars(LCD_SEG_L1_3_0, str, SEG_ON);
}
