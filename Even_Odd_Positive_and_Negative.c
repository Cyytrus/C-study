#include <stdio.h>
#include <stdlib.h>

int main()
{
  int positive = 0;
  int negative = 0;
  int odd = 0;
  int even = 0;
  int i = 5;
  int numbers;

  while(i)
  {
    scanf("%d", &numbers);

    if (numbers > 0)
    {
      positive++;
    }
    else if (numbers < 0)
    {
      negative++;
    }
    if (numbers % 2 == 0)
    {
      even++;
    }
    if (numbers % 2 != 0)
    {
      odd++;
    }

    i--;
  }

  printf("%d valor(es) par(es)\n", even);
  printf("%d valor(es) impar(es)\n", odd);
  printf("%d valor(es) positivo(s)\n", positive);
  printf("%d valor(es) negativo(s)\n", negative);

  return 0;
}
