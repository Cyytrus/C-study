#include <stdio.h>
#include <stdlib.h>

int main()
{
  double number, media, count2, somanumber = 0;
  int count = 0;
  int max = 6;

  while(max)
  {
    scanf("%lf", &number);
    if (number > 0)
    {
      count ++;
      somanumber += number;
      count2 += 1;
    } 
    max--;
  }

  printf("%d valores positivos\n", count);
  printf("%.1lf\n", somanumber/count2);

  return 0;
}
