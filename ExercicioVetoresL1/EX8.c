#include <stdio.h>
/*8) Ler dois vetores: R de 5 elementos e S de 10 elementos. Gerar um vetor X de 15
elementos cujas 5 primeiras posições contenham os elementos de R e as 10 últimas
posições, os elementos de S. Escrever o vetor X*/

int main(void)
{
    int i, cont = 0;
    int vetorR[5];
    int vetorS[10];
    int vetorX[15];
    
    for(i =0; i <5;i++)
    {
          printf("Informe um valor (vetor R): ");
          scanf("%d", &vetorR[i]);
    }
    
    for(i =0; i <10;i++)
    {
          printf("Digite um valor (vetor S): ");
          scanf("%d", &vetorS[i]);
    }
    
    for(i =0; i <15; i++)
    {
          if(i < 5)
          {
               vetorX[i] = vetorR[i];
          }else
          {
               vetorX[i] = vetorS[cont];
               cont++;
          }
          printf("Vetor X [%d]: %d\n", i,vetorX[i]);
    }
    system("pause");
    return 0;
}
