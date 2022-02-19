#include <stdlib.h>
#include <stdio.h>

int main()
{

  int x, y, z, j, i, a;

  scanf("%d", &x);

  for (j = 1; j <= x; j++)
  {

    scanf("%d", &y);

    z = y / 2;
    a = 0;

    for (i = 1; i <= z; i++)
    {
      if (y % i == 0)
      {
        a += i;
      }
    }

    if (a == y)
    {
      printf("%d eh perfeito\n", y);
    }

    else if (a != y)
    {
      printf("%d nao eh perfeito\n", y);
    }
  }

  return 0;
}