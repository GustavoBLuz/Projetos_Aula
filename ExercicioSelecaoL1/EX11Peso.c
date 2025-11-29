#include <stdio.h>
/*Faca um programa que tendo ocomo dados de entrada a altura e o sexo de uma pessoa ( 2 femin, 1 masc). Calcule o peso ideal, utilizando as seguintes
formulas: 1: para homens (72,7*h) - 58
2: para mulheres(62,1*h)- 44,7*/

int main (void)
{
   float altura, pesoIdeal;
   int genero;;
   
   
   printf("Digite o seu sexo(1 para masculino, 2 para feminino): ");
   scanf("%d", &genero);
   printf("Digite a sua altura em metros ");
   scanf("%f", &altura);
    
    
    if(genero == 1)
    {
    	pesoIdeal = ((72.7*altura)-58);
        printf("Peso ideal masculino: %.2f\n", pesoIdeal);
	}
	if(genero == 2)
    {
    	pesoIdeal = ((62.1*altura)-44.7);
	    printf("Peso ideal feminino: %.2f", pesoIdeal);
	}

    system ("pause");
   return 0;
    
}
