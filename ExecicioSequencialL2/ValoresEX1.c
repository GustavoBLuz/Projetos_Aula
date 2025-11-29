#include <stdio.h>

/*Faça um programa que leia 3 valores em variaveis distintas, armazene a soma das duas primeiras em uma nova variavel e o produto das duas ultimas em
outra, e mostre como resultado o produto das duas novas variaveis*/

int main (void)
{
   float valor1, valor2,valor3;
   float soma1e2,produto2e3, produtoSeP;
   	   
   printf("Digite o primeiro valor: ");
   scanf("%f", &valor1); 
   printf("Digite o segundo valor: ");
   scanf("%f", &valor2); 
   printf("Digite o terceiro valor: ");
   scanf("%f", &valor3); 
   
   soma1e2 = (valor1 + valor2);
   produto2e3 = (valor2*valor3);
   produtoSeP = (soma1e2*produto2e3);
   
   printf("\nResultado do calculo: %.2f\n",produtoSeP);
   system("pause");
   return 0;
    
}
