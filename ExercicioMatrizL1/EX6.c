#include <stdio.h>
/*6. Ler uma matriz 3 X 3 com números inteiros. Percorrer a matriz e encontrar o maior
valor. Exibi-lo.
*/

int main(void)
{
    int matriz[3][3];
    int l,c;
    int maiorV = 0;
    
    //Le a matriz
     for(l=0; l<3; l++)
    {
         for(c=0; c<3; c++)
         {
             printf("Digite um numero: ");         
             scanf("%d", &matriz[l][c]);
             //Verifica se o numero digitado é o maior numero
             if(matriz[l][c] > maiorV)
             {
                             maiorV = matriz[l][c];
             }
         }       
    }
    
    //Printa o maior numero
    
    printf("o maior numero digitado eh: %d\n", maiorV);
    system("pause");
    return 0;
    
}
