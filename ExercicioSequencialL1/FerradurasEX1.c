#include <stdio.h>

//Escreva um programa para ler a quantidade de cavalos de uma fazenda e escreva quantas ferraduras são
//necessárias para equipar todos os cavalos da fazenda.

int main (void)
{  
   int n1, ferraduras;
   
   printf("Digite o numero de cavalos: ");
   scanf("%d", &n1);
   
   ferraduras = n1 * 4;
   
   printf("Numero de ferraduras sao: %d\n", ferraduras);
 
   system ("pause");
   return 0; 
}
