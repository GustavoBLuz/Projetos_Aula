#include <stdio.h>
/* FACULDADE DOM BOSCO DE PORTO ALEGRE
* Sistemas de Informação – Algoritmos
*
* Programa SegundoT1:
* -----------------------
* Objetivo do Programa: Calcular o Valor do custo das fotos reveladas ao cliente.
* Nome dos alunos: Gustavo Berté da Luz
* Data da entrega do arquivo fonte: 25/03/2018
*/

int main (void)
{
	int quantidade;
	int qntDeFotos;
    float pack1a19   = 0.88;
	float pack20a40  = 0.64;
	float pack41a60  = 0.57;
	float pack61Mais = 0.45;
	float servicoExtra = 0.06;
    float valorDoServico;
    float valorDoServicoCmExtra;
    
    printf("Digite a quantidade de fotos que deseja: ");
    scanf("%d", &qntDeFotos);
	
	if(qntDeFotos < 20)
	{
		valorDoServico = qntDeFotos*pack1a19;
	}	
	if(qntDeFotos >= 20 && qntDeFotos <= 40)
	{
		valorDoServico = qntDeFotos*pack20a40;		
	}
	if(qntDeFotos >= 41 && qntDeFotos <= 60)
	{
		valorDoServico = qntDeFotos*pack41a60;
	}
	if(qntDeFotos >=61)
	{
		valorDoServico = qntDeFotos*pack61Mais;
	}
	
	printf("\nValor atual: R$%.2f\n", valorDoServico);
	printf("\nDeseja algum tipo de servico extra? Digite a quantidade: ");
	scanf("%d", &quantidade);
	if(quantidade == 0)
	{
		printf("\nValor a ser pago: R$%.2f\n", valorDoServico);
	}else{	
		
		valorDoServicoCmExtra = valorDoServico + ((valorDoServico*0.06)*quantidade);
		printf("\nValor total a ser pago: %.2f\n", valorDoServicoCmExtra);
	}
}
/*
Um laboratório de revelação de filmes fotográficos realiza a cobrança de seus clientes de acordo
com as seguintes regras:
a) Qualquer quantia de fotos inferior a 20, o custo unitário é de R$ 0.88;
b) Entre 20 e 40, o custo unitário é de R$ 0.64;
c) Entre 41 e 60, o custo unitário é de R$ 0.57;
d) Mais do que 61, o custo unitário é de R$ 0.45.
Se o usuário solicitar algum serviço-extra, como por exemplo, revelação em preto-e-branco ou com
borda, terá um acréscimo de 6% para cada tipo de serviço extra que foi solicitado, no valor total do
serviço. 
Faça um programa que solicite ao usuário a quantidade de fotos enviadas e a quantidade de
serviços-extras. Informe o valor total que ele deve pagar.
*/
