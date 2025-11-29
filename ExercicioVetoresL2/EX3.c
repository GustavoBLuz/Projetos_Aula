#include <stdio.h>

/*3. Ler um vetor de 10 elementos inteiros. Após isto, imprimir na tela os 10 valores lidos e
o usuário poderá escolher um destes valores para ser excluído do vetor. Ler o valor
escolhido eliminá-lo do vetor. No momento da exclusão todos os valores posteriores ao
valor escolhido deverão ser reorganizados (movidos uma posição para a esquerda) a fim de
que o vetor resultante não fique com espaço em branco. A última posição deverá aparecer
com o valor zero e não com o último valor duplicado. Imprimir o novo vetor. */


int main(void)
{
    int i, num, cont = 0;
    int vetor[10], vetorN[10];
       
    for(i = 0; i < 10; i++)
    {
          printf("Digite o valor do Vetor %d/9: ",i);
          scanf("%d", &vetor[i]);     
    }
    printf("\nVetor");
     for(i = 0; i < 10; i++)
    {
        printf("[%d]", vetor[i]);
    }
    printf("\nDigite um numero para ser deletado: ");
    scanf("%d", &num);
     
     for(i = 0; i <10; i++)
    {
        if(vetor[i] != num)
        {
         vetorN[cont] = vetor[i];
         cont++;
        }else
        {
          vetorN[9] = 0;
        }
    }
    
    printf("\nVetor");
     for(i = 0; i < 10; i++)
    {
        printf("[%d]", vetorN[i]);
    }
    printf("\n");
    system("pause");
    return 0;
    
    
}
