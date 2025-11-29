#include <stdio.h>
/*4) Leia 4 números, coloque-os em um vetor e mostre-os na ordem inversa de sua leitura. */


int main(void)
{
    float numero[4];
    int i;
    
    for(i=0; i<4; i++)
    {
             printf("\nDigite um valor: ");
             scanf("%f", &numero[i]);
    }
    
    for(i=3; i>=0; i--)
    {
             printf("Valor: %f\n", numero[i]);
    }
    system("pause");
    return 0;
}
