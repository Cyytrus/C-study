#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i, number, coelho = 0, sapo = 0, rato = 0, cont, soma = 0;
  float ptg1, ptg2, ptg3;
  char letra;

  scanf("%d", &cont);

  for(i = 1; i<= cont; i++)
  {
    scanf("%d %c", &number, &letra);
    soma += number;
    if(letra == 'C')
    {
      coelho += number;
    }
    else if(letra == 'S')
    {
      sapo += number;
    }
    else if(letra == 'R')
    {
      rato += number;
    }
  }

  printf("Total: %d cobaias\n", soma);
  printf("Total de coelhos: %d\n", coelho);
  printf("Total de ratos: %d\n", rato);
  printf("Total de sapos: %d\n", sapo);
  printf("Percentual de coelhos: %.2f %%\n", (coelho * 100.0) / soma);
  printf("Percentual de ratos: %.2f %%\n", (rato * 100.0) / soma);
  printf("Percentual de sapos: %.2f %%\n", (sapo * 100.0) / soma);

  return 0;
}