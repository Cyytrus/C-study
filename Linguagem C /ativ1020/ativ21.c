#include <stdio.h>
#include <stdlib.h>

int main()
{

  int n,days,months,year;

  scanf("%d",&n);
  
  days=(n%365)%30;
  months=(n%365)/30;
  year=n/365;

  printf("%d ano(s)\n",year);
  printf("%d mes(es)\n",months);
  printf("%d dia(s)\n",days);

  return 0;
}