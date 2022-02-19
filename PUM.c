#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, count;

  scanf("%d", &i);

  for (count = 1; count <= i * 4; count += 4)
  {
    printf("%d ", count);
    printf("%d ", count + 1);
    printf("%d ", count + 2);
    printf("PUM\n");
  }
}
