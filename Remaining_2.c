#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i, numb;

  scanf("%d", &numb);

  for(i = 1; i <= 10000; i++)
  {
    if(i % numb == 2)
    {
      printf("%d\n", i);
    }
  }

  return 0;
}