#include <stdio.h>

/*2. Uma empresa vende 100 produtos cujos códigos estão armazenados em um vetor. Fazer
um programa que procure um produto que um cliente deseja comprar. Supor que não
existem códigos duplicados.*/

int main()
{

	//Variaveis a ser usadas no altoritimo
	int vet[100], i, achou, fim;
	int pesquisa;
	//le o vetor
	for(i=0; i<100;i++)
	{
	printf("Digite o codigo dos produtos: ");
	scanf("%d", &vet[i]);
	}
	
	printf("Digite o codigo do produto que deseja ser procurado: ");
	scanf("%d", &pesquisa);
	
	//algoritimo de pesquisa sequencial
	i = 0; achou = 0; fim = 0;
	while(achou == 0 && fim == 0)
	{
		if(vet[i] == pesquisa)
		{
			achou = 1;
			printf("Produto existente em nosso estoque\n");
		}else
		{
			if(i<100)
			{
				i++;
			}else
			{
				fim = 1;
				printf("Nao temos produto com este codigo.\n");
			}
		}
	
	}

	system("pause");
	return 0;
	
	
	
}
