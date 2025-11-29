#include <stdio.h>

//Escrever um programa que leia o ano de nascimento de uma pessoa. Escrever a sua idade. Considere para
//o cálculo o ano atual.

int main (void)
{
   int ano, idade;
   int anoatual = 2018;
   
   printf("Digite o ano em que voce nasceu: ");
   scanf("%d", &ano);
   
   idade = anoatual - ano;
   
   printf("Sua idade eh : %d\n", idade);
   
   system("pause");
   return 0;
    
}
