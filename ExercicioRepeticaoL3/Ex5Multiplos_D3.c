#include <stdio.h>
//5. Exibir os números múltiplos de 3 entre 3 e 40.


int main(void)
{
    int controle;
    printf("Valores que sao multiplos de 3 entre 3 e 40:\n");    
    for(controle = 4; controle < 40; controle++);
    {
        if(controle%3 == 0)
        {
        printf("%d", controle);
        }
    }
    printf("\n");
    system("pause");
    return 0;
}
