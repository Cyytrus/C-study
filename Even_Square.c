#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i,number, quant;

  scanf("%d", &number);

  for(i = 1; i <= number; i++)
  {
    if(i % 2 == 0)
    {
      quant = i*i;
      printf("%d^2 = %d\n", i, quant);
    }
  }

  return 0;
}