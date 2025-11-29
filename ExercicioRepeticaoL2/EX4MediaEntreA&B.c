#include <stdio.h>
/*4. Ler dois valores inteiros A e B, calcular e imprimir a média dos valores entre A e B.
Supor A menor do que B.*/

int main(void)
{
	int A, B, cont;
	float resultado = 0;
	printf("Digite um valor inteiro:");
	scanf("%d", &A);
	printf("Digite um valor inteiro maior que o anterior:");
	scanf("%d", &B);
	for(cont = A +1;cont < B; cont++)
	{
		resultado = resultado + cont;
 
	}
	resultado = resultado/(B-2);
	printf("%.1f ", resultado);
	system("pause");
	return 0;
	
}
