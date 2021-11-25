#include <stdio.h>

int main()
{

  char name;
  double A,B,total;

  scanf("%s%lf%lf",&name,&A,&B);

  total=A+B*0.15;

  printf("TOTAL = R$ %.2lf\n", total);

  return 0;
}