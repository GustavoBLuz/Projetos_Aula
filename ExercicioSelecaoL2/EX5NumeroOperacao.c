#include <stdio.h>
/*Escrever um programa que solicite dois numeros e o tipo de operacao a ser efetuada entre eles. Sendo que as operacoes permitidas sao: soma,subtracao,divisao e multiplicacao.
Apresentar o resultado das oprecaoes conforme a opcao escolhida*/

int main (void)
{
   float num1,num2;
   float resultado;
   int operacao;
   
   printf("Digite o primeiro numero: ");
   scanf("%f", &num1);
   printf("Digite o segundo numero: ");
   scanf("%f", &num2);
   printf("Digite a operacao que deseja fazer (1: soma, 2: subtracao, 3: divisao, 4:multiplicadao): ");
   scanf("%d", &operacao);
   
    
    if(operacao == 1)
    {
    	resultado = (num1+num2);
	    printf("A soma dos dois numeros eh: %.1f\n", resultado);
	}
	if(operacao == 2)
    {
    	resultado = (num1-num2);
   	    printf("A subtracao dos dois numeros eh: %.1f\n", resultado);
	}
	if(operacao == 3)
    {
    	resultado = (num1/num2);
   	    printf("A divisao dos dois numeros eh: %.1f\n", resultado);
	}
	if(operacao == 4)
    {
    	resultado = (num1*num2);
   	    printf("O produto dos dois numeros eh: %.1f\n", resultado);
	}else
	{
		printf("Operacao invalida.");
	}
    system ("pause");
   return 0;
    
}
