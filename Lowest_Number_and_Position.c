#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, e, y, z, lowest;

  scanf("%d", &y);

  int x[y];

  for (i = 0; i < y; i++)
  {
    scanf("%d", &x[i]);
  }

  lowest = x[0];

  for (i = 1; i < y; i++)
  {
    if (lowest > x[i])
    {
      lowest = x[i];
      z = i;
    }
  }

  printf("Menor valor: %d\n", lowest);

  printf("Posicao: %d\n", z);

  return 0;
}