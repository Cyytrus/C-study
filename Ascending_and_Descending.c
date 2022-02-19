#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i, x, y;

  for(i = 1; i>=0; i++)
  {
    scanf("%d%d", &x, &y);
    if(x > y)
    {
      printf("Decrescente\n");
    }
    else if(x < y)
    {
      printf("Crescente\n");
    }
    else
    {
      break;
    }
  }

  return 0;
}