#include <stdio.h>



int main(void)
{
	//Variaveis a ser usadas no altoritimo
	int vet[6], i, j, aux;
	
	//le o vetor
	for(i=0; i<6;i++)
	{
	printf("Digite o numero: ");
	scanf("%d", &vet[i]);
	}
	
	
	
	//algoritimo de organização de numeros Bubble Sort
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(vet[i]>vet[j])
			{
				aux = vet[i];
				vet[i]=vet[j];
				vet[j]=aux;
			}
		}
	}
	
	
	//Escreve o vetor
	printf("Vet: ");
	for(i=0;i<6;i++)
	{
		printf("[%d]",vet[i]);
	}
	printf("\n");
	
	system("pause");
	return 0;
	
	
}
