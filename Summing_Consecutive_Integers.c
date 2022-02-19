#include <stdio.h>
#include <stdlib.h>

int main()
{
  int first, second, i, result = 0;
  
  scanf("%d %d", &first, &second);
  
  while (second <= 0)
    scanf("%d", &second);
  for (i = 1; i <= second; i++)
  {
    result += first;
    first++;
  }
  
  printf("%d\n", result);
  
  return 0;
}