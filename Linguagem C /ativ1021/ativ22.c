#include <stdio.h>
#include <stdlib.h>

int main() 
{

  double valor,a,b;

  int nota,c,d,e,f,g,h,i,j,k,l,m,n;
  int cem,cinq,vint,dez,cinco,dois;
  int m_um,m_cinq,m_vintcinc,m_dez,m_cinc,m_umcent;

  scanf("%lf", &valor);

  nota=valor;

  cem=nota/100;
  c=nota%100;

  cinq=c/50;
  d=c%50;

  vint=d/20;
  e=d%20;

  dez=e/10;
  f=e%10;

  cinco=f/5;
  g=f%5;

  dois=g/2;
  m_um=g%2;


  a=valor*100;
  h=(int)a;

  i=h%100;

  m_cinq=i/50;
  j=i%50;

  m_vintcinc=j/25;
  k=j%25;

  m_dez=k/10;
  l=k%10;

  m_cinc=l/5;
  m_umcent=l%5;

  printf ("NOTAS:\n");

  printf ("%d nota(s) de R$ 100.00\n",cem);

  printf ("%d nota(s) de R$ 50.00\n",cinq);

  printf ("%d nota(s) de R$ 20.00\n",vint);

  printf ("%d nota(s) de R$ 10.00\n",dez);

  printf ("%d nota(s) de R$ 5.00\n",cinco);

  printf ("%d nota(s) de R$ 2.00\n",dois);

  printf ("MOEDAS:\n");

  printf ("%d moeda(s) de R$ 1.00\n",m_um);

  printf ("%d moeda(s) de R$ 0.50\n",m_cinq);

  printf ("%d moeda(s) de R$ 0.25\n",m_vintcinc);

  printf ("%d moeda(s) de R$ 0.10\n",m_dez);

  printf ("%d moeda(s) de R$ 0.05\n",m_cinc);

  printf ("%d moeda(s) de R$ 0.01\n",m_umcent);

  return 0;
}