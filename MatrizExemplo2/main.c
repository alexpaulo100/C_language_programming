#include <stdio.h>
#include <stdlib.h>

int main(){
   int mat[3][2], i,j;
   for(i=0;i<3;i++){
    for(j=0;j<2;j++){
        printf("Valor %d,%d ",i,j);
        scanf("%d", &mat[i][j]);

    }
   }
    for(i= 1;i<3;i++){
    for(j=0;j<2;j++){
        printf("%d ",mat[i][j]);
    }
    printf("\n");

}
}
