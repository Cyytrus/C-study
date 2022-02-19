#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  double x[100], y;
  scanf("%lf", &y);

  x[i] = y;

  for (i = 0; i < 100; i++)
  {
    printf("N[%d] = %.4lf\n", i, x[i]);

    y /= 2;

    x[i + 1] = y;
  }

  return 0;
}