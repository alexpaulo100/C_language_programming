#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

/*Fa�a um algoritmo/programa que leia v�rios valores e armazene-os em uma lista at� que o
usu�rio digite um valor negativo. Em seguida o programa deve ordenar o vetor usando o
m�todo da bolha e no final mostrar os n�meros em ordem crescente.
Entrada Sa�da
5 4 3 7 2 9 8 1 -1  | 1 2 3 4 5 7 8 9*/


void cabecalho()
{
    printf("IFSC\n");
    printf("Estrutura de Dados\n");
    printf("Aluno: Alex Paulo Pereira Silva\n");
    printf("Avaliacao 4 (Lacos aninhados) questao n.1\n");
}
int main()
{
    cabecalho();
    setlocale(LC_ALL, "");
    int numeros[TAM];
    int i, aux, contador;
    printf("Entre com os n�meros:\n");
    for (i = 0; i < TAM; i++)

 {
        scanf("%d", &numeros[i]);
    }


    printf("Ordem de entrada dos numeros no vetor:\n");
    for (i = 0; i < TAM; i++)
    {
        printf("%4d", numeros[i]);
    }

    for (contador = 1; contador < TAM; contador++)
    {
        for (i = 0; i < TAM - 1; i++)
        {
            if (numeros[i] > numeros[i + 1])
            {
                aux = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = aux;
            }


        }
    }
    printf("\nNumeros em ordem crescente:\n");
    for (i = 0; i < TAM; i++)
    {
        printf("%4d", numeros[i]);
    }
    printf("\n");
    return 0;
}





