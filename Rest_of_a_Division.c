#include <stdio.h>
#include <stdlib.h>

int main()
{
  int numbs[2], i;

  scanf("%d%d", &numbs[0], &numbs[1]);

  if(numbs[0] > numbs[1])
  {
    for(i = numbs[1] + 1; i < numbs[0]; i++)
    {
      if( i % 5 == 2 || i % 5 == 3)
      {
        printf("%d\n", i);
      }
    }
  }
  else if(numbs[0] < numbs[1])
  {
    for(i = numbs[0] + 1; i < numbs[1]; i++)
    {
      if( i % 5 == 2 || i % 5 == 3)
      {
        printf("%d\n", i);
      }
    }
  }

  return 0;
}