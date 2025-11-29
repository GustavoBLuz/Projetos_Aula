#include <stdio.h>
/* FACULDADE DOM BOSCO DE PORTO ALEGRE
* Sistemas de Informação – Algoritmos
*
* Programa PrimeiroT1:
* --------------------------
* Objetivo do Programa: Calcular o quanto o João irá pagar em suas contas/Depositos.
* Componentes do grupo: Gustavo Berté da Luz
* Data da entrega do arquivo fonte: 25/03/2018
*/

int main (void)
{
    float salario, valorPC, valorSC, valorTC;
    float resto1,resto2,resto3;
    float valorGuardado, restoSalario;
    
    printf("Digite o salario de Joao: ");
    scanf("%f", &salario);
    
    
    printf("Digite o valor da primeira conta a ser paga: ");    
    scanf("%f", &valorPC);
	resto1 = salario - (valorPC + (valorPC*0.023));
	if(valorPC>salario)
	{
		printf("Saldo insuficiente.");
		exit(0);
	}else{
	
    printf("Saldo apos pagamento da primeira conta: %.2f\n", resto1);
    printf("\nDigite o valor da segunda conta a ser paga: ");    
    scanf("%f", &valorSC);
    	if(valorSC>resto1)
		{
		printf("Saldo insuficiente.");
		exit(1);
		}else{
    resto2 = resto1 - (valorSC +(valorSC*0.039));
    printf("Saldo apos pagamento da segunda conta: %.2f\n", resto2);
    printf("\nDigite o valor da terceira conta a ser paga: ");    
    scanf("%f", &valorTC);
 			if(valorTC>resto2)
			{
			printf("Saldo insuficiente.");
			exit(1);
			}else{
   
    resto3 = resto2 - (valorTC -(valorTC*0.029));
    printf("Saldo apos pagamento da terceira conta: %.2f\n", resto3);
    
    
    valorGuardado = (resto3*0.2);
    printf("\nSaldo depositado: %.2f\n", valorGuardado);
  
  	restoSalario = resto3 - valorGuardado;
    printf("Saldo apos o deposito: %.2f\n", restoSalario);
				}
			}
	}
    system ("pause");
    return 0;
    
}

/*João recebeu seu salário e precisa realizar duas movimentações sobre ele.
Primeira movimentação refere-se ao pagamento de três contas: primeira e segunda conta estão
atrasadas, e a terceira está adiantada. Em razão do atraso, ele deverá pagar multa de 2.3% sobre a
primeira conta e multa de 3.9% sobre a segunda conta. Em razão do adiantamento, ele deverá
receber um desconto de 2.9%.
Segunda movimentação refere-se ao depósito em sua conta de poupança: do salário restante (após o
pagamento das três contas) ele deseja guardar 20%.
Faça um programa que calcule e mostre:
a) O valor a pagar da primeira conta;
b) O valor a pagar da segunda conta;
c) O valor a pagar na terceira conta;
d) O valor que será guardado na conta poupança;
e) Quanto restará do salário do João.*/
