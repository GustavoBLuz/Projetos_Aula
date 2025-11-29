#include <stdio.h>
//Elaborar um programa que efetue a leitura de um número inteiro e apresente uma
//mensagem informando se o número é par ou ímpar.

int main (void)
{
    int n1;
   
   printf("Digite o numero: ");
   scanf("%d", &n1);
   
    
    if((n1%2 ==0) )
    {
     printf("Este numero eh Par.\n");
    }else
    {
    	printf("Este numero eh Impar.\n");
	}
    system ("pause");
   return 0;
    
}
