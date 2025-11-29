#include <stdio.h>


int main(void)
{
//Mudar para vetA/B 100 e C = 200 
//Teste feito com 10/20 posições
int vetA[100];
int vetB[100];
int vetC[200];
int i,contA=0,contB=0;

//Le os valores e os guarda no vetorA
for(i = 0; i<100;i++)
{
	printf("Digite os numeros do Vetor A: ");
	scanf("%d",&vetA[i]);
}

//Le os valores e os guarda no vetorB
for(i = 0; i<100;i++)
{
	printf("Digite os numeros do Vetor B: ");
	scanf("%d",&vetB[i]);
}

//Le os vetores A e B e os guarda no C
for(i = 0; i<200;i++)
{
	if(i%2 == 0 || i == 0)
	{
		vetC[i] = vetB[contB];
		contB++;
	}else
	{
		vetC[i] = vetA[contA];
		contA++;
	}
	
}


//Escreve o vetor A na tela
printf("\nVetorA\n ");
for(i = 0; i<100;i++)
{
	printf("[%d]", vetA[i]);
}

//Escreve o vetor B na tela
printf("\nVetorB\n ");
for(i = 0; i<100;i++)
{
	printf("[%d]", vetB[i]);
}
//Escreve o vetor C na tela
printf("\nVetorC\n ");
for(i = 0; i<200;i++)
{
	printf("[%d]", vetC[i]);
}
printf("\n");
system("pause");
return 0;


}


