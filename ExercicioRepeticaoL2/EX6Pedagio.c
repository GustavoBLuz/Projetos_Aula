#include <stdio.h>
/*5. . (Questão de Trabalho) Um posto de pedágio possui tarifas diferenciadas de acordo com
o tipo do veículo, a saber:
a) veículos oficiais: isentos
b) motos: R$1,00
c) carros: R$1,20
d) carros com reboque: R$1,60
e) ônibus e caminhões: R$2,00
Simular um posto de pedágio por onde passam, obrigatoriamente e somente, 50 carros. Para
cada veículo que passa, ler o tipo do veículo (a, b, c, d, e), determinar o valor a ser pago
pelo veículo, receber um valor em pagamento e calcular o troco.
Ao final da passagem dos 50 carros, informar as seguintes estatísticas:
1. Quantos veículos que passaram são isentos?
2. Quantas motos passaram pelo posto de pedágio?
3. Qual o valor total arrecado pelo posto de pedágio?
*/

int main(void)
{
	float tarifaM = 1,tarifaC =1.2,tarifaCR =1.6,tarifaOC = 2, troco = 0, pagamento, valor = 0;
	int cont = 0, tipo, veiculoI = 0,motos = 0;
	for(cont; cont < 50; cont++)
	{
	printf("Tipos de Veiculos: 1 = Motos, 2 = Carros, 3 = Carros com reboque, 4 = onibus e caminhoes, = 5 veiculos oficiais\n");
	printf("Digite o tipo de veiculo a ser cobrado: \n");
	scanf("%d", &tipo);
		if(tipo == 1)
		{
			printf("Valor a ser pago %.2f\n", tarifaM);
			printf("Digite o valor de pagamento: ");
			scanf("%f", &pagamento);
			troco = pagamento - tarifaM;
			printf("Valor para o troco: %.2f\n", troco);
			valor = valor + tarifaM;
			motos++;
		}else
		{
			if(tipo == 2)
			{
			printf("Valor a ser pago %.2f\n", tarifaC);
			printf("Digite o valor de pagamento: ");
			scanf("%f", &pagamento);
			troco = pagamento - tarifaC;
			printf("Valor para o troco: %.2f\n", troco);
			valor = valor + tarifaC;
			}else
			{
				if(tipo == 3)
				{
					printf("Valor a ser pago %.2f\n", tarifaCR);
					printf("Digite o valor de pagamento: ");
					scanf("%f", &pagamento);
					troco = pagamento - tarifaCR;
					printf("Valor para o troco: %.2f\n", troco);
					valor = valor + tarifaCR;
					
				}else
				{
					if(tipo ==4)
					{
						printf("Valor a ser pago %.2f\n", tarifaOC);
	
						printf("Digite o valor de pagamento: ");
						scanf("%f", &pagamento);
						troco = pagamento - tarifaOC;
						printf("Valor para o troco: %.2f\n", troco);
						valor = valor + tarifaOC;
					}else
					{
						printf("Veiculo oficial nao eh cobrado.\n");
						veiculoI++;
					}
				}
			}
		}
	}
	printf("Numero de motos que passaram pelo pedagio: %d\n",motos);
	printf("Numero de carros oficiais que passaram pelo pedagio: %d\n", veiculoI);
	printf("Valor arrecadado: %.2f\n", valor);
	system("pause");
	return 0;
	
}
