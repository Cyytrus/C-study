#include <stdio.h>
#include <stdlib.h>

int main()
{
  int alchool = 0, gas = 0, dis = 0, i;

  while (i != 4)
  {
    scanf("%d", &i);
    if (i == 1)
    {
      alchool++;
    }
    else if (i == 2)
    {
      gas++;
    }
    else if (i == 3)
    {
      dis++;
    }
  }
  printf("MUITO OBRIGADO\n");
  printf("Alcool: %d\n", alchool);
  printf("Gasolina: %d\n", gas);
  printf("Diesel: %d\n", dis);
  return 0;
}
