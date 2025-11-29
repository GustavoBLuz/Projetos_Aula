#include <stdio.h>

//Escrever um programa para calcular o volume de uma lata de refrigerante, lembre-se que a fórmula é: 
//VOLUME = PI * R * R * altura, onde PI = 3.14159.

int main (void)
{  
   float R, volume;
   float pi = 3.14159;
   printf("Digite o Raio da lata de refrigerante:");
   scanf("%f", &R);
   
   volume = pi * R * R;
   
   printf("Volume da Lata é: %f\n", volume);
 
   system ("pause");
   return 0; 
}
 
 
