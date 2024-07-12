#include <stdio.h>
#include <stdlib.h>

/*Elabore um programa em C que determine a soma das colunas e das linhas da matriz abaixo
Entrada Saída
3 4 5
4 5 9
1 2 4
7 2 2
Soma Linhas
12
18
7
11
Soma Colunas
15 13 20*/

void cabecalho()
{

    printf("IFSC\n");
    printf("Estrutura de Dados\n");
    printf("Aluno: Alex Paulo Pereira Silva\n");
    printf("Avaliacao 6 (Matrizes) questao n.12\n");
    printf("\n");
}

int main()
{
    cabecalho();
    {
        int D[4][3], i=0, j=0, soma1=0,soma2=0, somaLinhas[4], somaColunas[4];

        for(i=0; i<4; i++)
        {
            for(j=0; j<3; j++)
            {

                scanf("%d",&D[i][j]);
            }
        }

        for(i=0; i<4; i++)
        {
            soma1=0;
            for(j=0; j<3; j++)
            {
                soma1+=D[i][j];
            }
            somaLinhas[i] = soma1;
        }

        for(j=0; j<3; j++)
        {
            soma2=0;
            for(i=0; i<4; i++)
            {
                soma2 += D[i][j];
            }
            somaColunas[j] = soma2;
        }
        printf("\n\nVetor com a soma das linhas:\n");
        for(i = 0; i < 4; i++)
        {
            printf("Linha %d: %d\n", i, somaLinhas[i]);
        }

        printf("\n\nVetor com a soma das colunas:\n");
        for(j = 0; j < 3; j++)
        {
            printf("Coluna %d: %d\n", j, somaColunas[j]);
        }

        return 0;
    }
}

