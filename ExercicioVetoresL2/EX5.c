#include <stdio.h>
/*5. Faça um programa para ler 10 números inteiros, colocando-os em um vetor. Crie dois
outros vetores: um para armazenar apenas os números positivos (maior ou iguais a zero) e
outro para armazenar apenas os números negativos. Coloque os números positivos no vetor
de positivos e os números negativos no vetor de negativos. Mostre na tela os três vetores.
Obs.: Os vetores de positivos e negativos não deverão conter espaços em branco entre os
valores armazenados.*/

int main(void)
{
    int vetor[10], vetorN[10], vetorP[10];
    int contP = 0, contN = 0 , i;
    
    for(i = 0; i < 10; i++)
    {
      printf("Digite um valor inteiro para o vetor[%d]: ", i);
      scanf("%d", &vetor[i]);     
    }
    
    for(i = 0; i < 10; i++)
    {
          if(vetor[i] >= 0)
          {
                      vetorP[contP] = vetor[i];
                      contP++;
          }else
          {
               vetorN[contN] = vetor[i];
               contN++;
          }
    }
    printf("\nVetor");
     for(i = 0; i < 10; i++)
    {
          printf("[%d]", vetor[i]);
    }
    if(contP > 0)
    {
    printf("\nVetorP");
     for(i = 0; i < contP; i++)
    {
          printf("[%d]", vetorP[i]);
    }
    }
    if(contN > 0)
    {
    printf("\nVetorN");
    for(i = 0; i < contN; i++)
    {
          printf("[%d]", vetorN[i]);
    }
    }
    printf("\n");
    system("pause");
    return 0;
    
}
