#include <stdio.h>

/*Um trabalhador comprou um fogao em 3 prestacoes. A taxa mensal de juros é de 2%. Fazer um programa que leia o valor a vista e mostre na tela as 
3 prestacoes no seguinte formato modelo:*/

int main (void)
{
   float valorVista,valorPrazo,prestacao;
   float juros = 1.02;
   
   printf("Digite o valor do fogao a vista: ");
   scanf("%f", &valorVista);

   valorPrazo = (valorVista*juros);
   prestacao = (valorPrazo/3);
   
   printf("\n***************************\n*Preco a vista: R$%.2f\n*Preco a prazo: R$%.2f\n***************************\n", valorVista,valorPrazo);
   printf("\n********************\n *Prestacao 1: R$%.2f\n********************\n", prestacao);
   printf("\n********************\n *Prestacao 2: R$%.2f\n********************\n", prestacao);
   printf("\n********************\n *Prestacao 3: R$%.2f\n********************\n", prestacao);
   system("pause");
   return 0;
    
}
