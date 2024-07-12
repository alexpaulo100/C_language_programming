#include <stdio.h>
#include <stdlib.h>
/*Construa um programa que peça um valor inteiro para o usuário, e que contenha dois laços
aninhados, cada um deles, indo de 1 até o valor que o usuário forneceu. Dentro de cada laço,
deve haver um contador, para saber quantas vezes o laço externo foi executado, e também o
laço interno
Entrada Saída
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
