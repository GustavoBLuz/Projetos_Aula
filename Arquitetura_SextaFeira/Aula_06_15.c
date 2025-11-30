#include <stdio.h>



int main()
{
    int a, b, c;
    
    printf("A: ");
    scanf("%d",&a);
    printf("B: ");
    scanf("%d",&b);
    printf("C: ");
    scanf("%d",&c);
    
    if(a > b && a > c)
    {
         printf("%d\n", a);
    }else
    {
         
    if(b > c)
    {
         printf("%d\n", b);
    }else
    {
         if(a < c)
         {
              printf("%d\n", c);
         }else printf("Sao iguais\n");
             
    }
    }
    
    system("pause");
}
