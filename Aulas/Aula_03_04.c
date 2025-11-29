#include <stdio.h>

int main (void)
{
   float nota1, nota2, media;
   int controle;
   
   for(controle = 0; controle <= 29; controle++)
   {
   printf("Digite a primeira nota: ");
   scanf("%f", &nota1);
   printf("Digite a segunda nota: ");
   scanf("%f", &nota2);
   media = (nota1 +nota2)/2;
   printf("Sua media eh: %.1f\n", media);
   system ("pause");
   }
   return 0;
}
