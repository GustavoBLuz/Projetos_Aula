#include <stdio.h>

/*5. Escrever um programa para ler uma matriz de 8 linhas e 5 colunas. Percorrer a matriz e
exibir o número de linhas e o número de colunas nulas da matriz. Considerar a linha ou
coluna nula quando todos os elementos desta forem iguais a 0 (zero) .
*/



int main()
{
	int matriz[8][5];
	int i,j;
	int cont0 = 0,contC =0, contL = 0;
	
	for(i=0; i<8;i++)
	{
		for(j=0; j<5;j++)
		{
			printf("Digite o numero da matriz: ");
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(i=0; i<8;i++)
	{
		for(j=0; j<5;j++)
		{
			if(matriz[i][j] == 0)
			{
				cont0++;
				if(cont0 == 5)
				{
					cont0 = 0;
					contL++;
				}
			}
		}
		cont0 = 0;
	}
	cont0 = 0;
	for(j=0; j<5;j++)
	{
		for(i=0; i<8;i++)
		{
			if(matriz[i][j] == 0)
			{
				cont0++;
				if(cont0 == 8)
				{
					cont0 = 0;
					contC++;
				}
			}
		}
		cont0 = 0;
	}
	
	for(i=0; i<8;i++)
	{
		for(j=0; j<5;j++)
		{
			printf("[%d]",matriz[i][j]);
		
		}
		printf("\n");
	}
	printf("Numero de colunas nulas: %d\nNumero de Linhas nulas: %d\n ",contC,contL);
	system("pause");
	return 0;
}
