#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i;
  float j, c1[10], soma;

  for (i = 1; i <= 3; i++)
  {
    c1[5] = c1[5] + 0;
    c1[5] = 0;
    c1[5] = c1[5] + 0;
    soma = i + c1[5];
    printf("I=%.0f J=%d\n", c1[5], i);
  }

  for (i = 1; i <= 3; i++)
  {
    c1[0] = c1[0] + 0.2;
    c1[0] = 0;
    c1[0] = c1[0] + 0.2;
    soma = i + c1[0];
    printf("I=%.1f J=%.1f\n", c1[0], soma);
  }

  for (i = 1; i <= 3; i++)
  {
    c1[1] = c1[1] + 0.4;
    c1[1] = 0;
    c1[1] = c1[1] + 0.4;
    soma = i + c1[1];
    printf("I=%.1f J=%.1f\n", c1[1], soma);
  }

  for (i = 1; i <= 3; i++)
  {
    c1[2] = c1[2] + 0.6;
    c1[2] = 0;
    c1[2] = c1[2] + 0.6;
    soma = i + c1[2];
    printf("I=%.1f J=%.1f\n", c1[2], soma);
  }

  for (i = 1; i <= 3; i++)
  {
    c1[3] = c1[3] + 0.8;
    c1[3] = 0;
    c1[3] = c1[3] + 0.8;
    soma = i + c1[3];
    printf("I=%.1f J=%.1f\n", c1[3], soma);
  }

  for (i = 1; i <= 3; i++)
  {
    c1[4] = c1[4] + 1.0;
    c1[4] = 0;
    c1[4] = c1[4] + 1.0;
    soma = i + c1[4];
    printf("I=%.0f J=%.0f\n", c1[4], soma);
  }

  for (i = 1; i <= 3; i++)
  {
    c1[5] = c1[5] + 1.2;
    c1[5] = 0;
    c1[5] = c1[5] + 1.2;
    soma = i + c1[5];
    printf("I=%.1f J=%.1f\n", c1[5], soma);
  }

  for (i = 1; i <= 3; i++)
  {
    c1[6] = c1[6] + 1.4;
    c1[6] = 0;
    c1[6] = c1[6] + 1.4;
    soma = i + c1[6];
    printf("I=%.1f J=%.1f\n", c1[6], soma);
  }

  for (i = 1; i <= 3; i++)
  {
    c1[5] = c1[5] + 1.6;
    c1[5] = 0;
    c1[5] = c1[5] + 1.6;
    soma = i + c1[5];
    printf("I=%.1f J=%.1f\n", c1[5], soma);
  }

  for (i = 1; i <= 3; i++)
  {
    c1[5] = c1[5] + 1.8;
    c1[5] = 0;
    c1[5] = c1[5] + 1.8;
    soma = i + c1[5];
    printf("I=%.1f J=%.1f\n", c1[5], soma);
  }

  for (i = 1; i <= 3; i++)
  {
    c1[5] = c1[5] + 2;
    c1[5] = 0;
    c1[5] = c1[5] + 2;
    soma = i + c1[5];
    printf("I=%.0f J=%.0f\n", c1[5], soma);
  }

  return 0;
}