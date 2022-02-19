#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i = 0, quant, total, quant1, quant2;

  scanf("%d", &quant);

  i = 6;

  if(quant%2 == 1)
  {
    quant = quant-2;
  }

  while(i)
  {
    if (quant % 2 == 0 && quant > 0)
    {
      quant1 = quant++;
      quant = quant1+=1;
      printf("%d\n", quant);
    }
    else
    {
      quant += 2;
      printf("%d\n", quant);
    }    
    i--;
  }

  return 0;
}
