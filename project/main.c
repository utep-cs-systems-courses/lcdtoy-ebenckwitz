#include <msp430.h>
#include "switches.h"
#include "led.h"
#include "lcdutils.h"
#include "lcddraw.h"
#include "stateMachines.h"
#include "libTimer.h"

int main(void)
{
  configureClocks();
  enableWDTInterrupts();
  switch_init();
  lcd_init();
  led_init();
  clearScreen(COLOR_GREEN);
  drawString8x12(20,20, "hello", COLOR_BLACK, COLOR_GREEN);
   or_sr(0x18); //CPU off, GIE on
}
