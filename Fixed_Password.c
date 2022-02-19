#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i, x;

  for(i = 1; i>=0; i++)
  {
    scanf("%d", &x);
    if(x != 2002)
    {
      printf("Senha Invalida\n");
    }
    else
    {
      printf("Acesso Permitido\n");
      break;
    }
  }
  return 0;
}