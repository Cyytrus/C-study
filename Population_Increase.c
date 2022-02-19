#include <stdlib.h>
#include <stdio.h>

int main()
{

  int a, b, i, x, y;
  double x2, y2;

  scanf("%d", &a);

  for (i = 1; i <= a; i++)
  {

    b = 0;

    scanf("%d %d %lf %lf", &x, &y, &x2, &y2);

    while (x <= y)
    {

      x *= (x2 / 100.0) + 1.0;

      y *= (y2 / 100.0) + 1.0;

      b++;

      if (b > 100)
      {
        printf("Mais de 1 seculo.\n");

        break;
      }
    }
    if (b <= 100)
    {
      printf("%d anos.\n", b);
    }
  }

  return 0;
}