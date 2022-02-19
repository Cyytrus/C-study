#include <stdio.h>
#include <stdlib.h>

int main()
{

  int n, n2,i;

  scanf("%d", &n);

  if(n < 10000)
  {
    for(i =1; i<= n; i++)
    {
      scanf("%d", &n2);
      if(n2 == 0)
      {
        printf("NULL\n");
      }
      else if(n2 >= 0 && n2 % 2 == 0)
      {
        printf("EVEN POSITIVE\n");
      }
      else if(n2 <= 0 && n2 % 2 == 0)
      {
        printf("EVEN NEGATIVE\n");
      }
      else if(n2 >= 0 && n2 % 2 == 1)
      {
        printf("ODD POSITIVE\n");
      }
      else if(n2 <= 0 && n2 % 2 == -1)
      {
        printf("ODD NEGATIVE\n");
      }
    }
  }

  return 0;
}