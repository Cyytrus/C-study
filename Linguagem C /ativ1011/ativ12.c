#include <stdio.h>

int main()
{

  double volume, radius;

  scanf("%lf", &radius);

  volume=(4/3.0)*3.14159*radius*radius*radius;

  printf("VOLUME = %.3lf\n", volume);
  
  return 0;
}