#include <stdio.h>
/*A jornada de trabalho semanal de um funcionario e de 40 horas. O funcionario que trabalhar mais de 40 horas recebera hora extra, cujo calculo e o valor da hora regular
com um acrescimo de 50%. 
Escreva um programa que le o numero de horas trabalhadas em um mes, o salario por hora e escreva o salario total do funcionario que devera ser
acrescido das horas extras caso tenham sido trabalhadas(considere que o mes possua 4 semanas exatadas (28 dias)*/

int main (void)
{
   float horasTrab,horasExtra;
   float horasMaxSEx = 160;
   float acrescimo = 1.50;
   float salario, salarioTotal,salarioExtra;
   
   printf("Digite a quantidade de horas trabalhadas em um mes: ");
   scanf("%f", &horasTrab);
   printf("Digite o salario por hora ganho: ");
   scanf("%f", &salario);

    if(horasTrab > horasMaxSEx)
    {
    	salarioExtra = ((horasTrab - horasMaxSEx)*(salario*acrescimo));
    	salarioTotal = (horasMaxSEx*salario) + salarioExtra;
    	printf("O Salario total do funcionario: %.2f\nAcrescimo pelas horas extras: %.2f\n", salarioTotal,salarioExtra);
	}else
	{
		salarioTotal = (horasTrab*salario);
		printf("Salario total do funcionario: %.2f\n", salarioTotal);
	}
	
    system ("pause");
   return 0;
    
}
