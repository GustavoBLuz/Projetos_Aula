#include <stdio.h>
/*Dados tres valores, lado 1, lado 2, lado 3, 
verificar se eles podem ser os comprimentos dos lados de um triangulo e,
se for verificar se o triangulo equilatero, isoscele ou escaleno. Se nao formarem triangulo, escrever uma mensagem.
Lembrete:
Triangulo e uma forma geometrica composta por 3 lados, onde cada lado e menor que a soma dos outros dois lados.
Triangulo equilatero todos os lados sao iguais
Triangulo isocele dois lados iguais e um diferente
Triangulo escaleno todos os lados sao diferentes*/

int main (void)
{
   float lado1,lado2,lado3;
   float verifica;
   
   printf("Digite o o valor do lado 1: ");
   scanf("%f", &lado1);
   printf("Digite o o valor do lado 2: ");
   scanf("%f", &lado2);
   printf("Digite o o valor do lado 3: ");
   scanf("%f", &lado3);
   
    if (lado1+lado2 > lado3 &&lado2+lado3 > lado1 &&lado1+lado3 > lado2)
    {
    	if(lado1 == lado2 && lado2 == lado3)
		{
			printf("Os valores indicam um Triangulo Equilatero.\n");
		}else{
			if((lado1 == lado2 && lado1 != lado3) || (lado2 == lado3 && lado3 != lado1) || (lado3 == lado1 && lado1 != lado2))
			{//2 lados iguais e um diferente
				printf("Os valores indicam um Triangulo Isocele.\n");
			}else
			{
				if(lado1 != lado2 && lado2 != lado3 && lado3 != lado1)
				{
					printf("Os valores indicam um Triangulo Escaleno.\n");
				}
			}
		}	
	}else
	{
	printf("Os valores indicados nao formam um Triangulo.\n");
	}
    system ("pause");
   return 0;
    
}
