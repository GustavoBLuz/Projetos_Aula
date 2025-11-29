#include <stdio.h>
//Leia 10 numeros e calcule a media de pares

int main (void)
{
   float salario;
   int departamento, controle,controle2 = 0;
   char perg;
   printf("Deseja iniciar o programa S ou N: ");
   scanf("%c", &perg);
   while(perg != 'n')
   {
   printf("\nO salario do funcionario ou 0 p/ sair: ");
   scanf("%f", &salario);
   printf("\nDigite o departamento. 1, 2 ou 3: ");
   scanf("%d", &departamento);
   if(salario < 1500 && departamento != 1)
   {
   controle2++;
   }
   fflush(stdin);
   printf("\nDeseja iniciar o programa S ou N ");
   scanf("%c", &perg);

   }
   printf("\nO numero de funcionarios do departamento 2 e 3 que recebem menos que R$1,500 eh %d\n", controle2);
   system ("pause");
   return 0;
}
