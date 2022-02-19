#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b = 0;
  double x, y = 0;
  while (1)
  {
    scanf("%d", &a);
    if (a < 0)
      break;
    else if( a > 0)
    {
      b += a;
      y++;
    }
  }
  x = b / y;
  printf("%.2lf\n", x);
  return 0;
}