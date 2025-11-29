#include <stdio.h>

/*3. Fazer um programa que leia números inteiros para preencher uma matriz 4 X 4 e os
exiba em formato de matriz omitindo os valores da diagonal principal.*/

int main(void)
{
    int matriz[4][4];
    int l, c;
    //Le as variaveis
    for(l=0; l<4; l++)
    {
        for(c=0; c<4; c++)
    {
             printf("Digite um numero: ");
             scanf("%d", &matriz[l][c]);
    }       
    }  
    
    //Printa a matriz
    printf("Matriz:\n");
    for(l=0; l<4; l++)
    {
        for(c=0; c<4; c++)
    {
             if(l == c)
             {
                    printf("  ");
             }else
             {
             printf("%d ", matriz[l][c]);
             }
    }       
    printf("\n");
    }  
    
    system("pause");
    return 0;
    
}
