#include <stdio.h>
/*5. Ler um número inteiro e apresentar os resultados da tabuada para o número lido. A
apresentação deverá estar com o seguinte formato:
Exemplo para o número informado 2.*/


int main (void)
{
	int numero1,tabuada, produto;
    printf("Digite um numero inteiro para ler sua tabuada: ");
    scanf("%d", &numero1);
    printf("A tabuada do numero %d:\n", numero1); 
    
    for(tabuada = 1;tabuada <= 10; tabuada++)
    {
    	produto = tabuada*numero1;
	    printf("%d  X  %d  =  %d\n",tabuada,numero1,produto);
    }

    printf("\n");
    system("pause");
    return 0;	
}
