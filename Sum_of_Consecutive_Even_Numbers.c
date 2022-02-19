#include <stdio.h>
#include <stdlib.h>

int main()
{

  int x, i, y = 0;

  while (1)
  {

    scanf("%d", &x);

    y = 0;

    if (x == 0)
    {
      break;
    }

    else if (x % 2 == 0)
    {
      for (i = x; i <= x + 8; i += 2)
      {
        y += i;
      }
    }

    else
    {
      for (i = x + 1; i <= x + 9; i += 2)
      {
        y += i;
      }
    }

    printf("%d\n", y);
  }
  return 0;
}