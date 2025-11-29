#include <stdio.h>

/*Escrever um programa para ler o salario mensal e o percentual de reajuste. Calcular e escrever o valor do novo salario.*/

int main (void)
{
   float salario, salarioAtual;
   float reajuste;
   
   printf("Digite o valor de seu salario: ");
   scanf("%f", &salario); 
   printf("Digite o percentual de reajuste: ");
   scanf("%f", &reajuste);
   
   salarioAtual = (salario+(salario*(reajuste/100)));
   
   printf("\nSeu novo salario eh de: R$%.2f\n", salarioAtual);
   system("pause");
   return 0;
    
}
