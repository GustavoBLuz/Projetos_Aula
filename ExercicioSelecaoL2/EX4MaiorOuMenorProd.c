#include <stdio.h>
/*Escreva um programa para ler 3 valores e escrever o produto  dos 2 menores. Considere que o usuario nao informara valores iguais*/

int main (void)
{
   float num1,num2,num3;
   float prod1,prod2, prod3;
   
   printf("Digite o primeiro numero: ");
   scanf("%f", &num1);
   printf("Digite o segundo numero: ");
   scanf("%f", &num2);
   printf("Digite o terceiro numero: ");
   scanf("%f", &num3);
   
    
    if(num1 < num3 && num2 < num3)
    {
    	prod1 = (num1*num2);
	    printf("O produto dos dois menores numeros eh: %.1f\n", prod1);
	}
	if(num2 < num1 && num3 < num1)
    {
    	prod2 = (num2*num3);
   	    printf("O produto dos dois menores numeros eh: %.1f\n", prod2);
	}
	if(num3 < num2 && num1 < num2)
    {
    	prod3 = (num3*num1);
   	    printf("O produto dos dois menores numeros eh: %.1f\n", prod3);
	}
    system ("pause");
   return 0;
    
}
