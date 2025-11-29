#include <stdio.h>

/*Altere o Ex3 para pedir tambem o divisor*/

int main (void)
{
   int valor, produto,resto;
   int divisor;
   printf("Digite um valor a ser feita a divisao: ");
   scanf("%d", &valor); 
   printf("Digite um divisor para a divisao: ");
   scanf("%d", &divisor);
   
   produto = (valor/divisor);
   resto = (valor%divisor);
   
   printf("\n%d divido por %d = %d\n", valor,divisor,produto);
   printf("%d divido por %d resta %d\n", valor, divisor,resto);
   system("pause");
   return 0;
    
}
