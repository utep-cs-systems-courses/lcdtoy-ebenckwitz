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

  // draw_triangle(10, 50);
  // draw_triangle2(10,30,50);
  my_shape(40, 80);

}
 
void draw_triangle(int size, int place)
{
  //triangle
  u_char row = size;
  u_char lol = 0;
  for(u_char col = 0; col < size; col++, row++){
      drawPixel(col + place, col + place, COLOR_WHITE);
      drawPixel(-col + place, col + place, COLOR_BLACK);
      drawPixel(lol + size, place + size, COLOR_RED);
      drawPixel(row + size, place + size, COLOR_ORANGE);
      lol++;
  }
}
void draw_triangle2(u_char fc, u_char fr, u_char size)
{
  for(u_char c = 0; c < size; c++){
    u_char topRow = 0;
    u_char botRow = size - c;
    for(u_char r = topRow; r < botRow; r++)
      drawPixel(fc, fr, COLOR_RED);
  }
}
void my_shape(u_char TR, u_char BR)
{
  u_char size = BR - TR;
  u_char topRow = TR;
  u_char botRow = BR;
  for(int c = 0; c < size; c++, TR++, BR++) {
    drawPixel(TR, topRow, COLOR_WHITE);
    drawPixel(TR, botRow, COLOR_GREEN);
    for(u_char k = topRow; k < botRow; k++)
      drawPixel(topRow, k, COLOR_BLACK);
  }
  for(int c = 0; c < size / 2; c++) {
    drawPixel(TR, topRow++, COLOR_RED);
    drawPixel(TR++, botRow--, COLOR_BLACK);
  }
}
