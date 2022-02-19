#include <stdio.h>
#include <stdlib.h>

int main()
{
  double i, x = 1, y, s = 0;
  for (i = 1; i <= 39; i += 2)
  {
    y = i / x;
    s += y;
    x *= 2;
  }
  printf("%.2lf\n", s);
  return 0;
}