#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i, j, aux, numb, x;

  scanf("%d", &numb);

  for (i = 0; i < numb; i++)
  {
    scanf("%d", &x);
    aux = 0;

    for (j = 1; j <= x; j++)
    {
      if (x % j == 0)
      {
        aux++;
      }
    }

    if (aux == 2)
    {
      printf("%d eh primo\n", x);
    }
    else
    {
      printf("%d nao eh primo\n", x);
    }
  }

  return 0;
}
