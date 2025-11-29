#include <stdio.h>
/*1. Ler 10 valores e escrever os valores que estão no intervalo [10, 20] .*/
int main (void)
{
   float valor;
   int controle;
   
   for(controle = 0; controle < 10; controle++)
   {
   printf("Digite o valor: ");
   scanf("%f", &valor);
   if(valor >= 10 && valor <= 20)
   {
   printf("Valor %.1f eh maior ou igual 10 e menor ou igual a 20\n", valor);
   }
   }
   system ("pause");
   return 0;
}
