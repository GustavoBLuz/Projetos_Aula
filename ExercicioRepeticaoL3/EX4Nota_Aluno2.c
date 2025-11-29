#include <stdio.h>
/*4. Acrescente uma mensagem ‘NOVO CALCULO (S/N)?” ao final do exercício anterior.
Se for respondido “S” deve retornar e executar um novo cálculo, caso contrário deverá
encerrar o programa.*/

int main (void)
{    
    float nota1, nota2, media;
    char resposta;
    do{
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
    printf("\n\nNOVO CALCULO (S/N): \n");
    fflush(stdin);
    scanf("%c", &resposta);s
    }while(resposta == 's' || resposta == 'S');
    system ("pause");
    return 0;
}
