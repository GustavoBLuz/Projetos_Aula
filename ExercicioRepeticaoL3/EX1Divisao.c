#include <stdio.h>
/*1. Escrever um programa para ler dois valores (se o segundo valor informado for ZERO,
deve ser lido um novo valor) e imprimir o resultado da divisão primeiro pelo segundo.*/

int main (void)
{
    float valor,valor2 = 0,resultado;
    int controle;
   
   printf("Digite 0 para sair ou qualquer numero para continuar: ");
   scanf("%d", &controle); 
   while(controle =! 0)
   {
   printf("\nDigite o primeiro numero: ");
   scanf("%f", &valor);
   while(valor2 == 0)
   {
   printf("\nDigite o segundo numero: ");
   scanf("%f", &valor2);
   } 
   resultado = (valor/valor2);
   printf("\nA divisao de %.1f por %.1f eh: %.2f", valor,valor2,resultado);
   
   printf("\nDigite 0 para sair ou qualquer numero para continuar: ");
   scanf("%d", &controle); 
   }
   system ("pause");
   return 0;    
}
