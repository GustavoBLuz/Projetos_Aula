#include <stdio.h>
/*Ler as tres notas obtidas por um aluno nas tres verificacoes e a media dos exercicios que fazem parte da avaliacao. Calcular a media de aproveitamento, usando a formula:
(N1 + N2 *2 + N3*3 + MediaExercicios)/7
Informar o conceito de acordo com a tabela:

Media de aproveitamento: Conceito
>= 9.0 A
>= 7.5 e < 9.0 B
>= 6.0 e <7.5 C
<6.0 D*/

int main (void)
{
  float nota1,nota2,nota3,mediaEx,media;
 
  printf("Digite a primeira nota do aluno: ");
  scanf("%f", &nota1);
  printf("Digite a segunda nota do aluno: ");
  scanf("%f", &nota2);
  printf("Digite a terceira nota do aluno: ");
  scanf("%f", &nota3);
  printf("Digite a media dos exercicios: ");
  scanf("%f", &mediaEx);
  
  media = ((nota1 + (nota2*2) + (nota3*3) + mediaEx)/7);
   
  if (media >= 9)
    {
    	printf("Aluno ficou com o conceito A.\n");
	}else
	{
		if(media >= 7.5 && media < 9)
		{
			printf("Aluno ficou com o conceito B.\n");
		}else
		{
			if(media >= 6.0 && media < 7.5)
			{
				printf("Aluno ficou com o conceito C.\n");
			}else
			{
				if(media < 6)
				{
				printf("Aluno ficou com o conceito D.\n");
				}
			}
		}
	}

    system ("pause");
   return 0;
    
}
