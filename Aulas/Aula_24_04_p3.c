#include <stdio.h>
//Leia 10 numeros e calcule a media de pares

int main (void)
{
   float salario;
   int departamento,controle2 = 0;
   printf("Informe o primeiro valor do salario ou 0 p/ sair: ");
   scanf("%f", &salario);
   while(salario!=0)
   {
   printf("Informe o departamento do funcionario, 1,2 ou 3: ");
   scanf("%d", &departamento);
   if(salario < 1000 && departamento != 1)
   {
   controle2++;
   }
   printf("\nO salario do funcionario ou 0 p/ sair: ");
   scanf("%f", &salario);
   }
   printf("\nO numero de funcionarios do departamento 2 e 3 que recebem menos que R$1,000 eh %d\n", controle2);
   system ("pause");
   return 0;
}
