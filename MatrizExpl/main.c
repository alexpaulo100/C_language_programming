#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int mat[3][2] = {
        {1,6},
        {2,4},
        {3,5}};

    for(i=0; i<3;i++){
        for(j=0; j<2;j++){
            printf("linha %d colunas %d = %d\n", i,j, mat[i][j]);


        }
    }

}
