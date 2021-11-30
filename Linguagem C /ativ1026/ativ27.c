#include <stdio.h>
#include <stdlib.h>

int main() 
{
  float N1,N2,N3,N4,EXAME,MEDIA,NOVAMEDIA;

  scanf("%f%f%f%f", &N1, &N2, &N3, &N4);

  MEDIA=(N1*2.0+N2*3.0+N3*4.0+N4*1.0)/10;

  if (MEDIA >= 7)
  {
    printf("Media: %.1f\n", MEDIA);
    printf("Aluno aprovado.\n");
  }

  if (MEDIA < 5)
  {
    printf("Media: %.1f\n", MEDIA);
    printf("Aluno reprovado.\n");
  }
  
  if (MEDIA >= 5 && MEDIA <= 6.9)
  {
    printf("Media: %.1f\n", MEDIA);
    printf("Aluno em exame.\n");
    scanf("%f",&EXAME);
    printf("Nota do exame: %.1f\n", EXAME);
    NOVAMEDIA = (MEDIA+EXAME)/2;
      if (NOVAMEDIA >= 5);
      {
        printf("Aluno aprovado.\n");
        printf("Media final: %.1f\n", NOVAMEDIA);
      }

      if (NOVAMEDIA < 5)
      {
        printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", NOVAMEDIA);
      }
  }

  return 0;
}