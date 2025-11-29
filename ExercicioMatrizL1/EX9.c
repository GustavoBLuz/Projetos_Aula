#include <stdio.h>

/*9. Dada uma matriz 3 X 3, onde toda a primeira coluna deve ser preenchido com o número
0 (zero), a segunda coluna com o número 1 (um) e a terceira coluna com o número dois
(dois).*/


int main(void)
{
    int matriz[3][3];
    int l,c;
    
     //Preenche a matriz
     for(l=0; l<3; l++)
    {
         for(c=0; c<3; c++)
         {
             matriz[l][c] = l;
         }       
    }
    
     //Digita a matriz na tela
     printf("Matriz:\n");
     for(l=0; l<3; l++)
    {
         for(c=0; c<3; c++)
         {
             printf("[%d]", matriz[l][c]);         
    
         }  
          printf("\n");     
    }
    printf("\n");
    system("pause");
    return 0;
}
