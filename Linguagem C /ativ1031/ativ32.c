#include <stdio.h>

int main()
{

  double a,b,c,helper;

  scanf("%lf%lf%lf",&a,&b,&c);

  if (a > b && a > c && c > b) 
  {
    helper = b;
    b = c;
    c = helper;
  }
    
  if (b > a && b > c) 
  {
    helper = a;
    a = b;
    b = helper;
    
    if (c > b) 
    {
      helper = c;
      c = b;
      b = helper;
    }
  }
  if (c > a && c > b) 
  {
    helper = a;
    a = c;
    c = helper;
      if (c > b) 
      {
        helper = c;
        c = b;
        b = helper;
      }
  }

  if(a >= b+c)
  {
    printf("NAO FORMA TRIANGULO\n");
  }
  else if((a*a) == (b*b) + (c*c))
  {
    printf("TRIANGULO RETANGULO\n");
  }
  else if((a*a) > (b*b) + (c*c))
  {
    printf("TRIANGULO OBTUSANGULO\n");
  }
  else
  {
    printf("TRIANGULO ACUTANGULO\n");
  }
  if(a == b && b == c)
  {
    printf("TRIANGULO EQUILATERO\n");
  }
  else if(a == b || c == b || c == a)
  {
    printf("TRIANGULO ISOSCELES\n");
  }

  return 0;
}