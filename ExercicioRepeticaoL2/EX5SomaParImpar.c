#include <stdio.h>
/*5. (Questão de P1) Ler 2 números inteiros A e B. Calcular e imprimir:
- a soma de todos os números pares menores que A
- a soma de todos os ímpares existentes entre A e B, incluindo A e B.
Suponha que eles sejam positivos e que B é maior que A.
*/

int main(void)
{
	int A, B, soma = 0, resultado =0, cont, cont2;
	printf("Digite um numero inteiro: ");
	scanf("%d", &A);
	printf("Digite um numero maior que o anterior e que seja inteiro: ");
	scanf("%d", &B);
	
	for(cont = A-1; cont >= 0; cont--)
	{
		if(cont%2 == 0)
		{
			soma = soma + cont;
		}
	}
	for(cont2 = A; cont <= B; cont++)
	{
		if(cont2%2 ==1)
		{
			resultado = resultado + cont2;
		}
	}
	
	printf("A soma de todos os numeros pares menores que %d: %d\n", A, soma);
	printf("A soma de todos os numeros impares: %d\n", resultado);
	
}
