#include <stdio.h>

/*Ler o valor de uma compra e escrever o quanto devera ser pago, supondo que esta compra sera paga em trinta dias e tera um acrescimo de 0.39%*/

int main (void)
{
   float valorDaCompra;
   float acrescimo = 1.039;
   float valorTotal;
   	   
   printf("Digite o valor da compra: ");
   scanf("%f", &valorDaCompra); 
   
   valorTotal = (valorDaCompra*acrescimo);
   
   printf("\nValor total a pagar apos os 30 dias: R$%.2f\n",valorTotal);
   system("pause");
   return 0;
    
}
