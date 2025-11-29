#include <stdio.h>
/*Faca um algoritimo para ler a cor de um sinal de transito ( V verde A amarelo E vermelho, e exibir respectivalmente as mensagens siga atencao ou pare.
caso o usuario informe uma letra invalida, informe o usuario*/

int main (void)
{
  char sinal;
 
  printf("Digite a Cor do sinal a ser lida (V/E/A): ");
  scanf("%c", &sinal);
   
  if (sinal == 'v' || sinal == 'V')
    {
    	printf("Siga.\n");
	}else
	{
		if(sinal == 'A' || sinal == 'a')
		{
			
    		printf("Atencao.\n");
		}else
		{
			if(sinal == 'E' || sinal == 'e')
			{
				printf("Pare.\n");
			}else
			{
				printf("Letra invalida, tente novamente.\n");
			}
		}
	}
    system ("pause");
   return 0;
    
}
