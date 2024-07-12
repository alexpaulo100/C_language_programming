#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define linhas 2
#define colunas 3

/*Crie um programa que leia os valores de duas matrizes 2x3.
Em seguida, ofereça um menu com as seguintes opções:
a) somar as duas matrizes
b) subtrair a segunda matriz da primeira
c) adicionar um valor informado pelo usuário à primeira matriz
a todos os elementos da matriz
d) sair
→ Nos casos (a), (b), (c), o resultado deve ser impresso na tela*/

void cabecalho()
{
    printf("IFSC - Instituto Federal de Santa Catarina\n");
    printf("Disciplina: Estrutura de Dados\n");
    printf("Aluno: Alex Paulo Pereira Silva\n");
    printf("Recuperacao Questao 1\n");


}


int main()
{
    cabecalho();
    setlocale(LC_ALL, "Portuguese");

    int matriz1[linhas][colunas];
    int matriz2[linhas][colunas];
    int matrizSoma[linhas][colunas];
    int matrizSub[linhas][colunas];
    int matrizAd3[linhas][colunas];

    int Sel;
    int VarLoop = 1;

    printf("\n\n>>MATRIZ DE INTEIROS: tamanho %d X %d\n", linhas, colunas);

    printf("\nPreenchendo a Matriz 1: \n");
    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < colunas; j++)
        {
            printf("Digite o numero [%d,%d]: ", i+1, j+1);
            scanf("%d%*c", &matriz1[i][j]);

        }
    }

    printf("\nPreenchendo a Matriz 2: \n");
    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < colunas; j++)
        {
            printf("Digite o numero [%d,%d]: ", i+1, j+1);
            scanf("%d%*c", &matriz2[i][j]);
        }

    }

    printf("\nMatriz 1: \n");
    for(int i = 0; i < linhas; i++)
    {
        printf("| ");
        for(int j = 0; j < colunas; j++)
        {
            printf("%d | ", matriz1[i][j]);

        }
        printf("\n");
    }

    printf("\nMatriz 2: \n");
    for(int i = 0; i < linhas; i++)
    {
        printf("| ");
        for(int j = 0; j < colunas; j++)
        {
            printf("%d | ", matriz2 [i][j]);

        }
        printf("\n");
    }
    printf("\n\nPressione ENTER para continuar\n");
    getchar();

    while(VarLoop == 1)
    {

        int matrizAux = 0;

        printf("\n>>>>> CALCULADORA <<<<<\n ");
        printf("Menu de Operacoes:\n");
        printf("\n 1 - SOMA\n 2 - SUBTRACAO\n 3 - ADICIONAR 3\n 4 - SAIR\n");
        printf("\nSelecione a operacao pelo numero correspondente no MENU: ");
        scanf("%d%*c", &Sel);

        switch (Sel)
        {
        case 1:
            for(int i = 0; i < linhas; i++)
            {
                for(int j = 0; j < colunas; j++)
                {
                    matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
                }
            }

            printf("\nA Matriz SOMA: \n");
            for(int i = 0; i < linhas; i++)
            {
                printf("| ");
                for(int j = 0; j< colunas; j++)
                {
                    printf("%d | ", matrizSoma[i][j]);
                }
                printf("\n");
            }
            break;

        case 2:
            for(int i = 0; i < linhas; i++)
            {
                for(int j = 0; j < colunas; j++)
                {
                    matrizSub[i][j] = matriz1[i][j] - matriz2[i][j];
                }
            }
            printf("\nA Matriz SUBTRAÇAO: \n");
            for(int i = 0; i < linhas; i++)
            {
                printf("| ");
                for(int j = 0; j< colunas; j++)
                {
                    printf("%d | ", matrizSub[i][j]);
                }
                printf("\n");
            }
            break;

        case 3:
            for(int i = 0; i < linhas; i++)
            {
                for(int j = 0; j < colunas; j++)
                {
                    matrizAd3[i][j] = matriz1[i][j] + matriz2[i][j] + 3;
                }
            }
            printf("\nA Matriz Adiciona 3: \n");
            for(int i = 0; i < linhas; i++)
            {
                printf("| ");
                for(int j = 0; j< colunas; j++)
                {
                    printf("%d | ", matrizAd3[i][j]);
                }
                printf("\n");
            }
            break;

        case 4:

            VarLoop = 0;
            printf("A calculadora sera encerrada. \n");

            break;

        default:
            printf("Nenhuma operacao foi realizada.\n");
        }
        printf("\n\nPressione ENTER para continuar.\n");
        getchar();



    }
    printf("\n\nPressione ENTER para sair.\n");
    getchar();

    return 0;

}









