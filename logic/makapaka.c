/* paka */
// driver
#include "display.h"
#include "buzzer.h"
#include "ports.h"

// logic
#include "makapaka.h"


void sx_makapaka(u8 line) {

}

void mx_makapaka(u8 line) {

}

void display_makapaka(u8 line, u8 update) {

	if(update == DISPLAY_LINE_UPDATE_FULL) {
		display_symbol(LCD_ICON_ALARM, SEG_ON);
		display_symbol(LCD_ICON_HEART, SEG_ON);
	}
	else if(update == DISPLAY_LINE_CLEAR) {
		display_symbol(LCD_ICON_ALARM, SEG_OFF);
		display_symbol(LCD_ICON_HEART, SEG_OFF);
	}
}

