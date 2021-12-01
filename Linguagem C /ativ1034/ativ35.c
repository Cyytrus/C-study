#include <stdio.h>

int main()
{
  double salary,increase,gained;

  scanf("%lf", &salary);

  if(salary > 0 && salary <= 400)
  {
    increase=salary+(salary*0.15);
    gained=increase-salary;
    printf("Novo salario: %.2lf\n", increase);
    printf("Reajuste ganho: %.2lf\n", gained);
    printf("Em percentual: 15 %%\n");
  }
  else if(salary > 400 && salary <= 800)
  {
    increase=salary+(salary*0.12);
    gained=increase-salary;
    printf("Novo salario: %.2lf\n", increase);
    printf("Reajuste ganho: %.2lf\n", gained);
    printf("Em percentual: 12 %%\n");
  }
  else if(salary > 800 && salary <= 1200)
  {
    increase=salary+(salary*0.10);
    gained=increase-salary;
    printf("Novo salario: %.2lf\n", increase);
    printf("Reajuste ganho: %.2lf\n", gained);
    printf("Em percentual: 10 %%\n");
  }
  else if(salary > 1200 && salary <= 2000)
  {
    increase=salary+(salary*0.07);
    gained=increase-salary;
    printf("Novo salario: %.2lf\n", increase);
    printf("Reajuste ganho: %.2lf\n", gained);
    printf("Em percentual: 7 %%\n");
  }
  else
  {
    increase=salary+(salary*0.04);
    gained=increase-salary;
    printf("Novo salario: %.2lf\n", increase);
    printf("Reajuste ganho: %.2lf\n", gained);
    printf("Em percentual: 4 %%\n");    
  }

  return 0;
}