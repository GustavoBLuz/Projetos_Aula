#include <stdio.h>

/*6. Fazer um programa para preencher um vetor de 15 posições com números entre 0 a 30.
Após, ler números inteiros e procurá-los no vetor até que seja digitado o número 99.
Quando o loop de pesquisa encerrar, então mostrar quantas vezes você acertou os números
do vetor. Lembre-se de que o número pode estar repetido dentro do vetor, considerar
acertos tantas quantas forem as vezes que o número estiver no vetor. Ao final do processo,
exibir o vetor e o número de acertos do jogador.*/

int main(void)
{
    int vetor[15] = {0,1,16,30,17,4,6,29,21,14,12,3,19,20,1};
    int num = 0,i, acertos = 0;
    while(num != 99)
    {
              printf("Digite 99 para sair\n");
              printf("Digite um numero: ");
              scanf("%d", &num);
              
              for(i = 0; i < 15; i++)
              {
                    if(vetor[i] == num)
                    {
                        acertos++;
                    }
              }
    }
    printf("\nVetor");
    for(i = 0; i < 15; i++)
    {
       printf("[%d]", vetor[i]);     
    }
    printf("\nNumero de Acertos: %d\n", acertos);

    system("pause");
    return 0;
    
}
