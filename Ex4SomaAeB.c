#include <stdio.h>
/*4. Ler dois valores inteiros A e B, calcular e imprimir a média dos valores entre A e B.
Supor A menor do que B.*/

int main (void)
{
   int numeroA,numeroB;
   int numDeNum = 1;
   float media;
   float calculo = 0;
    
   printf("Digite o primeiro numero: ");
   scanf("%d", &numeroA);
   printf("Digite o segundo numero: ");
   scanf("%d", &numeroB);
   
   for(numeroA=numeroA+1; numeroA < numeroB; numeroA++)
   {
   numDeNum++;
   calculo = calculo + numeroA;
   }
   media = calculo/numDeNum;  
   printf("media dos valores entre o primeiro e segundo numero: %.1f\n", media);
   system ("pause");
   return 0;
}
