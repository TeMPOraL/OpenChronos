/* paka */
// driver
#include "display.h"
#include "buzzer.h"
#include "ports.h"

// logic
#include "makapaka.h"

u8* maka = "MAKA";
u8* paka = "PAKA";
u8* toShow = NULL;


void sx_makapaka(u8 line) {
	clear_display_all();
	toShow = (toShow == maka) ? paka : maka;
}

void mx_makapaka(u8 line) {

}

void display_makapaka(u8 line, u8 update) {
//	clear_display_all();

	if(update == DISPLAY_LINE_UPDATE_FULL) {
		display_symbol(LCD_ICON_ALARM, SEG_ON);
		display_symbol(LCD_ICON_HEART, SEG_ON);
		display_chars(LCD_SEG_L1_3_0, toShow, SEG_ON);
		/* display_chars(switch_seg(line, LCD_SEG_L1_5_2, LCD_SEG_L2_5_2), pa, SEG_ON); */
		/* display_chars(switch_seg(line, LCD_SEG_L1_1_0, LCD_SEG_L2_1_0), ka, SEG_ON); */
	}
	else if(update == DISPLAY_LINE_CLEAR) {
		display_symbol(LCD_ICON_ALARM, SEG_OFF);
		display_symbol(LCD_ICON_HEART, SEG_OFF);
	}
}

