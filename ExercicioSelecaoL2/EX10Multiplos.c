#include <stdio.h>
/*Ler dois numeros inteiros A e B e mostrar mensagem informando se A e multiplo de B*/

int main (void)
{
  int num1, num2;
 
  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);
  printf("Digite o segundo numero: ");
  scanf("%d", &num2);
   
  if (num2%num1 == 0)
    {
    	printf("O numero %d eh multiplo de %d\n", num1, num2);
	}else
	{
		printf("O numero %d nao eh multiplo de %d\n", num1,num2);
	}

    system ("pause");
   return 0;
    
}
