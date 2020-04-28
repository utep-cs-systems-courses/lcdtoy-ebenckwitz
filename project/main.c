#include <msp430.h>
#include "switches.h"
#include "lcdutils.h"
#include "stateMachines.h"
#include "libTimer.h"

int main(void)
{
  configureClocks();
  enableWDTInterrupts();
  switch_init();
  lcd_init();
  //state_advance();
}
