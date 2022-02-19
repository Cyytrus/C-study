#include <stdio.h>
#include <stdlib.h>

int main()
{
  double number;
  int count = 0; // define o inicio da contagem
  int max = 6; // define o máximo de loops

  while(max) // loop sendo feito com o limite de repetições
  {
    scanf("%lf", &number); // entradas de dados
    if (number > 0) // se o numero for maior q zero, o contador adiciona 1 a cada contagem de numero positivo
    {
      count ++;
    } 
    max--; // e a cada contagem de numero positivo, o contador max decai 1, limitando os loops
  }

  printf("%d valores positivos\n", count);

  return 0;
}
