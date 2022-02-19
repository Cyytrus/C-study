#include <stdio.h>
#include <stdlib.h>

int main()
{

  int x[10], i, y;

  scanf("%d", &y);

  for (i = 0; i <= 9; i++)
  {
    x[i] = y;

    printf("N[%d] = %d\n", i, y);

    y *= 2;
  }
  return 0;
}