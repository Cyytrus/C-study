#include <stdio.h>
#include <stdlib.h>

int main()
{

  int t,s;
  float fuel;

  scanf("%d%d",&t,&s);

  fuel=(s*t)/12.0;

  printf("%.3f\n", fuel);

  return 0;
}