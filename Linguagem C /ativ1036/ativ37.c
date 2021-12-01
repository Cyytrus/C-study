#include <stdio.h>

int main()
{
  double salary,taxes,taxes2,taxes3,taxes4,over;
  scanf("%lf", &salary);

  if (salary > 0 && salary <= 2000)
  {
    printf("Isento\n");
  }
  else if (salary > 2000 && salary <= 3000)
  {
    over=salary-2000;
    taxes=over*0.08;
    printf("R$ %.2lf\n", taxes);
  }
  else if (salary > 3000 && salary <= 4500)
  {
    over=salary-3000;
    taxes=1000*0.08;
    taxes2=over*0.18;
    taxes3=taxes+taxes2;
    printf("R$ %.2lf\n", taxes3);
  }
  else
  {
    over=salary-4500;
    taxes=1000*0.08;
    taxes2=1500*0.18;
    taxes3=over*0.28;
    taxes4=taxes+taxes2+taxes3;

    printf("R$ %.2lf\n", taxes4);
  }

  return 0;
}

