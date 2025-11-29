#include <stdio.h>
/*2. Ler dois valores inteiros X e Z, sendo que Z é maior do que X. Escrever os valores de Z
até X, isto é, os valores do intervalo em ordem decrescente.*/

int main (void)
{
	int X,Z;
    printf("Digite um valor inteiro : ");
    scanf("%d", &X);
    printf("Digite mais um valor inteiro: ");
    scanf("%d", &Z);
    printf("Os numeros no intervado de  %d e %d em ordem decrescente:\n", X, Z); 
	Z= Z-1;
	for(Z;Z > X; Z--)
	{
	     printf("%d ", Z); 
	}
}
