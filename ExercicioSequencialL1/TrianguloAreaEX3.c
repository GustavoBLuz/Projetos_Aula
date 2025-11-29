#include <stdio.h>

//Elaborar um programa que leia a base e a altura de triângulo e apresente a área deste triângulo.

int main (void)
{  
   float area,base,altura;
   
   printf("Digite a largura da Base:");
   scanf("%f", &base);
   
   
   printf("Digite a Altura:");
   scanf("%f", &altura);
   
   area = (base * altura)/2;
   
   printf("A area deste trianguo é: %.2f\n", area);
 
   system ("pause");
   return 0; 
}
 
 
