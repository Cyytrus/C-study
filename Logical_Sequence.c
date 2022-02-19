#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x, y, count,count2;

  scanf("%d%d", &x, &y);

  if (1 < x < 20 && y < 100000)
  {
    for (count = 1; count <= y; count++)
    {
      count2++;
      if(count2 == x)
      {
        printf("%d\n", count);
        count2 = 0;
      }
      else
      {
        printf("%d ", count);
      }
    }
  }
  return 0;
}

