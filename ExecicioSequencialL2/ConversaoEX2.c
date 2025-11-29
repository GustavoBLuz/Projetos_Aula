#include <stdio.h>

/*Elaborar um programa que efetue a apresentação do valor da conversão em real de um valor lido em dolar. O programa deve solicitar o valor da cotação 
do dolar e tambem a quantidade de dolares disponivel com o usuario, para que seja apresentado em valor reais.*/

int main (void)
{
   float cotacaoDolar, qntDolar, valorEmReal;
   
   printf("Digite a quantidade de dolar para conversao: ");
   scanf("%f", &qntDolar); 
   printf("Digite o valor da cotacao do Dolar: ");
   scanf("%f", &cotacaoDolar); 
   
   valorEmReal = (qntDolar*cotacaoDolar);
   
   
   printf("\nValor em Real: R$%.2f\n", valorEmReal);
   system("pause");
   return 0;
    
}
