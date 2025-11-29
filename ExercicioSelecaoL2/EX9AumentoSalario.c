#include <stdio.h>
/*Uma empresa concedera um auemnto de salario aos seus funcionarios,
 de acordo com o cargo, conforme descrito abaixo.Escreva um programa que leia o salario e o codigo do cargo do funcionario, 
 e calcule o novo salario. Ser o cargo do funcionario nao estiver na tabela, ele devera receber 35,5% de aumento. mostre o salario antigo o novo e a diferença*/

int main (void)
{
  int codigo;
  float salarioAntigo,salarioAtual,salarioDiferenca;
 
  printf("Digite o codigo do cargo do funcionario: ");
  scanf("%d", &codigo);
  printf("Digite o salario do funcionario: ");
  scanf("%f", &salarioAntigo);
   
  if (codigo == 91)
    {
    	salarioAtual = (salarioAntigo*1.10);
    	salarioDiferenca = salarioAtual - salarioAntigo;
    	printf("Salario antigo: R$%.f\nSalario novo(acrescimo de 10%%): R$%.2f\nDifernca salarial: R$%.2f\n", salarioAntigo,salarioAtual,salarioDiferenca);
	}else
	{
		if(codigo == 92)
		{
    		salarioAtual = (salarioAntigo*1.20);
    		salarioDiferenca = salarioAtual - salarioAntigo;
    		printf("Salario antigo: R$%.f\nSalario novo (acrescimo de 20%%): R$%.2f\nDifernca salarial: R$%.2f\n", salarioAntigo,salarioAtual,salarioDiferenca);
		}else
		{
			if(codigo == 93)
			{
				salarioAtual = (salarioAntigo*1.30);
				salarioDiferenca = salarioAtual - salarioAntigo;
				printf("Salario antigo: R$%.f\nSalario novo (acrescimo de 30%%): R$%.2f\nDifernca salarial: R$%.2f\n", salarioAntigo,salarioAtual,salarioDiferenca);
			}else
			{
				salarioAtual = (salarioAntigo*1.35);
				salarioDiferenca = salarioAtual - salarioAntigo;
				printf("Salario antigo: R$%.f\nSalario novo (acrescimo de 35%%): R$%.2f\nDifernca salarial: R$%.2f\n", salarioAntigo,salarioAtual,salarioDiferenca);
			}
		}
	}
    system ("pause");
   return 0;
    
}
