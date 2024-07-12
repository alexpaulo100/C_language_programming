#include <stdio.h>
#include <stdlib.h>

void cabecalho()
{
    printf("IFSC\n");
    printf("Estrutura de Dados\n");
    printf("Aluno: Alex Paulo Pereira Silva\n");
    printf("Exemplo em aula desenhar um triangulo usando caracteres: \n");


}

int main()
{
    cabecalho();
    int i, j;
    for(i=1; i<=10; i++){
        for(j=1; j<=i;j++){
            printf("* ");
        }

    printf("\n");
    }
}
