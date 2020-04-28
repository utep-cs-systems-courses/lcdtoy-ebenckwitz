#ifndef pentagon_included
#define pentagon_included

typedef unsigned char u_char;
typedef unsigned int u_int;

void pentagon(u_char centerC, u_char centerR, u_char size);

/*
typedef struct Ab_pentagon_s {
  void (*getBounds)(const struct Ab_pentagon_s *pentagon, const Vec2 *centerPos, Region *bounds);
  int (*check)(const struct Ab_pentagon_s *shape, const Vec2 *centerPos, const Vec2 *pixel);
  const Vec2 halfSize;

} Ab_pentagon;

void ab_pentagonGetBounds(const Ab_pentagon *pentagon, const Vec2 *centerPos, Region *bounds);
int ab_pentagonCheck(const Ab_pentagon *pentagon, const Vec2 *centerPos, const Vec2 *pixel);
*/
#endif
