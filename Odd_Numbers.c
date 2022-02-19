#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i = 0,quant;

  scanf("%d", &quant);

  for(i = 1; i <= quant; i = i+2)
  {
    if(quant > 1 && quant <= 1000)
    {
      printf("%d\n", i);
    }
  }

  return 0;
}
