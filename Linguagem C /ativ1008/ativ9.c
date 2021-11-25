#include <stdio.h>

int main()
{

  int numb;
  float hours,amount,salary;

  scanf("%d%f%f",&numb,&hours,&amount);

  salary=hours*amount;

  printf("NUMBER = %d\n",numb);
  printf("SALARY = U$ %.2f\n",salary);

  return 0;
}