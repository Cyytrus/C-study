#include <stdio.h>
#include <stdlib.h>

int main()
{

  int numbers, i, greater, pos;

  for(i = 1; i <= 100; i++)
  {
    scanf("%d", &numbers);
    if(greater < numbers)
    {
      greater = numbers;
      pos = i;
    }
  }

  printf("%d\n", greater);
  printf("%d\n", pos);

  return 0;
}