#include <stdio.h>
/*3. Escreva um programa para ler as notas da primeira e segunda avaliação de um aluno,
calcule e imprima a média (simples) semestral. Só devem ser aceitos valores válidos
durante a leitura (0 a 10) para cada nota.*/

int main (void)
{
    float nota1, nota2, media;
    
    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);
    while(nota1 > 10 || nota1 < 0)
    {
     printf("\nDigite um valor entre 0 e 10 para a nota.");
     printf("\nDigite a primeira nota do aluno: ");
     scanf("%f", &nota1);
    }    
     printf("Digite a segunda nota do aluno: ");
     scanf("%f", &nota2);
     while(nota2 > 10 || nota2 < 0)
    {
     printf("\nDigite um valor entre 0 e 10 para a nota.");
     printf("\nDigite a segunda nota do aluno: ");
     scanf("%f", &nota2);
    }    
    media = ((nota1+nota2)/2);
    printf("\nA media das notas eh: %.1f\n", media);
    system ("pause");
    return 0;
}
