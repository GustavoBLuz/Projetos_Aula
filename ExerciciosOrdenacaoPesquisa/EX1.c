#include <stdio.h>

/*1. Listar em ordem crescente as matrículas dos alunos do curso de Sistemas de Informação
que estão armazenados em um vetor. Utilizar o método da bolha.*/

int main()
{

//Variaveis a ser usadas no altoritimo
	int vet[10],i, j, aux;
	
	//le o vetor
	for(i=0; i<10;i++)
	{
	printf("Digite a matricula: ");
	scanf("%d", &vet[i]);
	}
	
	
	
	//algoritimo de organização de numeros Bubble Sort
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(vet[i]>vet[j])
			{
				aux = vet[i];
				vet[i]=vet[j];
				vet[j]=aux;
			}
		}
	}
	
	printf("Matriculas organizadas:\n ");
	//Escreve o vetor
	for(i=0;i<10;i++)
	{
		printf("%d\n",vet[i]);
	}
	printf("\n");
	
	system("pause");
	return 0;
}
