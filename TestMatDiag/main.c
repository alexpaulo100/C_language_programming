#include <stdio.h>
#include <stdlib.h>
#define lin 6
#define col 6

int main()
{
    int mat[lin][col] = {
      1,2,3,4,5,6,
      6,5,4,3,2,1,
      1,2,3,4,5,6,
      6,5,4,3,2,1,
      1,2,3,4,5,6,
      6,5,4,3,2,1};


        int i, j;

        for(i=1;i<lin;i++){
            for(j=1;j<col;j++){
                if(i+j<lin-1){
                 printf("%d ",mat[i][j]);
                }

                else{
                    printf("* ");
                }
            }
            printf("\n");
        }


        return 0;

}


