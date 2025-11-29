#include <stdio.h>

/*6. Escrever um programa que lê uma matriz de 4 linhas X 3 colunas e escreve a média dos
elementos da matriz*/


int main()
{
	int matriz[4][3];
	int i,j;
	float media = 0;
	
	for(i=0; i<4;i++)
	{
		for(j=0; j<3;j++)
		{
			printf("Digite o numero da matriz: ");
			scanf("%d", &matriz[i][j]);
			media = media + matriz[i][j];
		}
	}
	
	media = media/(4*3);
	
	
	for(i=0; i<4;i++)
	{
		for(j=0; j<3;j++)
		{
			printf("[%d] ", matriz[i][j]);
			
		}
		printf("\n");
	}
	
	printf("Media da matriz: %.2f\n", media);
	
	system("pause");
	return 0;
}



