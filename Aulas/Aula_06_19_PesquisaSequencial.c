#include <stdio.h>



int main(void)
{
	//Variaveis a ser usadas no altoritimo
	int vet[7], i, achou, fim;
	int pesquisa;
	//le o vetor
	for(i=0; i<7;i++)
	{
	printf("Digite o numero: ");
	scanf("%d", &vet[i]);
	}
	
	printf("Digite o numero que deseja ser procurado: ");
	scanf("%d", &pesquisa);
	
	//algoritimo de pesquisa sequencial
	//Inicia as variaveis com 0 para que entre no sistema de pesquisa
	i = 0; achou = 0; fim = 0;
	while(achou == 0 && fim == 0)
	{
		if(vet[i] == pesquisa)
		{
			achou = 1;
			printf("Numero existente dentro do vetor\n");
		}else
		{
			if(i<7)
			{
				i++;
			}else
			{
				fim = 1;
				printf("Numero nao existe dentro do vetor\n");
			}
		}
	
	}

	system("pause");
	return 0;
		
}
