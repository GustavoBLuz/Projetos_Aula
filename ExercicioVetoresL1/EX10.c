#include <stdio.h>
/*10) Faça um programa para ler um vetor de 20 elementos numéricos inteiros. Após, exibir
as posições onde estão guardados os números ‘4’. Se não houver ocorrências deste
número, então exibir mensagem adequada.*/

int main(void)
{
    int vetor[20];
    int i, cont =0;
    
    for(i=0; i<20; i++)
    {
             printf("Digite um valor: ");
             scanf("%d", &vetor[i]);
    }
      
    for(i=0; i<20; i++)
    {
             if(vetor[i] == 4)
             {
              printf("Numero 4 na posicao Vetor[%d]: %d\n", i, vetor[i]);
              cont =1; 
             }            
    }
    
    if(cont == 0)
    {
     printf("Nao ha numeros '4' dentro deste vetor.\n");                
    }
    system("pause");
    return 0;
    
    
}
