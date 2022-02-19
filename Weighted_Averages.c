#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i, il;
  float numb1, numb2, numb3;

  scanf("%d", &il);

  for(i = 1; i <= il; i++)
  {
    scanf("%f%f%f", &numb1, &numb2, &numb3);
    printf("%.1f\n", ((numb1 * 2) + (numb2 * 3) + (numb3 * 5))/10);
  }

  return 0;
}