#include <stdio.h>

/*Faça um programa para ler um numero inteiro, calcular o valor da divisao inteira deste numero por 7, e o respectivo resto da divisao
(resto da divisao inteira por 7). Exibir o resultado conforme o exemplo abaixo.
Digite um numero: 23
			23 divido por 7 = 3
			23 divido por 7 resta 2*/

int main (void)
{
   int valor, produto,resto;
   int divisor = 7;
   printf("Digite um valor a ser feita a divisao: ");
   scanf("%d", &valor); 

   produto = (valor/divisor);
   resto = (valor%divisor);
   
   printf("\n%d divido por 7 = %d\n", valor,produto);
   printf("%d divido por 7 resta %d\n", valor, resto);
   system("pause");
   return 0;
    
}
