/** \file lcdx.c
 *  \brief A simple demo that draws a string and square
 */
#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"

/** Initializes everything, clears the screen, draws "hello" and a square */
int
main()
{
  configureClocks();
  lcd_init();
  
  clearScreen(COLOR_BLUE);

  my_shape(50, 85, 30);

}

void my_shape(u_char centerC, u_char centerR, u_char size)
{
  u_char TR = centerR - (size / 2);
  u_char BR = centerR + (size / 2);
  u_char SC = centerC - 15;
  u_char edge = SC;
  
  for(int c = 0; c < size; c++, SC++) {
    drawPixel(SC, TR, COLOR_WHITE);
    drawPixel(SC, BR, COLOR_GREEN);
    for(u_char k = TR; k < BR; k++)
      drawPixel(edge, k, COLOR_BLACK);
  }
  for(int c = 0; c < size / 2; c++) {
    drawPixel(SC, TR++, COLOR_RED);
    drawPixel(SC++, BR--, COLOR_BLACK);
  }
}
