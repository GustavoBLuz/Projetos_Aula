#include <stdio.h>
//Leia 10 numeros e calcule a media de pares

int main (void)
{
   float salario;
   int controle,controle2 = 0;
   char perg;
   printf("Deseja iniciar o programa S ou N");
   scanf("%c", &perg);
   while(prg != 'n')
   {
   printf("\nO salario do funcionario ou 0 p/ sair: ");
   scanf("%f", &salario);
   if(salario < 1500)
   {
   controle2++;
   }

   }
   printf("\nO numero de funcionarios que recebem mais que R$1,500 eh %d\n", controle2);
   system ("pause");
   return 0;
}
