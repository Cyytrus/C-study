#include <stdio.h>
#include <stdlib.h>

int main()
{

  int numbers, quant, numbers_out = 0, numbers_in = 0;

  scanf("%d", &quant);

  if (quant < 10000)
  {
    while(quant)
    {
      scanf("%d", &numbers);

      if (numbers >= 10 && numbers <= 20 && numbers > -10^7 && numbers < 10^7)
      {
        numbers_in++;
      }
      if(numbers < 10 || numbers > 20 && numbers > -10^7 && numbers < 10^7)
      {
        numbers_out++;
      }
      quant --;
    }
    
  }
  printf("%d in\n", numbers_in);

  printf("%d out\n", numbers_out);

  return 0;
}

