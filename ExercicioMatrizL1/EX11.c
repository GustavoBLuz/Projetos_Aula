#include <stdio.h>

/*11. Escrever um programa que lê uma matriz M de 6 linhas X 5 colunas e escreve:
a) a quantidade de elementos negativos da matriz;
b) a soma dos elementos da primeira coluna da matriz.*/

int main(void)
{
    int matriz[6][5];
    int l,c, contN = 0;
    int soma = 0;
    //Le a matriz
     for(l=0; l<6; l++)
    {
         for(c=0; c<5; c++)
         {
             printf("Digite um numero: ");         
             scanf("%d", &matriz[l][c]);
             //Verifica se ha numeros pares
             if(matriz[l][c] < 0)
             {
                  contN++;
             }
         }       
    }
    //Soma a primeira coluna da matriz
    for(c=0; c<5; c++)
    {
     l = 0;
      soma = soma + matriz[l][c];
    }
    
    //Escreve na tela
    printf("A quantidade de elementos negativos na matriz: %d\n",contN);
    printf("A soma dos elementos da primeira coluna na matriz: %d\n",soma);
    system("pause");
    return 0;
}
