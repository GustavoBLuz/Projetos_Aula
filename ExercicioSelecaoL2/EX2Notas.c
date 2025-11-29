#include <stdio.h>
/*Fazer um programa que imprime na tela a situacao do aluno apos a sua nota ser digitada.*/

int main (void)
{
	int nota;
   
   printf("Digite a nota do aluno: ");
   scanf("%d", &nota);
   
    if (nota >= 1 && nota <=2)
    {
    	printf("Nota pessima.\n");
	}else
	{
		if(nota >=3 && nota <= 4)
		{
			printf("Nota ruim.\n");
		}else
		{
			if(nota>=5 && nota<=6)
			{
				printf("Nota pouco ruim.\n");
			}else
			{
				if(nota == 7)
				{
					printf("Nota boa.\n");
				}else
				{
					if(nota>=8 && nota <= 9)
					{
						printf("Nota muito boa.\n");
					}else
						if(nota==10)
						{
						printf("Nota Excelente.\n");
						}
				}
				
			}
		}
	}
    system ("pause");
   return 0;
    
}
