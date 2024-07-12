#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
    printf("Alex Paulo Pereira Silva");
    printf("Estrutura de Dados");
    printf("IFSC");
    printf("Exemplos Matrizes");

}

int main()
{
    cabecalho();

    int i,j;
    int mat[3][4] = {1,15,58,67,46,59,125,78,583,1573,198,1468};
    for(i = 0; i<3; i++){
        for (int j; j<4; j++){
            printf("[l%d,c%d] = %d\n ", j, mat[i][j]);
        }

    }


    printf("Hello world!\n");
    return 0;
}
