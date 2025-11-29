#include <stdio.h>

int main (void)
{
   float n1, n2, media;
   int livrosRetirados;
   
   printf("Digite a primeira nota: ");
   scanf("%f", &n1);
   
   printf("Digite a segunda nota: ");
   scanf("%f", &n2);
   
   printf("Quantos livros o aluno retirou em nossa biblioteca? ");
   scanf("%d", &livrosRetirados);
   
   media = (n1 +n2)/2;
   
   printf("Sua nota eh: %.2f\n", media);
   if((media >= 7) && (livrosRetirados >= 1))
   {
    printf("APROVADO\n");
   }else
   {
    printf("REPROVADO\n");
   }
   
   system ("pause");
   return 0;
}
