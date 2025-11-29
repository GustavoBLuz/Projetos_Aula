#include <stdio.h>

/*Um sistema de equacoes lineares da forma: Ax + By = C Dx + Ey = F
Pode ser resolvido utilizando-se as seguintes formulas:
X= CE - BF/ AE - BD  e Y = AF - CD/ AE-BD
Escreva um programa para ler o conjunto de coeficientes A,B,C,D,E,F e imprimir a solução, ou seja, os valores de X e Y.*/

int main (void)
{
   float varA,varB,varC,varD,varE,varF;
   float proX,proY;
   
   printf("Digite o valor da variavel A: ");
   scanf("%f", &varA);
   printf("Digite o valor da variavel B: ");
   scanf("%f", &varB);
   printf("Digite o valor da variavel C: ");
   scanf("%f", &varC);
   printf("Digite o valor da variavel D: ");
   scanf("%f", &varD);
   printf("Digite o valor da variavel E: ");
   scanf("%f", &varE);
   printf("Digite o valor da variavel F: ");
   scanf("%f", &varF);
   
   
   proX = ((varC*varE) - (varB*varF)) / ((varA*varE) - (varB*varD));
   proY = ((varA*varF) - (varC*varD)) / ((varA*varE) - (varB*varD));  
   
   printf("\nValor de X: %.2f\nValor de Y: %.2f\n", proX,proY);
   system("pause");
   return 0;
    
}
