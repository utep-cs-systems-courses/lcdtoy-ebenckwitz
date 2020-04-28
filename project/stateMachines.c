#include <msp430.h>
#include "stateMachines.h"
#include "switches.h"
#include "pentagon.h"
#include "lcdutils.h"
#include "lcddraw.h"

/*These are the menu options*/
static enum{START, MENU_OPTION0} current_state = START;

void state_advance()
{
  switch(current_state) {
  case START:
    clearScreen(COLOR_BLUE);
    if(switch1_state_down){
      current_state = MENU_OPTION0;
    }
    break;

  case MENU_OPTION0:
    clearScreen(COLOR_GREEN);
    pentagon(40, 70, 30);
  }
}
