#include <stdio.h>
/*3. Ler dois valores inteiros e escrever os inteiros ímpares entre os dois valores lidos.
Considere que o segundo valor lido será sempre maior que o primeiro valor lido.*/


int main (void)
{
	int inicioInter,fimInter;
    printf("Digite um valor inteiro para o inicio do intervalo: ");
    scanf("%d", &inicioInter);
    printf("Digite um valor inteiro para o fim do intervalo: ");
    scanf("%d", &fimInter);
     printf("Os numeros impares entre os valores %d e %d:\n", inicioInter, fimInter); 
    for(inicioInter;inicioInter <= fimInter; inicioInter++)
    {
    if(inicioInter%2==1)
    {
     printf("%d ", inicioInter); 
    }
    }
    printf("\n");
    system("pause");
    return 0;
	
}
