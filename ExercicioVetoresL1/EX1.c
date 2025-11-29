#include <stdio.h>
/*1) Escrever um programa que lê as notas dos alunos de uma determinada classe e as
armazena num vetor. Depois lista as notas que são menores que 5.0. O número de
alunos da classe é igual a 10. */




int main (void)
{
    float NotaAluno[10];
    int i;
     for(i = 0; i < 10; i++)
    {
      printf("\nDigite a nota do aluno: ");
      scanf("%f", &NotaAluno[i]); 
    }
    for(i = 0; i < 10; i++)
    {
     if(NotaAluno[i] < 5.0)
     {         
     printf("Nota do Aluno %d:  %.1f\n", i,NotaAluno[i]);
     }
    }
    system("pause");
    return 0;
    
    
    
    
    
    
}
