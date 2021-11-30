#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int X, Y;
  float valor;

  scanf("%d%d", &X, &Y);

  if (X == 1)
  {
    valor = Y*4.00;
    printf("Total: R$ %.2lf\n", valor);
  }

  if (X == 2)
  {
    valor = Y*4.50;
    printf("Total: R$ %.2lf\n", valor);
  }

  if (X == 3)
  {
    valor = Y*5.00;
    printf("Total: R$ %.2lf\n", valor);
  }

  if (X == 4)
  {
    valor = Y*2.00;
    printf("Total: R$ %.2lf\n", valor);
  }

  if (X == 5)
  {
    valor = Y*1.50;
    printf("Total: R$ %.2lf\n", valor);
  }

  return 0;
}