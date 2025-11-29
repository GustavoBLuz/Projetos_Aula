#include <stdio.h>

/*7. Ler uma matriz 5 X 5 com números inteiros positivos e negativos. Depois, percorrer a
matriz e criar dois vetores: um com os números positivos e outro com os negativos. Os dois
vetores criados, não poderão possuir espaços em branco entre os elementos.*/

int main(void)
{
    int matriz[5][5];
    int vetorN[25];
    int vetorP[25];
    int l,c, contN = 0, contP =0;
    
    //Lê a matriz
     for(l=0; l<5; l++)
    {
         for(c=0; c<5; c++)
         {
             printf("Digite um valor: ");         
             scanf("%d", &matriz[l][c]);
             //Verifica se o numero é positivo ou negativo e armazena no vetor correspondente
             if(matriz[l][c] < 0 )
             {
                             vetorN[contN] = matriz[l][c];
                             contN++;
             }else
             {
                             vetorP[contP] = matriz[l][c];
                             contP++;
             }
         }       
    }
    
    //Printa o vetor com numeros positivos
    printf("Vetor com os numeros positivos:\n V");
    for(l=0; l <contP; l++)
    {
             printf("[%d]", vetorP[l]);
    }
    //Printa o vetor com numeros negativos
    printf("\nVetor com os numeros negativos:\n V");
    for(l=0; l <contN; l++)
    {
             printf("[%d]", vetorN[l]);
    }
    printf("\n");
    system("pause");
    return 0;
}
