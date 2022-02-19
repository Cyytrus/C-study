#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i, x, y, i_win = 0, g_win = 0, all_games = 0, draw = 0, option;

  while (1)
  {
    scanf("%d%d", &x, &y);
    if (x > y)
    {
      i_win++;
    }
    else if (x < y)
    {
      g_win++;
    }
    else
    {
      draw++;
    }
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &option);
    if (option == 1)
    {
      continue;
    }
    else
    {
      break;
    }
  }

  printf("%d grenais\n", (i_win + g_win + draw));
  printf("Inter:%d\n", i_win);
  printf("Gremio:%d\n", g_win);
  printf("Empates:%d\n", draw);

  if (i_win > g_win)
  {
    printf("Inter venceu mais\n");
  }
  else if(g_win > i_win)
  {
    printf("Gremio venceu mais\n");
  }

  return 0;
}