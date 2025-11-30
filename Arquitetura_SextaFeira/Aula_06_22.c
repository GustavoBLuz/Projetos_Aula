#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define n 10

int main()
{
    int v[n] = {3,2,1,0,4,5,7,9,8,6};
    int i = 0;
    int aux;
    bool dividiu = true;
    for(i=0; i < n; i++)
    {
             printf("V[%d] = %d\n",i,v[i]);
    }
    system("cls");
    
    while(dividiu)
    {
                  dividiu = false;
                  
                  for(i=0; i < n-1; i++)
                  {
                           if(v[i]<v[i+1])
                           {
                                   aux = v[i];
                                   v[i] = v[i+1];
                                   v[i+1] = aux;
                                   dividiu = true;       
                           }
                  }
                   for(i=0; i < n; i++)
                    {
                              printf("V[%d] = %d\n",i,v[i]);
                    }
                   
                   system("pause"); 
                   system("cls");  
     }  
}
