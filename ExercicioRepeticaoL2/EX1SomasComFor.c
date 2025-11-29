#include <stdio.h>
/*1. (Questão de P1) Fazer um programa que calcule e escreva o valor de S, utilizando a
estrutura FOR, onde:
S = 10/5 + 9/10 + 8/15 + 7/20 + 6/25 + 5/30 + 4/35 + 3/40 + 2/45 + 1/50*/


int main (void)
{
	float numero = 10,divisor = 5,resultado;
	int cont = 0;
	int cont2 =0;
	float S = 0;
	for(cont; cont < 10; cont++)
	{
		
		resultado = ((numero - cont)/(divisor+cont2));
		cont2+=5;

		S = S + resultado;
 
	}
	printf("S = %.2f", S);
	
}
