#include <stdio.h>
/*Uma rede de lojas de departamento classifica seus clientes em 1,2 e 3, de acordo com sua frequencia de compras e com isto recebe
descontos. ler o valor total da compra e classificacao. Exibir o valor da compra, descontro e valor a ser pago. Sendo que cleintes 1 - 20% de desconto,
clientes 2 - 15% de desconto e 3- 5%*/

int main (void)
{
   float valorCompra,valorPagar;
   int classeCliente;
   float class1 = 0.20;
   float class2 = 0.15;
   float class3 = 0.05;
   
   
   printf("Digite o valor da compra: ");
   scanf("%f", &valorCompra);
   printf("Digite a classificacao do cliente(1,2 ou 3): ");
   scanf("%d", &classeCliente);
    
    printf("Valor total da compra: R$%.2f\n",valorCompra);
    if(classeCliente == 1)
    {
	    valorPagar = (valorCompra - (valorCompra*class1));
        printf("Cleinte Classe 1, desconto de 20%%\n");
	}
	if(classeCliente == 2)
    {
	    printf("Cleinte Classe 2, desconto de 15%5\n");
		valorPagar = (valorCompra - (valorCompra*class2));
	}
	
	if(classeCliente == 3)
	{
    	printf("Cleinte Classe 3, desconto de 5%%\n");
	    valorPagar = (valorCompra - (valorCompra*class3));	
	}
	printf("Valor total a ser pago: R$%.2f\n", valorPagar);	
    system ("pause");
   return 0;
    
}
