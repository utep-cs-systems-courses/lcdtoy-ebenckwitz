#ifndef font8x12_included
#define font8x12_included

typedef unsigned char u_char;
typedef unsigned int u_int;

void drawChar8x12(u_char rcol, u_char rrow, char c, u_int fgColorBGR, u_int bgColorBGR);
void drawString8x12(u_char col, u_char row, char *string, u_int fgColorBGR, u_int bgColorBGR);

#endif
