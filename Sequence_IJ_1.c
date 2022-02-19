#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i, n1 = -2, n2 = 65;

  for(i = 0; i<=12; i++)
  {
    n1 +=3;
    n2 -= 5;
    printf("I=%d J=%d\n", n1, n2);
  }

  return 0;
}