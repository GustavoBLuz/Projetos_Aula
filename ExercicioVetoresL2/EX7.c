#include <stdio.h>
/*7. Dados dois vetores vetA e vetB de 10 posições que armazenam números inteiros e
positivos. Os valores estão armazenados em ordem crescente dentro dos vetores. Escrever
um programa que cria o vetC, a partir de vetA e vetB, também ordenado crescente. Ao
final do processo, exibir os três vetores. Lembre-se que vetA e vetB possuem no máximo
10 elemetos, mas não necessariamente estarão totalmente preenchidos.*/
//Digitar VetorA já em ordem Crescente e o msm com o B

int main(void)
{
    int vetorA[10], vetorB[10],vetorC[20];
    int i,save,menorV = 10051, contA = 0, contB= 0;
    
    printf("Digite -1 para cancelar o preenchimento dos vetores");
    while(vetorA[i] == -1 || i < 10)
    {
          printf("Digite os vetores do vetA[%d]",i)
          scanf("%d",vetorA[i]);
          if(menorV > vetorA[i])
          {
                        menorV = vetorA[i];
          }
          contA++;
    }
    while(vetorB[i] == -1 || i < 10)
    {
         printf("Digite os vetores do vetB[%d]",i)  
         scanf("%d",vetorB[i]);
          if(menorV > vetorB[i])
          {
                        menorV = vetorB[i];
          }
          contB++;
    }
    
    
    for(i = 0; i < (contB+contA); i++)
    {
          if(
          vetorC[i] =
    } 
    
    
    
}
