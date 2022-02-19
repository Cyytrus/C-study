#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x, y, z, i, j, a;

  scanf("%d", &x);

  for (i = 1; i <= x; i++)
  {
    scanf("%d %d", &y, &z);
    if (y % 2 == 1)
    {
      a = 0;

      for (j = 1; j <= z; j++)
      {
        a += y;
        y += 2;
      }

      printf("%d\n", a);
    }
    else
    {
      y++;

      a = 0;

      for (j = 1; j <= z; j++)
      {
        a += y;
        y += 2;
      }

      printf("%d\n", a);
        }
  }
  return 0;
}