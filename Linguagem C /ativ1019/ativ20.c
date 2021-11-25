#include <stdio.h>
#include <stdlib.h>

int main()
{

  int time,hour,conversion,minute,second;

  conversion=3600;

  scanf("%d",&time);

  hour=(time/conversion);

  minute=(time-(conversion*hour))/60;

  second= (time-(conversion*hour)-(minute*60));

  printf("%d:%d:%d\n",hour,minute,second);

  return 0;
}