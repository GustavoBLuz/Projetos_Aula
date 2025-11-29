#include <stdio.h>
//escreva um programa que leia a nota de 15 alunos. Mostrar as notas dos alunos APR nota >= 7, alunos reprovados, e a media de APR
int main (void)
{
   float nota1, mediaAp,mediaRp;10
   float somaNotasAPR = 0, somaNotasRPR = 0;
   int controle;
   int alunosAPR = 0, alunosRPR = 0;
   
   for(controle = 1; controle <= 15; controle++)
   {
   printf("Digite a nota do aluno: ");
   scanf("%f", &nota1);
   if(nota1>=7){
   printf("Este aluno esta aprovado, sua nota foi: %.01f\n\n", nota1);
   alunosAPR++;
   somaNotasAPR = somaNotasAPR + nota1;
   }else
   {
   somaNotasRPR = somaNotasRPR + nota1;
   alunosRPR++;
   }
   }
   mediaRp = somaNotasRPR/alunosRPR;
   mediaAp = somaNotasAPR/alunosAPR;
   printf("\nO numero de alunos APR eh: %d", alunosAPR);
   printf("\nA media dos alunos APR eh: %f", mediaAp);
   printf("\nO numero de alunos RPR eh: %d", alunosRPR);
   printf("\nA media dos alunos RPR eh: %f\n", mediaRp);

   system ("pause");
   return 0;
}
