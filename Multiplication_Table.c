#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i, numb;

  scanf("%d", &numb);

  if(numb > 2)
  {
    for(i = 1; i <= 10; i++)
    {
      printf("%d x %d = %d\n", i, numb, i*numb);
    }
  }


  return 0;
}