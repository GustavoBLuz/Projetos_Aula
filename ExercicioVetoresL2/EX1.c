#include <stdio.h>
/*1. Ler um vetor X de 10 elementos inteiros. Calcular a média aritmética e copiar para um
vetor A os valores de X que estão acima da média calculada e para um vetor B os valores
que estão abaixo da média. Imprimir a média calculada e os vetores A e B. OBS.: Não
deixar espaços vagos entre os elementos de A nem de B.*/

int main (void)
{
    int i, cont = 0, cont2 = 0;
    int vetorX[10], vetorA[10], vetorB[10];
    int media;
    
    for(i = 0; i < 10; i++)
    {
          printf("Digite um elemento para o vetor: %d/9 \n",i);
          scanf("%d", &vetorX[i]);
          /* Nao deu certo por algum motivo desconhecido "?????????????"*/
         // media = media + vetorX[i];
    }
    
    media =(vetorX[0]+vetorX[1]+vetorX[2]+vetorX[3]+vetorX[4]+vetorX[5]+vetorX[6]+vetorX[7]+vetorX[8]+vetorX[9])/10;
     
    printf("Media calculada: %d\n", media);
    for(i = 0; i < 10; i++)
    {
          if(vetorX[i] < media)
          {
             vetorA[cont] = vetorX[i];
             printf("VetorA[%d]\n",vetorA[cont]);
             cont++;
       
          }else
          {
             vetorB[cont2] = vetorX[i];
             printf("VetorB[%d]\n",vetorB[cont2]);
             cont2++;
             
          }
          
          
    }

    system("pause");
    return 0;
    
}
