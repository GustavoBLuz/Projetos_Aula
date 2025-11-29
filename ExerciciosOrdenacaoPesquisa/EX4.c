#include <stdio.h>

/*4. A Biblioteca da Faculdade Dom Bosco de Porto Alegre tem 200 livros para empréstimo
aos alunos e professores. Fazer um programa que gerencie os empréstimos dos livros da
biblioteca. Os códigos dos livros estão armazenados em um vetor e em outro vetor estão
armazenadas as quantidades disponíveis de cada exemplar de livro. O programa deve:
//////////////////////////////////////////////////////////////////////////////////////////
a) fazer a leitura do vetor de códigos de livros e do vetor de quantidade de exemplares
(supor que não existem códigos de livros duplicados – não é necessário testar esta
condição).
//////////////////////////////////////////////////////////////////////////////////////////
b) procurar livros que os alunos e professores desejam retirar e verificar se há
exemplares disponíveis. Caso haja exemplares: atualizar a quantidade disponível,
mostrar mensagem “Retirada OK!” e informar o código do livro retirado. Caso não
haja mais exemplares disponíveis: mostrar mensagem “Todos os exemplares deste
livro estão retirados.”. Caso o código do livro a ser retirado não exista: mostrar
mensagem “Código do livro inválido.”;(supor que apenas um exemplar de livro
possa ser levado em cada retirada)
//////////////////////////////////////////////////////////////////////////////////////////
c) programa deve ficar pesquisando livros até que seja digitado para código de livro
9999;
//////////////////////////////////////////////////////////////////////////////////////////
d) quando ocorrer o término da pesquisa (entrada do código 9999), exibir os códigos
dos livros da biblioteca e a quantidade disponível de cada livro.*/

int main()
{
	
	//Variaveis a ser usadas no altoritimo
	int livros[200], i, achou, fim;
	int livrosD[200];
	int pesquisa;
	//le o vetor
	for(i=0; i<200;i++)
	{
	printf("Digite o codigo do livro: ");
	scanf("%d", &livros[i]);
	printf("Digite a quantidade disponivel de livros para a retirada: ");
	scanf("%d", &livrosD[i]);
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
		if(livros[i] == pesquisa)
		{
			achou = 1;
			printf("Livro encontrado.\n");
			if(livrosD[i] != 0)
			{	
				livrosD[i]-= 1;
				printf("Retirada OK!\n");
				printf("Codigo do livro retirado: %d\n", livros[i]);
				printf("Exemplares restantes: %d\n", livrosD[i]);
				
			}else
			{
				printf("Todos os exemplares deste livro estao retirados.\n");
			}
		}else
		{
			if(i<200)
			{
				i++;
			}else
			{
				fim = 1;
				printf("Codigo do livro invalido.\n");
			}
		}
	
	}
	}
	}
	printf("Codigo dos livros: ");
	for(i=0; i<10;i++)
	{
		printf("\nLivro: %d Exemplares restantes: %d", livros[i],livrosD[i]);
	}
	system("pause");
	return 0;
	
}
