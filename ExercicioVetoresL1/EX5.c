#include <stdio.h>
/*5) Criar um vetor de 10 elementos inteiros. A seguir criar outro vetor onde todos os
números negativos deverão ser trocados por 0 (zero). Escrever os dois vetores.*/

int main(void)
{
    int i;
    int vetor1[10];
    int vetor2[10];
    
    for(i =0; i<10;i++)
    {
          printf("\nInforme um valor: ");
          scanf("%d", &vetor1[i]);
          
          if(vetor1[i] < 0)
          {
                       vetor2[i] = 0;
          }else
          {
               vetor2[i] = vetor1[i];
          }
    }
    
    for(i =0; i<10; i++)
    {
          printf("Vetor 1 [%d] = %d | Vetor 2 [%d] = %d\n", i, vetor1[i], i, vetor2[i]);
    }
    system("pause");
    return 0;
}
