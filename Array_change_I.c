#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  int x[20], aux, i, j;
  
  for (i = 0; i < 20; i++)
  {
    scanf("%d", &x[i]);
  }

  for (i = 0, j = 19; i < 10; i++, j--)
  {
    aux = x[i];
    x[i] = x[j];
    x[j] = aux;
  }
  
  for (i = 0; i < 20; i++)
  {
    printf("N[%d] = %d\n", i, x[i]);
  }

  return 0;
}