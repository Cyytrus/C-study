#include <stdio.h>

int main()
{
  double A,R;

    printf("Para calcular o valor da área, insira o raio: ");
    scanf("%lf", &R);

    A=3.14159*(R*R);

    printf("O valor da área é A= %.4lf\n", A);
  return 0;
}