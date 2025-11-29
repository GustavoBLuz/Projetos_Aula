#include <stdio.h>
/*3) Ler uma variável de 10 elementos numéricos e verificar se existe elementos iguais a 30.
Se existirem, escrever as posições em que estão armazenadas. */


int main(void)
{
    int i;
    int variavel[10];
    
    for(i = 0; i < 10; i++)
    {
    printf("\nDigite o valor para ser guardado: ");
    scanf("%d", &variavel[i]);
    }
    
    for(i = 0; i < 10; i++)
    {
     if(variavel[i] == 30)
     {
                    printf("\nPosicao onde o valor eh igual  a 30: %d", i);
     }
    }
    printf("\n");
    system("pause");
    return 0;
}
