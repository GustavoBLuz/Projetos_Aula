#include <stdio.h>


int main(void)
{
	//Mudar para matriz de 40x40
	//Teste feito com 5x5
	int matriz[40][40];
	int contImpar=0;
	int contPar =0;
	int l,c;
	
	//Le e guarda os valores na matriz
	for(l = 0; l<40;l++)
	{
		for(c = 0; c<40;c++)
		{
		printf("Informe o valor: ");
		scanf("%d",&matriz[l][c]);
		}
	}
	
	
	//Calcula a quantidade de numeros Impares da diagonal principal;
	for(l = 0; l<40;l++)
	{
		for(c = 0; c<40;c++)
		{
			if(l==c && matriz[l][c]%2 != 0)
			{
				contImpar++;
			}
		}
	}
	
	//Calcula a quantidade de numeros Pares da ultima linha(4)
	//0 considerado como Par.
	for(l = 39; l<40;l++)
	{
		for(c = 0; c<40;c++)
		{
			if(matriz[l][c]%2 == 0)
			{
				contPar++;
			}
		}
	}
	
	//Printa na tela as informações de contImpar e ContPar
	printf("\nQuantidade de elementos impares da diagonal principal: [%d]", contImpar);
	printf("\nQuantidade de elementos pares da ultima linha: [%d]",contPar);
	
	//Printa a matriz na tela
	printf("\nMatriz\n");
	for(l = 0; l<40;l++)
	{
		for(c = 0; c<40;c++)
		{
			printf("[%d]",matriz[l][c]);
		}
		printf("\n");
	}
	
	
	system("pause");
	return 0;
	
}
