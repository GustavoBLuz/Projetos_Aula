#include <stdio.h>

/*4. Escrever um programa que leia uma matriz de ordem 3 X 3. 
Após percorrer esta matriz para encontrar ocorrências do número 20. 
Guardar as posições em vetores: um para linha e outro para coluna. 
Ao final do processo exibir as posições (linha e coluna) onde o número 20 está posicionado. 
Se não houve ocorrências, mostrar mensagem adequada.*/

int main(void)
{
    int matriz[3][3];
    int l, c;
    int vetorL[9];
    int vetorC[9];
    int contL = 0, contC = 0;
    
    //Lê a matriz
    for(l=0; l<3; l++)
    {
         for(c=0; c<3; c++)
         {
             printf("Digite um valor: ");         
             scanf("%d", &matriz[l][c]);
         }       
    }  
    //Percorre a matriz em busca do n° 20 e guarda no vetor
    for(l=0; l<3; l++)
    {
        for(c=0; c<3; c++)
        {
           if(matriz[l][c] == 20)
           {
              vetorL[contL] = l;
              vetorC[contC] = c;
              contL++;
              contC++;
          }
       }       
    }  
    //Caso haja um n° 20, printa a posição da matriz
    if(contL != 0 && contC != 0)
    {
             printf("Posicoes com o numero 20: \n");
             for(l=0; l < contL; l++)
             {
                printf("Posicao L: %d C: %d\n", vetorL[l],vetorC[l]);
             }
    }else
    {
         printf("Nao tem nenhum numero 20");
    }  
    
    system("pause");
    return 0;
    
}
