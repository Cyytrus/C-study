
#include <stdio.h>
#include <stdlib.h>

int main()
{

  int x, y, soma = 0;

  scanf("%d%d", &x, &y);

  if(x == y)
  {
    printf("%d", soma);
  }
  else
  {
    if(x < y)
    {
      soma = x;
      x = y;
      y = soma;
    }
    soma = 0;
    if(y%2 != 0)
    {
      y++;
    }
    for(y; y < x; y++)
    {
      if(y%2!=0)
      {
        soma = soma + y;
      }
    }
    printf("%d\n", soma);
  }
  return 0;
}