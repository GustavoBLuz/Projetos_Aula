#include <stdio.h>

/*10. Escrever um programa que preenche uma matriz 6 X 6, com o elemento * (asterisco)
as posições acima da diagonal principal e com o elemento @ (arroba) as posições abaixo da
diagonal principal.*/

int main(void)
{
    char matriz[6][6];
    int l,c;
    
     //Preenche a matriz
     for(l=0; l<6; l++)
    {
         for(c=0; c<6; c++)
         {
             if(l<=c)
             {
                    matriz[l][c] = '*';
             }else
             {
                  matriz[l][c] = '@';
             }
         }       
    }
    
     //Digita a matriz na tela
     printf("Matriz:\n");
     for(l=0; l<6; l++)
    {
         for(c=0; c<6; c++)
         {
             printf("[%c]", matriz[l][c]);         
    
         }  
          printf("\n");     
    }
    printf("\n");
    system("pause");
    return 0;
}
