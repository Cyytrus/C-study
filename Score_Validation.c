#include <stdio.h>
#include <stdlib.h>

int main()
{

  float nota, resultado = 0;
  int i= 1;

  while (i != 3)
  {
    scanf("%f", &nota);

    if ( i == 3)
    {
      break;
    }
    else if (nota < 0 || nota > 10)
    {

      printf("nota invalida\n");
    }
    else
    {
      resultado += nota;
      i++;
    }
  }
  printf("media = %.2f\n", resultado/2);
  return 0;
}