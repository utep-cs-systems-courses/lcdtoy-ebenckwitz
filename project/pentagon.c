//#include <msp340.h>
#include "pentagon.h"
#include "lcddraw.h"
#include "lcdutils.h"

void pentagon(u_char centerC, u_char centerR, u_char size)
{
  u_char TR = centerR - (size / 2);
  u_char BR = centerR + (size / 2);
  u_char SC = centerC - 15;
  u_char edge = SC;

  for(int c = 0; c < size; c++, SC++) {
    drawPixel(SC, TR, COLOR_WHITE);
    drawPixel(SC, BR, COLOR_GREEN);
    for(u_char k = TR; k < BR; k++){
      drawPixel(edge, k, COLOR_BLACK);
      drawPixel(SC, k, COLOR_RED);
    }
  }
  for(int c = 0; c < size / 2; c++) {
    drawPixel(SC, TR++, COLOR_RED);
    drawPixel(SC++, BR--, COLOR_BLACK);
    u_char temp = BR;
    for(u_char s = TR; s < centerR + 1; s++){
      u_char k = SC - 1;
      drawPixel(k, s, COLOR_RED);
      drawPixel(k, temp--, COLOR_RED);
    }
  }
}
