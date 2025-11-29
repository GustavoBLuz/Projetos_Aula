#include <stdio.h>

/*5. Escrever um programa que lê uma matriz M de 6 linhas X 5 colunas e escreve a
quantidade de elementos iguais a 0 (zero) da matriz.*/



int main(void)
{
    int matriz[6][5];
    int cont = 0, l,c;
    
    //Le a matriz
     for(l=0; l<6; l++)
    {
         for(c=0; c<5; c++)
         {
             printf("Digite um numero: ");         
             scanf("%d", &matriz[l][c]);
             if(matriz[l][c] == 0)
             {
                             cont++;
             }
         }       
    }  
    //Digita a quantidade de elementos iguais a 0
    printf("Quantidade de elementos iguais a 0 na matriz: %d\n", cont);
    
    system("pause");
    return 0;
}
