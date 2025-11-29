#include <stdio.h>

/*Uma fabrica de camisetas produz os tamanhos pequeno, medio e grande, cada uma sendo vendida respectivamente por 10,15,18 reais.
Construa um programa em que o usuario forneça a quantidade de camisas pequenas, medias e grandes vendidas. Informe o valor a ser cobrado.*/

int main (void)
{
   int camisasP,camisasM,camisasG;
   float precoP = 10, precoM = 15, precoG = 18;
   float valorCobrado;
   
   printf("Digite a quantidade de Camisas de tamanho P compradas: ");
   scanf("%d", &camisasP); 
   printf("\nDigite a quantidade de Camisas de tamanho M compradas: ");
   scanf("%d", &camisasM);
   printf("\nDigite a quantidade de Camisas de tamanho G compradas: ");
   scanf("%d", &camisasG);
   
   valorCobrado = ((camisasP*precoP) + (camisasM*precoM) + (camisasG*precoG));

   printf("\nValor da compra das camisetas eh de: R$%.2f\n", valorCobrado);
   printf("\nCamisas P,M,G vendidas: %dP %dM %dG\n",camisasP, camisasM, camisasG);
   system("pause");
   return 0;
    
}
