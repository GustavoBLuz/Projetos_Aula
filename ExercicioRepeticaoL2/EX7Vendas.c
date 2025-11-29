#include <stdio.h>
/*7. Uma loja especializada na venda de CDs classifica-os dentre as seguintes categorias:
A – Rock Internacional – R$ 40,00
B – Rock Nacional – R$ 38,00
C – Clássica – R$ 30,00
D – Nativista – R$ 20,00
Simular as vendas da loja e para cada venda deve ser informado a categoria do CD e a
quantidade. Supondo que em um dia a loja efetue 15 vendas. Ao final do dia, informar
quantos CDs de cada categoria que foi vendido, o valor vendido para cada categoria e o
valor total das vendas.*/

int main (void)
{
	int cont = 0, categoria, qnt;
	float valorA = 0, valorB =0, valorC=0, valorD=0,totalDVendas = 0;
	int qntA=0,qntB=0,qntC=0,qntD=0;
	for(cont; cont < 15; cont++)
	{
	printf("Tipos de Categoria: 1 = Rock internacional, 2 = Rock Nacional, 3 = Classica, 4 = Nativista\n");
	printf("Digite a categoria do CD: ");
	scanf("%d", &categoria);
	printf("Digite a quantidade de CDS a ser vendido: \n");
	scanf("%d", &qnt);
		if(categoria == 1)
		{
		qntA=qntA+qnt;
		valorA = valorA + (qnt*40);
		totalDVendas =  totalDVendas + (qnt*40);
		}else
		{
			if(categoria == 2)
			{
			qntB=qntB+qnt;
			valorB = valorB + (qnt*38);
			totalDVendas =  totalDVendas + (qnt*38);		
		
			}else
			{
				if(categoria == 3)
				{
				qntC=qntC+qnt;
				valorC = valorC + (qnt*30);
				totalDVendas =  totalDVendas + (qnt*30);	
				}else
				{
				qntD=qntD+qnt;
				valorD = valorD + (qnt*20);
				totalDVendas =  totalDVendas + (qnt*20);
				}
			}
		}
	}
	printf("Quantidade de Cds comprados de cada categoria:\nA: %d\nB: %d\nC: %d\nD: %d\n",qntA,qntB,qntC,qntD);
	printf("Valor de vendas de cada categoria:\nA:%.2fR$\nB:%.2fR$\nC:%.2fR$\nD:%.2fR$\n",valorA,valorB,valorC,valorD);
	printf("Total de vendas: %.2fR$", totalDVendas);
	system("pause");
	return 0;
}
