#include <msp430.h>
#include "led.h"
#include "stateMachines.h"
#include "switches.h"
#include "pentagon.h"
#include "lcdutils.h"
#include "lcddraw.h"
#include "8x12font.h"

/*These are the menu options*/

void state_advance()
{
  switch(current_state) {
  case 1:
    state_one();
    break;
 
  case 2:
    state_two();
    break;
  }
}

void state_one()
{
  clearScreen(COLOR_GREEN);
  drawString8x12(20, 20, "hello", COLOR_BLACK, COLOR_GREEN);
  pentagon(50, 80, 30);
  red_on = 1;
  green_on = 1;
  led_update();
}

void state_two()
{
  clearScreen(COLOR_GREEN);
  drawString8x12(20, 20, "hello", COLOR_BLACK, COLOR_GREEN);
  red_on = 0;
  green_on = 1;
  led_update();
}
