#include <stdio.h>
#include <stdlib.h>

int main()
{

  int count, i, i2, x, y, count1 = 0, count2 = 0;
  scanf("%d ", &count);

  for (i = 0; i < count; i++)
  {
    count1 = 0;
    scanf("%d %d", &x, &y);

    if (x > y)
    {
      x += y;
      y = x-y;
      x-=y;
    }
      for (i2 = x + 1; i2 < y; i2++)
      {
        if (i2 % 2 == 1)
        {
          count1 += i2;
        }
      }
      printf("%i\n", count1);
  }
}
