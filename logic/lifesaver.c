// driver
#include "display.h"
#include "buzzer.h"
#include "ports.h"

// logic
#include "lifesaver.h"

struct lifesaver sLifesaver;

void sx_lifesaver(u8 line) {
	toggle_beeper();
}

void mx_lifesaver(u8 line) {
	
}

void toggle_beeper() {
	if(sLifesaver.state == LIFESAVER_SOUND_ON) {
		stop_buzzer();
		sLifesaver.state = LIFESAVER_SOUND_OFF;
	}
	else {
		start_buzzer(255, BUZZER_ON_TICKS, BUZZER_OFF_TICKS);
		sLifesaver.state = LIFESAVER_SOUND_ON;
	}
}

void display_lifesaver(u8 line, u8 update) {
	if(update == DISPLAY_LINE_UPDATE_FULL) {
		display_symbol(LCD_ICON_HEART, SEG_ON);
	}
	else if(update == DISPLAY_LINE_CLEAR) {
		display_symbol(LCD_ICON_HEART, SEG_OFF);
	}
}
