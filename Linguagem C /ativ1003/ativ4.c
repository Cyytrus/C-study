#include <stdio.h>

int main()
{
  int A,B,SOMA;

  printf("Digite o primeiro valor a ser somado: ");
  scanf("%d", &A);
  
  printf("Digite o segundo valor a ser somado: ");
  scanf("%d", &B);

  SOMA=A+B;

  printf("SOMA = %d\n", SOMA);

  return 0;
}