#include <stdio.h>

/*1. Dado uma matriz de ordem 3x3 faça um algoritmo que:
a) Calcule a soma dos elementos da primeira coluna;
b) Calcule o produto dos elementos da primeira linha;
c) Calcule a soma de todos os elementos da matriz;
d) Calcule a soma da diagonal principal.*/

int main(void)
{
    int matriz[3][3];
    int l, c;
    int soma = 0, produto = 1, somaT = 0, somaD = 0;
    
    //Lê as variaveis
    for(l=0; l<3; l++)
    {
        for(c=0; c<3; c++)
    {
             printf("Digite um valor: ");
             scanf("%d", &matriz[l][c]);
    }       
    }  
    
    //Soma
    for(l=0; l<3;l++)
    {
             c = 0;
             soma = soma + matriz[l][c];  
    }
    //produto
    for(c=0; c<3; c++)
    {
         l = 0;
         produto = (produto * matriz[l][c]);  
    }
    //soma De Todos
    for(l=0; l<3; l++)
    {
             for(c=0; c<3;c++)
             {
                     somaT = somaT + matriz[l][c];  
             }
    }
    //soma diagonal
    for(l=0; l<1; l++)
    {
             for(c=0; c<3;c++)
             {
                     if(l == c)
                     {
                          somaD = somaD + matriz[l][c];
                     }
             }
    }
    //printa a matriz
    printf("Matriz:\n");
    for(l=0; l<3; l++)
    {
             for(c=0; c<3;c++)
             {
                     printf("%d", matriz[l][c]);  
             }
             printf("\n");
    }
    
    printf("\nSoma da primeira coluna: %d", soma);
    printf("\nProduto da primeira linha: %d", produto);
    printf("\nSoma de todos os valores: %d", somaT);
    printf("\nSoma da diagonal principal : %d\n", somaD);
    
    system("pause");
    return 0;
    
    
}
