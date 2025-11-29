#include <stdio.h>
/*Elabore um programa que recebe a idade de um nadador. O programa deve classificar o nadador em uma das categorias abaixos:
infantil A = de 5 a 7 anos
infantil B = de 8 a 10 anos
juvenil A = de 11 a 13 anos
juvenil B = de 14 a 17 anos
Senior = maior de 18 anos*/

int main (void)
{
	int idade;
   
   printf("Digite a idade do nadador: ");
   scanf("%d", &idade);
   
    if (idade >= 5 && idade <=7)
    {
    	printf("o nanador pertence a categoria infantil A.\n");
	}else
	{
		if(idade >=8 && idade <= 10)
		{
			printf("o nanador pertence a categoria infantil B.\n");
		}else
		{
			if(idade>=11 && idade<=13)
			{
				printf("o nanador pertence a categoria juvenil A.\n");
			}else
			{
				if(idade>=14 && idade <=17)
				{
					printf("o nanador pertence a categoria juvenil B.\n");
				}else
				{
					if(idade>=18)
					{
						printf("o nanador pertence a categoria Senior.\n");
					}
				}
				
			}
		}
	}
    system ("pause");
   return 0;
    
}
