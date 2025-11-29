#include <stdio.h>
/*Escreva um programa que recebe um valor como entrada e exibe o seu quadrado quando o numero for par, e o seu cubo qnd ele e impar.*/

int main (void)
{
	int n1,n2;
   
   printf("Digite o numero: ");
   scanf("%d", &n1);
   
    
    if((n1%2 ==0) )
    {
    n2 = (n1*n1);
    printf("Este numero eh par. Resultado ao elevar ao quadrado: %d\n", n2);
    }else
    {
    n2 = ((n1*n1)*n1);
    printf("Este numero eh impar. Resultado ao elevar ao cubo: %d \n", n2);
	}
    system ("pause");
   return 0;
    
}
