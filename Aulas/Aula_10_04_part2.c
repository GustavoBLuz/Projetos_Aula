#include <stdio.h>
//Leia 10 numeros e calcule a media de pares

int main (void)
{
   float soma;
   int numero, controle;
   int numerosPares = 0;
   float percent;
   
   for(controle = 1; controle <= 10; controle++)
   {
   printf("Digite o primeiro numero ");
   scanf("%d", &numero);
   if(numero%2 == 0){
   numerosPares++;
   }
   }
   percent = (100*numerosPares)/10;
   printf("\nO percentual de numero par eh %.1f%%\n", percent);

   system ("pause");
   return 0;
}
