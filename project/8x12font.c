#include "lcdutils.h"
#include "lcddraw.h"
#include "8x12font.h"

void drawChar8x12(u_char rcol, u_char rrow, char c, u_int fgColorBGR, u_int bgColorBGR)
{
  u_char oc = c - 0x20;
   u_char bit = 128;
   u_char col = 0;
   u_char row = 0;
  //9,12
  lcd_setArea(rcol, rrow, rcol + 7, rrow + 11); /* relative to requested col/row */
  while (col < 10) {
     while (bit > 0) {
       u_int colorBGR = (font_8x12[oc][col] & bit) ? fgColorBGR : bgColorBGR;
       lcd_writeColor(colorBGR);
       bit >>= 1;
     }
     col++;
     bit = 128;
  } 
}

void drawString8x12(u_char col, u_char row, char *string, u_int fgColorBGR, u_int bgColorBGR)
{
  u_char cols = col;
  while (*string) {
    drawChar8x12(cols, row, *string++, fgColorBGR, bgColorBGR);
    cols += 10;
  }
}
