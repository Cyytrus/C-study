#include <stdio.h>
#include <stdlib.h>

int main()
{

  int x[1000], z, i, y;

  scanf("%d", &z);

  for (i = 0, y = 0; i < 1000; i++)
  {

    printf("N[%d] = %d\n", i, y);

    y++;

    if (y == z)
    {
      y = 0;
    }
  }
  return 0;
}