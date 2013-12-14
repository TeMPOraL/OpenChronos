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
	u8* ma = "MA";
	u8* ka = "HA";
	u8* pa = "PA";

	if(update == DISPLAY_LINE_UPDATE_FULL) {
		display_symbol(LCD_ICON_ALARM, SEG_ON);
		display_symbol(LCD_ICON_HEART, SEG_ON);
		display_chars(switch_seg(line, LCD_SEG_L1_3_2, LCD_SEG_L2_3_2), ma, SEG_ON);
		display_chars(switch_seg(line, LCD_SEG_L1_1_0, LCD_SEG_L2_1_0), ka, SEG_ON);
		/* display_chars(switch_seg(line, LCD_SEG_L1_5_2, LCD_SEG_L2_5_2), pa, SEG_ON); */
		/* display_chars(switch_seg(line, LCD_SEG_L1_1_0, LCD_SEG_L2_1_0), ka, SEG_ON); */
	}
	else if(update == DISPLAY_LINE_CLEAR) {
		display_symbol(LCD_ICON_ALARM, SEG_OFF);
		display_symbol(LCD_ICON_HEART, SEG_OFF);
	}
}

