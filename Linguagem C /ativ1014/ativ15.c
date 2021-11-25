#include <stdio.h>
#include <stdlib.h>

int main()
{

  int X;
  float Y, TOTAL;

  scanf("%d%f",&X,&Y);
  
  TOTAL=X/Y;

  printf("%.3f km/l\n", TOTAL);

  return 0;
}