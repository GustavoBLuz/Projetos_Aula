#include <stdio.h>
/*3. Tem-se um conjunto de dados contendo a altura e o sexo (m, f) de 50 pessoas. Fazer um
programa que calcule e escreva:
? a maior e a menor altura do grupo;
? a média de altura das mulheres;
? o número de homens.
fflush(stdin);*/

int main (void)
{
   float altura, mediaM,somaAltM = 0;
   int maiorAlt = 0, menorAlt = 500;
   int numDeH = 0, numDeM = 0;
   int controle;
   char sexo;
   
   for(controle = 1; controle <= 50; controle++)
 {
   fflush(stdin);
   printf("Digite o genero, f para feminino, m para masculino: ");
   scanf("%c", &sexo);
   printf("Digite a altura em centimetros: ");
   scanf("%f", &altura);
   
   if(maiorAlt < altura)
   {
    maiorAlt = altura;             
   }
   if(menorAlt > altura)
   {
    menorAlt = altura;             
   }
   if(sexo == 'm')
   {
   numDeH++;
   }
   if(sexo == 'f')
   {
   somaAltM = somaAltM + altura; 
   numDeM++;
   }
}
   if(numDeM > 0)
   {
   mediaM = somaAltM/numDeM;
   printf("\nA media de altura das mulheres: %.2f ", mediaM);
   }
   printf("\nO numero homens eh: %d", numDeH);
   printf("\nA maior altura eh %d", maiorAlt);
   printf("\nA menor altura eh %d\n", menorAlt);

   system ("pause");
   return 0;
}
