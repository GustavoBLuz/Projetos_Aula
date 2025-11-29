#include <stdio.h>

/*Faça um programa que calcule e mostre a área de um trapezio. 
Onde Trapezio = ((baseMaior + baseMenor)*Altura)/2 */

int main (void)
{
   float baseMaior,baseMenor,altura,area;
   
   printf("Digite o valor da base MAIOR: ");
   scanf("%f", &baseMaior);
   printf("Digite o valor da base MENOR: ");
   scanf("%f", &baseMenor);
   printf("Digite o valor da altura do trapezio: ");
   scanf("%f", &altura);

   area = (((baseMaior + baseMenor)*altura)/2);
   
   printf("\nA area do trapezio eh de: %.2f\n", area);
   system("pause");
   return 0;
    
}
