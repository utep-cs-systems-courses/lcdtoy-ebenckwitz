#include <msp430.h>
#include "led.h"
#include "stateMachines.h"
#include "switches.h"
#include "pentagon.h"
#include "lcdutils.h"
#include "lcddraw.h"
#include "8x12font.h"

char tempo = 0;

void state_advance()
{
  switch(current_state) {
  case 1:
    state_one();
    break;
 
  case 2:
    state_two();
    break;

  case 3:
    state_three();
    break;

  case 4:
    state_four();
    break;
  }
}

void state_one()
{
  tempo = 250;
  clearScreen(COLOR_GREEN);
  drawString8x12(20, 20, "hello", COLOR_BLACK, COLOR_GREEN);
  pentagon(50, 80, 30);
}

void state_two()
{
  tempo = 50;
  clearScreen(COLOR_GREEN);
  drawString8x12(20, 20, "hello", COLOR_BLACK, COLOR_GREEN);
}

void state_three()
{
  tempo = 200;
  clearScreen(COLOR_GREEN);
}

void state_four()
{
  tempo = 5000;
  clearScreen(COLOR_GREEN);
  pentagon(40, 80, 60);
}
