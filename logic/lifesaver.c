// driver
#include "display.h"
#include "buzzer.h"
#include "ports.h"

// logic
#include "lifesaver.h"

struct lifesaver sLifesaver;

void reset_lifesaver() {
	sLifesaver.bpm = LIFESAVER_DEFAULT_OFF;
	sLifesaver.state = LIFESAVER_SOUND_OFF;
}

void sx_lifesaver(u8 line) {
	toggle_beeper();
}

void mx_lifesaver(u8 line) {
	//set up the BPM mode
}

void toggle_beeper() {
	if(sLifesaver.state == LIFESAVER_SOUND_ON) {
		stop_buzzer();
		sLifesaver.state = LIFESAVER_SOUND_OFF;
	}
	else {
		start_buzzer(255, LIFESAVER_DEFAULT_ON, sLifesaver.bpm - LIFESAVER_DEFAULT_ON);
		sLifesaver.state = LIFESAVER_SOUND_ON;
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

	str = int_to_array(sLifesaver.bpm, 4, 0);p
	display_chars(switch_seg(line, LCD_SEG_L1_3_0, LCD_SEG_L2_3_0), str, SEG_ON);
}
