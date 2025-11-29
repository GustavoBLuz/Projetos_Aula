#include <stdio.h>
/*A partir de dois numeros fornecidos pelo usuario, escrever uma das seguintes mensagens: 
Os dois sao pares; os dois sao impares; o primeiro e par, o segundo e impar; o primeiro e impar e o segundo e par;*/

int main (void)
{
  int num1,num2;
 
  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);
  printf("Digite o segundo numero: ");
  scanf("%d", &num2);
   
  if (num2%2 == 0 && num1%2 == 0)
    {
    	printf("Os dois sao Pares.\n");
	}else
	{
		if(num1%2 != 0 && num2%2 != 0)
		{
			
    		printf("Os dois sao Impares\n");
		}else
		{
			if(num1%2 == 0 && num2%2 != 0)
			{
				printf("o primeiro e Par e o segundo e Impar\n");
			}else
			{
				if(num1%2 != 0 && num2%2 == 0)
				{
					printf("o primeiro e Impar e o segundo e Par\n");
				}
				
			}
		}
	}
    system ("pause");
   return 0;
    
}
