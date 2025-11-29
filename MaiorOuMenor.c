#include <stdio.h>

int main (void)
{
    float n1, n2;
   
   printf("Digite o primeiro numero: ");
   scanf("%f", &n1);
   
   printf("Digite o segundo numero: ");
   scanf("%f", &n2);
    
    if(n1 > n2)
    {
     printf("O maior valor e: %.3f\n", n1);
    }
    if(n2 > n1)
    {
     printf("O maior valor e: %.3f\n", n2);
    }  
    if(n2 == n1)
    {
     printf("Os dois valores sao iguais.\n");
    }
    system ("pause");
   return 0;
    
}
