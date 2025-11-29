#include <stdio.h>
/*escrever um programa que solicita um numero inteiro de 1 a 7 e devolva o dia da semana correspondente*/

int main (void)
{
	int dia;
   
   printf("Digite o dia desejado: ");
   scanf("%d", &dia);
   
    if (dia == 1)
    {
    	printf("Numero representa Domingo. \n");
	}else
	{
		if(dia == 2)
		{
    		printf("Numero representa Segunda-feira. \n");
		}else
		{
			if(dia == 3)
			{
				printf("Numero representa Terca-feira. \n");
			}else
			{
				if(dia == 4)
				{
					printf("Numero representa Quarta-feira. \n");
				}else
				{
					if(dia == 5)
					{
						printf("Numero representa Quinta-feira. \n");
					}else
					{
						if(dia == 6)
						{
							printf("Numero representa Sexta-feira. \n");
						}else
						
							if(dia == 7)
							{
								printf("Numero representa Sabado. \n");
							}
						}
					}
				}
				
			}
		}
	}
    system ("pause");
   return 0;
    
}
