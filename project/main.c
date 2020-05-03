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
  //welcome();
  clearScreen(COLOR_GREEN);
  //  drawString5x7(20,20, "hello", COLOR_BLACK, COLOR_GREEN);
  // state_advance();
   or_sr(0x18); //CPU off, GIE on
}

void welcome()
{
  red_on = 0;
  green_on = 1;
  led_update();
  clearScreen(COLOR_RED);
}
