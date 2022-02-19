#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, b, c = 0, x, y;

  scanf("%d", &x);

  do
  {
    scanf("%d", &y);
  }

  while (x >= y);

  for (i = x, b = 0; b < y; i++)
  {
    b += i;
    c++;
  }
  printf("%d\n", c);

  return 0;
}