#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{

  double a,b,c,delta,r1,r2;

  scanf("%lf%lf%lf",&a,&b,&c);

  delta=sqrt((pow(b, 2))-(4*a*c));

  r1=(-b+delta)/(2*a);

  r2=(-b-delta)/(2*a);

  if (a != 0 && delta>0)
  {
    printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);
  }
  else
  {
    printf("Impossivel calcular\n");
  }

  return 0;
}