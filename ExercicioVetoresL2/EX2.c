#include <stdio.h>

/*2. Ler um array unidimensional de 10 números inteiros e exibir o array horizontalmente
conforme lido, trocar os elementos entre si, dois a dois, ou seja, os de índice par com os de
índice ímpar. Exibir novamente o array após as trocas. */


int main(void)
{
    int i, vetor[10], save;
    for(i = 0; i < 10; i++)
    {
          printf("Digite o numero do vetor %d/9: ", i);
          scanf("%d", &vetor[i]);
    }
     printf("Vetor");
    for(i = 0; i < 10; i++)
    {
          printf("[%d]", vetor[i]);
    }
    printf("\nVetor apos as trocas\n");
    printf("Vetor");
    for(i = 0; i <10; i+=2)
    {
          save = vetor[i];
          vetor[i] = vetor[i+1];
          vetor[i+1] =  save;
    }
    for(i = 0; i < 10; i++)
    {
          printf("[%d]", vetor[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
