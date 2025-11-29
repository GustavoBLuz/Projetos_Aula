#include <stdio.h>

/*Faça um programa que calcule e mostre a area de um losangulo*/

int main (void)
{
   float diagonalMaior, diagonalMenor;
   float areaLosango;
   	   
   printf("Digite o valor da diagonal maior: ");
   scanf("%f", &diagonalMaior); 
   
   printf("Digite o valor da diagonal menor: ");
   scanf("%f", &diagonalMenor); 
   
   areaLosango = ((diagonalMaior*diagonalMenor)/2);
   
   printf("\nA Area do Losango eh de: %.1f\n",areaLosango);
   system("pause");
   return 0;
    
}
