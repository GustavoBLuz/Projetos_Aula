#include <stdio.h>
/*2) Fazer um programa que leia um conjunto de 8 notas de alunos de uma disciplina, e as
armazena na variável nota. Determinar a maior nota.*/

int main(void)
{
    int i;
    float nota[8];
    float maiorNota = 0;
    
    for(i =0; i < 8; i++)
    {
          printf("\nDigite a nota do aluno: ");
          scanf("%f", &nota[i]);
    }
    
    for(i=0; i <8; i++)
    {
      if(nota[i]> maiorNota)
      {
        maiorNota = nota[i];
      }
    }
    printf("A maior nota foi: %.1f\n", maiorNota);
    system("pause");
    return 0;
    
}

