#include <stdio.h>
/*9) Dado o vetor X, criado na questão anterior, de 15 posições. Gerar o vetor de R com os
5 primeiros elementos de X e o vetor S com os 10 últimos elementos de X.*/

int main(void)
{
     int i, cont = 9;
     int vetorX[15];
     int vetorS[10];
     int vetorR[5];
     
     for(i=0; i< 15; i++)
     {
              printf("Digite o valor (Vetor X): ");
              scanf("%d", &vetorX[i]);
     }
     
     for(i=14; i >=0; i--)
     {
               if(i > 4)
               {
                   vetorS[cont] = vetorX[i];
                   cont--;
                   
               }else
               {
                    vetorR[i] = vetorX[i];
               }
               
     }
     cont = 0;
     for(i =0; i <15; i++)
     {
           if(i<5)
           {
             printf("Vetor R [%d]: %d\n", i, vetorR[i]);      
           }else
           {
             printf("Vetor S [%d]: %d\n", cont, vetorS[cont]);
             cont++;
           }
     }
     system("pause");
     return 0;
}
