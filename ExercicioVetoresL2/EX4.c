#include <stdio.h>

/*4. Uma empresa distribuidora de produtos, tem disponível para o abastecimento de seus
clientes 5 produtos, conforme exemplo do quadro abaixo:
Produto 1 |Produto 2 |Produto 3 |Produto 4 |Produto 5
1200      |3700      |3737      |5214      |9612
É fornecido também o custo de cada produto armazenado.
2.30      |1.99      |3.55      |0.65      |9.21
Fazer um programa que:
- Leia o estoque inicial de cada produto;
- Leia o custo de cada produto;
- Escreva o custo total dos produtos da distribuidora;
- Escreva o custo total por produto armazenado. */


int main(void)
{
    int i;
    int vetorP[5];
    float vetorC[5], custo, custoT;
    
    for(i = 0; i < 5; i++)
    {      
    printf("Digite o estoque do produto %d/4: ", i);
    scanf("%d", &vetorP[i]);
    printf("Digite o preco do produto %d/4: ", i);
    scanf("%f", &vetorC[i]);
    }
    for(i = 0; i < 5; i++)
    {
     custoT += vetorP[i]*vetorC[i];
     custo = vetorP[i]*vetorC[i];
     printf("\nCusto total por produto %d : R$ %.2f", i, custo);
    }
    
    
    printf("\nCusto total dos produtos  : R$%.2f\n", custoT);
    
    
    system("pause");
    return 0;
    
    
}
