#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x, i, z = 1;

  scanf("%d", &x);

  for (i = x; i >= 1; i--)

    z *= i;

  printf("%d\n", z);

  return 0;
}