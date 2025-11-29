#include <stdio.h>
/*6) Ler um vetor que contenha as notas de uma turma de 6 alunos. Calcular a média destes
6 alunos e contar quantos alunos obteve nota acima desta média calculada. Escrever a
média da turma e o resultado da contagem.*/

int main(void)
{
    int i, cont =0;
    float nota[6];
    float media;
    
    for(i=0; i < 6; i++)
    {
             printf("Digite a nota do aluno: ");
             scanf("%f", &nota[i]);
             media+= nota[i];
    }
    media = media/6;
    
    for(i=0; i< 6; i++)
    {
       if(nota[i] < media)
       {
                  cont++;
       }
    }
    
    printf("Media da turma: %f\nQuantidade de alunos que ficaram acima da media: %d\n", media,cont);
    
    system("pause");
    return 0;
}
