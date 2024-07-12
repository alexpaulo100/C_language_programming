#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo/programa que separe os valores pares e ímpares em dois vetores
diferentes:*/
cabecalho()
{
    printf("IFSC - Instituto Federal de Santa Catarina\n");
    printf("Aluno: Alex Paulo Pereira Silva\n");
    printf("Estrutura de Dados\n");
    printf("Exercicio 6 Avaliacao\n");



}
int main(void)
{

    cabecalho();
    int par[10], impar[10], num, pares = 0, impares = 0;
    int i;

    for (;;)
    {
        printf("Digite um numero ou 0 para encerrar: ");
        scanf(" %d", &num);

        if (num == 0)
        {

            break;
        }

        if (num & 1)
        {
            impar[impares++] = num;

        }
        else
        {
            par[pares++] = num;

        }
    }

    printf(" \n");
    printf("Impares ");
    for (i = 0; i < impares; i++)
        printf(" %d\t", impar[i]);

    printf("\n");

    printf("\n");
    printf("Pares ");
    for (i = 0; i < pares; i++)
        printf(" %d\t", par[i]);

}
