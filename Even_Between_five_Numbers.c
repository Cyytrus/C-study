#include <stdio.h>
#include <stdlib.h>

int main()
{
  int values;
  int count = 0;
  int max = 5;

  while(max)
  {
    scanf("%d", &values);
    if (values % 2 == 0)
    {
      count ++;
    } 
    max--;
  }

  printf("%d valores pares\n", count);

  return 0;
}
