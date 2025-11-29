#include <stdio.h>
/*4. Alterar o exercício anterior, mas agora, considere que o segundo valor lido poderá ser
maior ou menor que o primeiro valor lido.*/

int main (void)
{
	
	int inicioInter,fimInter;
    printf("Digite um valor inteiro para o inicio do intervalo: ");
    scanf("%d", &inicioInter);
    printf("Digite um valor inteiro para o fim do intervalo: ");
    scanf("%d", &fimInter);
     printf("Os numeros impares entre os valores %d e %d:\n", inicioInter, fimInter); 
     if(inicioInter < fimInter)
     {
	    for(inicioInter;inicioInter <= fimInter; inicioInter++)
	    {
		    if(inicioInter%2==1)
		    {
		     printf("%d ", inicioInter); 
		    }
	    }
	}else
	{
		 for(fimInter;fimInter <= inicioInter; fimInter++)
	    {
		    if(fimInter%2==1)
		    {
		     printf("%d ", fimInter); 
		    }
	    }
	}
    printf("\n");
    system("pause");
    return 0;	
}
