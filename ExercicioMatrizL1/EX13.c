#include<stdio.h>

/*
13. Dada uma matriz de 5 X 5 e dois vetores de 5 posições que armazenam números reais.
Escreva um programa que leia valores para a matriz, calcule a soma das colunas,
armazenando o resultado em um dos vetores, e o produto das linhas, armazenando no outro
vetor. Ao final escrever a matriz e os dois vetores.
*/

int main(void)
{
    int matriz[5][5];
    int vetorS[5];
    int vetorP[5];
    int soma =0 ,produto = 1, l,c;
    
    //Le a matriz
     for(l=0; l<5; l++)
    {
         for(c=0; c<5; c++)
         {
             printf("Digite um numero: ");         
             scanf("%d", &matriz[l][c]);
             
         }       
    }
    //Calcula a soma das colunas
    for(l=0; l<5; l++)
    {
           for(c=0; c<5; c++)
         {
             soma = soma + matriz[l][c];
             vetorS[l] = soma;
         }    
         soma = 0;
    }
    //Calcula o produto das linhas
    for(c=0; c<5; c++)
    {
           for(l=0; l<5; l++)
         {
             produto = produto * matriz[l][c];
             vetorP[c] = produto;
         }    
         produto = 1;
    }
    
    //Escreve a matriz
    printf("Matriz:\n");
     for(l=0; l<5; l++)
    {
         for(c=0; c<5; c++)
         {
            printf("[%d]",matriz[l][c]);
             
         }       
         printf("\n");
    }
     //Escreve o vetor soma
    printf("\nVetor Soma: ");
     for(l=0; l<5; l++)
    {
              printf("{%d}", vetorS[l]);
    }
    //Escreve o vetor soma
    printf("\nVetor Produto: ");
     for(l=0; l<5; l++)
    {
              printf("{%d}", vetorP[l]);
    }
system("pause");
return 0;
    
    
}
