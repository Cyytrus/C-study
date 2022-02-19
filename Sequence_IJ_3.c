#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i, i1 = 1,i2 = 3,i3= 5,i4 = 7, i5 = 9, j1 =7,j2=9,j3=11, j4=13, j5=15;

  for(i = 1; i<=3; i++)
  {
    printf("I=%d J=%d\n", i1, j1);
    j1 --;
  }

  for(i = 1; i<=3; i++)
  {
    printf("I=%d J=%d\n", i2, j2);
    j2--;
  }

  for(i = 1; i<=3; i++)
  {
    printf("I=%d J=%d\n", i3, j3);
    j3 --;
  }

  for(i = 1; i<=3; i++)
  {
    printf("I=%d J=%d\n", i4, j4);
    j4 --;
  }

  for(i = 1; i<=3; i++)
  {
    printf("I=%d J=%d\n", i5, j5);
    j5 --;
  }

  return 0;
}