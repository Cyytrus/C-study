#include <stdio.h>
#include <stdlib.h>

int main()
{

  long long int fb, y = 0, z = 1, nxt, c, i, x;

  scanf("%lld", &x);

  for (i = 1; i <= x; i++, y = 0, z = 1)
  {

    scanf("%lld", &fb);

    fb = fb + 1;

    for (c = 0; c < fb; c++)
    {

      if (c <= 1)
      {
        nxt = c;
      }

      else
      {
        nxt = y + z;
        y = z;
        z = nxt;
      }
    }

    printf("Fib(%lld) = %lld\n", fb - 1, nxt);
  }

  return 0;
}