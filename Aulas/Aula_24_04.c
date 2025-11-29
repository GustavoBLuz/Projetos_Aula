#include <stdio.h>
//Leia 10 numeros e calcule a media de pares

int main (void)
{
   float salario;
   int controle,controle2 = 0;
   
   for(controle = 1; controle <= 10; controle++)
   {
   printf("\nO salario do funcionario: ");
   scanf("%f", &salario);
   if(salario > 1500)
   {
   controle2++;
   }
   }
   printf("\nO numero de funcionarios que recebem mais que R$1,500 eh %d\n", controle2);
   system ("pause");
   return 0;
}
