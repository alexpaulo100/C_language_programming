#include <stdio.h>
#include <stdlib.h>

/*Faça uma programa em C que determine a soma dos elementos da diagonal principal e da
sua diagonal secundária de uma matriz 5x5*/

void cabecalho()
{

    printf("IFSC\n");
    printf("Estrutura de Dados\n");
    printf("Aluno: Alex Paulo Pereira Silva\n");
    printf("Avaliacao 6 (Matrizes) questao n.08\n");
    printf("\n");
}
int main()
{
    cabecalho();
    int D[5][5], i=0, j=0, soma1=0,soma2=0,x=5;

    for(i=0; i<5; i++)

    {
        x--;
        for(j=0; j<5; j++)
        {

            scanf("%d",&D[i][j]);
        }
        soma1=soma1+D[i][i];
        soma2=soma2+D[i][x];
    }
    printf("\n\nSoma diagonal Principal:\t%d",soma1);
    printf("\n\nSoma diagonal Secundaria:\t%d",soma2);
}

