#include <stdio.h>

/*Escrever um programa para ler o numero de eleitores de um minicipio, o numero de votos brancos, nulos e validos.
Calcular e escrever o percentual que cada um representa em relacao ao total de eleitores.*/

int main (void)
{
   int eleitores, votosB,votosN,votosV;
   float percentB,percentN,percentV;
   float percent = 100;
   
   printf("Digite a quantidade de Eleitores que votaram: ");
   scanf("%d", &eleitores); 
   printf("\nDigite os votos brancos: ");
   scanf("%d", &votosB);
   printf("\nDigite os votos nulos: ");
   scanf("%d", &votosN);
   printf("\nDigite os votos validos: ");
   scanf("%d", &votosV);

   percentV = ((votosV*percent)/eleitores);
   percentB = ((votosB*percent)/eleitores);
   percentN = ((votosN*percent)/eleitores);

   printf("\nPercentual de votos Validos: %.1f %%", percentV);
   printf("\nPercentual de votos Brancos: %.1f %%", percentB);
   printf("\nPercentual de votos Nulos: %.1f %%\n", percentN);
   
   
   system("pause");
   return 0;
    
}
