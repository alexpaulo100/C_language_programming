#include <stdio.h>
#include <stdlib.h>
/*Construa um programa que pe�a um valor inteiro para o usu�rio, e que contenha dois la�os
aninhados, cada um deles, indo de 1 at� o valor que o usu�rio forneceu. Dentro de cada la�o,
deve haver um contador, para saber quantas vezes o la�o externo foi executado, e tamb�m o
la�o interno
Entrada Sa�da
3 Externo 3
Interno 9*/

void cabecalho()
{
    printf("IFSC\n");
    printf("Estrutura de Dados\n");
    printf("Aluno: Alex Paulo Pereira Silva\n");
    printf("Exercicio 1: \n");

}

int main()
{
    int i, j;
    int contador, num;
    printf("Entre com o numero: ");
    scanf("%d", &num);

    for(i=0; i<num; i++ )
        for(j=0; j<contador; j++)
    cabecalho();

    return 0;
}
