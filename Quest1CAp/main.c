#include <stdio.h>
#include <stdlib.h>

int main()
{
   {
    int linhas;
    printf("Digite a quantidade de linhas da escada: ");
    scanf("%d", &linhas);
    int i;
    for (i = 1; i <= linhas; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
}
