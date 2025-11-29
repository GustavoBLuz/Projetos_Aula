#include <stdio.h>

/*8. Escrever um programa que lê uma matriz M de 6 linhas X 5 colunas e escreve:
a) a média dos elementos de cada linha;
b) a quantidade de elementos pares da matriz.
*/

int main(void)
{
    int matriz[6][5];
    int vetorMedia[6];
    int l,c, contPar =0, cont = 0;
    
    //Le a matriz
     for(l=0; l<6; l++)
    {
         for(c=0; c<5; c++)
         {
             printf("Digite um numero: ");         
             scanf("%d", &matriz[l][c]);
             //Verifica se ha numeros pares
             if(matriz[l][c]%2 == 0)
             {
                               contPar++;
             }
         
         }       
    }
    //preenche a matriz media com 0 para evitar erros.
    for(l=0; l<6;l++)
    {
             vetorMedia[l] = 0;
    }
    //Percorre a matriz e calcula a media de cada linha
     for(c=0; c<5; c++)
    {
         for(l=0; l<6; l++)
         {
             vetorMedia[cont] += matriz[l][c];
             if(l == 5)
             {
              vetorMedia[cont] = (vetorMedia[cont]/6);
              cont++;    
             }
         }       
    }
    //mostra a matriz
   for(l=0; l<6; l++)
    {
         for(c=0; c<5; c++)
         {
                  printf("[%d]", matriz[l][c]);
         }       
         printf("\n");
    }
    //Mostra na tela
    printf("Media dos elementos de cada linha:\n" );
    for(l=0; l < cont; l++)
    {
             printf("Linha %d: %d\n", l, vetorMedia[l]);
    }
system("pause");
return 0;
}
