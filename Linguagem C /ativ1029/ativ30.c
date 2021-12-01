#include <stdio.h>

int main()
{

  double A,B,C,triangle,trapezium;

  scanf("%lf%lf%lf",&A,&B,&C);

  if (A < C+B && B < C+A && C < A+B)
  {
    triangle=A+B+C;
    printf("Perimetro = %.1lf\n", triangle);
  }
  else
  {
    trapezium=C*(A+B)/2;
    printf("Area = %.1lf\n", trapezium);  
  }
  return 0;
}