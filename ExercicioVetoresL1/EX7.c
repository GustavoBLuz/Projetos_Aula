#include <stdio.h>
/*7) Fazer um programa que tem dois vetores do mesmo tamanho (6). O usuário fornecerá
os dados do primeiro, e depois deverá ser armazenado e exibido o valor do segundo
vetor que é o valor do primeiro vetor somado a posição do elemento. */

int main(void)
{
    int i;
    int vetor1[6];
    int vetor2[6];
    
    for(i=0;i <6; i++)
    {
              printf("Digite o valor: ");
              scanf("%d", &vetor1[i]);
              
              vetor2[i] = vetor1[i] + i;
    }
    printf("\n");
    for(i=0; i < 6; i++)
    {
             printf("Valor do vetor 2[%d]: %d\n", i, vetor2[i]);
    }
    system("pause");
    return 0;
}
