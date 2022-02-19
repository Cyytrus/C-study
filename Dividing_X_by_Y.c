#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i, x, y, read;
  double result;

  scanf("%d", &read);

  for (i = 1; i <= read; i++)
  {
    scanf("%d%d", &x, &y);
    if(x == 0 && y > 0)
    {
      result = 0;
      printf("%.1lf\n", result);
    }
    else if(y == 0)
    {
      printf("divisao impossivel\n");
    }
    else
    {
      result = (float)x/y;
      printf("%.1lf\n", result);
    }


  }
  return 0;
}