#include <stdio.h>

/*Efetuar o calculo da quantidade de litros de combustivel gastas em uma viagem, utilizando-se um automovel que faz 12KM por litro.
Para obter o calculo, o usuario devera fornecer o tempo gasto na viagem e a velocidade media durante a mesma.Desta forma, será possivel obter a distancia
percorrida com a formula DISTANCIA = TEMPO * VELOCIDADE. Tendo o valor da distancia, basta calcular a quantidade de litros de combustivel utilizada na 
viagem com a formula: Litros = distancia/12. o programa devera apresentar os valores da velocidade media, tempo gasto na viagem a distancia percorrida e a 
quantidade de litros utilizadas na viagem*/

int main (void)
{
   float tempo, velocidade;
   float distancia;
   float combustivelGasto;
   
   printf("Digite o tempo gasto na viagem: ");
   scanf("%f", &tempo);
   
   printf("\nDigite a velocidade media de viagem: ");
   scanf("%f", &velocidade);
   
   distancia = tempo * velocidade;
   
   combustivelGasto = distancia/12;
   
   printf("\nO combustivel gasto na viagem foi de: %.1f litros.", combustivelGasto);
   printf("\nCalculos baseados em:");
   printf("\nVelocidade media: %.1f km/hr\nTempo gasto na viagem: %.2f hr\nDistancia percorrida: %.3f km\n", velocidade, tempo, distancia);
   
   system("pause");
   return 0;
    
}
