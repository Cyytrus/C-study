#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  double x1,x2,y1,y2,distance,d1,d2;

  scanf("%lf%lf",&x1,&y1);
  scanf("%lf%lf",&x2,&y2);

  d1=x2-x1;
  d2=y2-y1;

  distance=sqrt(pow(d1, 2)+pow(d2, 2));

  printf("%.4lf\n", distance);

  return 0;
}