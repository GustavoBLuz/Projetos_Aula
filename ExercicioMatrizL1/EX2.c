#include <stdio.h>

/*2. Fazer um programa que leia uma matriz 5 X 5 com números do intervalo de 0 a 50.
Imprimir a matriz em formato de matriz*/

int main(void)
{
    int matriz[5][5];
    int l, c;
    //Le e guarda a informação na matriz
    for(l=0; l<5; l++)
    {
             for(c=0; c<5;c++)
             {
                    printf("Digite o valor da matriz: ");
                    scanf("%d", &matriz[l][c]);
                    while(matriz[l][c] < 0 || matriz[l][c] > 50)
                    {
                                       printf("Digite um valor entre 0 e 50: ");
                                       scanf("%d", &matriz[l][c]);
                    }
             }
    }
    //printa a matriz
    printf("Matriz:\n");
    for(l=0; l<5; l++)
    {
             for(c=0; c<5;c++)
             {
                     printf("%d ", matriz[l][c]);
             }
             printf("\n");
    }

    system("pause");
    return 0;
}
