#include <stdio.h>

int main()
{

  int start,end,tempo;

  scanf("%d%d",&start, &end);

  if(start >= end)
  {
    tempo = (24-start) + end;
  }
  else
  {
    tempo = end-start;
  }

  printf("O JOGO DUROU %d HORA(S)\n", tempo);

  return 0;
}