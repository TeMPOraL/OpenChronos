// driver
#include "display.h"
#include "buzzer.h"
#include "ports.h"

// logic
#include "lifesaver.h"


void sx_lifesaver(u8 line) {

}

void mx_lifesaver(u8 line) {

}

void display_lifesaver(u8 line, u8 update) {
	if(update == DISPLAY_LINE_UPDATE_FULL) {
		display_symbol(LCD_ICON_HEART, SEG_ON);
	}
	else if(update == DISPLAY_LINE_CLEAR) {
		display_symbol(LCD_ICON_HEART, SEG_OFF);
	}
}
