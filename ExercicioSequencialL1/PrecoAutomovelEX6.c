#include <stdio.h>

/*O preço de um automovel é calculado pela soma do preço de fabrica com o preço dos impostos(45% do preço de fabrica) e a percentagem do revendedor
(28% do preço da fabrica).Faça um programa que leia o preço de fabrica e imprima o preço final.*/

int main (void)
{
   float precoDeFabrica, precoFinal;
   float precoDosImpostos = 1.45;
   float percentagemRevendedor = 1.28;
   
   printf("Digite o preco de fabrica de um automovel: ");
   scanf("%f", &precoDeFabrica);
   
   precoFinal = ((precoDeFabrica*precoDosImpostos)*percentagemRevendedor);
   
   printf("\nO preco do carro apos os juros eh de: R$%.2f\n", precoFinal);
   
   system("pause");
   return 0;
    
}
