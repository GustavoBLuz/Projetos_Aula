#include <stdio.h>
/*Escrever um programa que leia o salario fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. 
Sabendo-se que ele recebe uma comissao de 3% sobre o total das vendas ate R$1500,00 
mais 5% sobre o que ultrapassar este valor, calcular e escrever o seu salario total*/

int main (void)
{
	float salarioFixo, salarioTotal, vendas;
	
   
   printf("Digite o salario fixo do vendedor: ");
   scanf("%f", &salarioFixo);
   printf("Digite o valor de vendas efetuadas: ");
   scanf("%f", &vendas);
   
    salarioTotal = salarioFixo +(vendas*0.03);
    if (vendas > 1500)
    {
    	salarioTotal = salarioTotal + (vendas*0.05);
	}
	printf("Salario total do Vendedor eh de: R$%.2f\n", salarioTotal);
    system ("pause");
   return 0;
    
}
