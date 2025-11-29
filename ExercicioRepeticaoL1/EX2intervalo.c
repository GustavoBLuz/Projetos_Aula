#include <stdio.h>
/*2. Escrever um programa que calcule todos os números divisores por certo valor indicado
pelo usuário (o resto da divisão por este número deve ser igual a zero), compreendidos em
um intervalo também especificado pelo usuário. O usuário deve entrar com um primeiro
valor correspondente ao divisor e após ele vai fornecer o valor inicial do intervalo, seguido
do valor final deste intervalo. Exemplo de tela de saída:
Entre com o valor do divisor: 3
Inicio do intervalo: 17
Fim do intervalo: 29
Números divisiveis por 3 no intervalo de 17 a 29 :
18 21 24 27*/

int main (void)
{
    int divisor, inicioInter,fimInter;
    printf("Digite um valor inteiro para o divisor: ");
    scanf("%d", &divisor);
    printf("Digite um valor inteiro para o inicio do intervalo: ");
    scanf("%d", &inicioInter);
    printf("Digite um valor inteiro para o fim do intervalo: 3");
    scanf("%d", &fimInter);
    for(inicioInter;inicioInter >= fimInter; inicioInter++)
    {
    if(inicioInter%divisor == 0)
    {
     printf("Numero e divisivel por %d no intervalo de %d e %d:", divisor, inicioInter, fimInter); 
    }
    }
    system("pause");
    return 0;
}
