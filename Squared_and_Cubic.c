#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, count;

  scanf("%d", &i);

  for (count = 1; count <= i; count++)
  {
    printf("%d ", count);
    printf("%d ", count*count);
    printf("%d\n", count*count*count);
  }
}
