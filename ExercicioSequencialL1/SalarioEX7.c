#include <stdio.h>

/*Uma empresa tem para um determinado funcionario uma ficha contendo o numero de horas trabalhas e o n de dependentes.
Considerando que:
a) A empresa paga 12 reais por hora e 40 reais por dependentes, isto é o salario bruto.
b) Sobre o salario bruto sao feitos descontos de 8,5% para o INSS e 5% para o IR.
Faça um programa para ler o numero de horas trabalhadas e o numero de dependentes de um funcionario. Apos a leitura, escreva qual o salario bruto, os
valores descontados para cada tipo de imposto e finalmente qual o salario liquido do funcionario.*/

int main (void)
{
   float horasTrab, numDeDepen;
   float salarioBruto, salarioLiq;
   float inss;
   float ir;
   
   printf("Digite o numero de horas trabalhadas pelo funcionario: ");
   scanf("%f", &horasTrab);
      
   printf("Digite o numero de dependentes do funcionario: ");
   scanf("%f", &numDeDepen);
   
   salarioBruto = ((horasTrab * 12)+ (numDeDepen * 40));
   
   inss = salarioBruto*0.085;
   ir = salarioBruto*0.05;
   salarioLiq = (salarioBruto - inss - ir);

   printf("\nO Salario do funcionario eh de: R$%.2f", salarioLiq);
   printf("\nO Valor bruto do salario eh de: R$%.2f", salarioBruto);
   printf("\nValor descontado do INSS: R$%.2f \nValor descontado do IR: R$%.2f\n", inss, ir);
   
   system("pause");
   return 0;
    
}
