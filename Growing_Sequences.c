#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x, count;

  do
  {
    scanf("%d", &x);
    for (count = 1; count <= x; count++)
    {
      printf("%d", count);
      if (count != x)
      {
        printf(" ");
      }
      else
      {
        printf("\n");
      }
    }
  } while (x != 0);
  return 0;
}