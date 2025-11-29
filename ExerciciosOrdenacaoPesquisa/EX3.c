#include <stdio.h>

/*3. Alterar o programa acima para ficar pesquisando produtos informados até que seja
digitado para código de produto 9999.*/



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
	while(pesquisa != 9999)
	{
	printf("Para sair digite: 9999\n");
	printf("Digite o codigo do produto que deseja ser procurado: ");
	scanf("%d", &pesquisa);
	
	//algoritimo de pesquisa sequencial
	i = 0; achou = 0; fim = 0;
	if(pesquisa != 9999)
	{
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
	}
	}
	system("pause");
	return 0;
}
