#include <stdio.h>
#include <stdlib.h>

/*Faça um programa em linguagem C que determine a soma de 2 matrizes A e B:
Entrada Saída
A B
3 4 8 9
4 5 1 2
7 3 1 7
R
11 13
5 7
8 10*/

void cabecalho(){

    printf("IFSC\n");
    printf("Estrutura de Dados\n");
    printf("Aluno: Alex Paulo Pereira Silva\n");
    printf("Avaliacao 6 (Matrizes) questao n.07\n");
    printf("\n");
}

int main()
{
    cabecalho();

    int tam = 2;
    int l, c, A[3][2], B[3][2], C[3][2];


    for(l = 0; l < 3; l++){
        for(c = 0; c < 2; c++){
                printf("Digite a linha %d da coluna %d da Matriz A: ", l+1, c+1);
                scanf("%d",&A[l][c]);
                printf("Digite a linha %d da coluna %d da Matriz B: ", l+1, c+1);
                scanf("%d",&B[l][c]);
                C[l][c] = A[l][c] + B[l][c];
        }
    }

    printf("\nMatriz A:\n");
    for(l = 0; l < 3; l++){
        for(c = 0; c < 2; c++)
            printf("%3d ", A[l][c]);
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for(l = 0; l < 3; l++){
        for(c = 0; c < 2; c++)
            printf("%3d ", B[l][c]);
        printf("\n");
    }

    printf("\nMatriz C:\n");
    for(l = 0; l < 3; l++){
        for(c = 0; c < 2; c++)
            printf("%3d ", C[l][c]);
        printf("\n");
    }

    return 0;
}


