#include <stdio.h>

/*Faça um programa que receba o raio, calcule e mostre o comprimento de uma esfera, sabe-se que C = 2*PI*R*/

int main (void)
{
   float raio,comprimento;
   float PI = 3.14;
   
   printf("Digite o valor do raio da esfera: ");
   scanf("%f", &raio);

   comprimento = (2*PI*raio);
   
   printf("\nO comprimento da esfera eh de: %.2f\n", comprimento);
   system("pause");
   return 0;
    
}
