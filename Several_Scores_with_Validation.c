#include <stdio.h>
#include <stdlib.h>

int main()
{

  float nota, resultado = 0;
  int count = 0, option;

  while (1)
  {
    for (count = 1; count <= 2;)
    {
      scanf("%f", &nota);
      if (nota >= 0 && nota <= 10)
      {
        resultado += nota;
        count ++;
      }
      else
      {
        printf("nota invalida\n");
      }
    }
    printf("media = %.2f\n", resultado / 2);
    resultado = 0;

    printf("novo calculo (1-sim 2-nao)\n");

    while (1)
    {
      scanf("%d", &option);
      if (option == 1)
      {
        break;
      }
      else if (option == 2)
      {
        return 0;
      }
      else
      {
        printf("novo calculo (1-sim 2-nao)\n");
      }
    }
  }
  return 0;
}