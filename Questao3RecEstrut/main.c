#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Crie um programa que leia o nome e a idade de várias pessoas e armazene estes dados em
um vetor de registros/structs. Quando for pressionada a tecla ENTER na entrada do nome, a
leitura deve ser interrompida.
A seguir, o programa deve ordenar estes dados por idade, e listar o resultado final.
Entrada
JOSE 44
ROBERTO 57
JOAO 32
JUDITE 53
SUELI 37
CARMEN 49
<enter>
saida
JOAO 32
SUELI 37
JOSE 44

CARMEN 49
JUDITE 53
ROBERTO 57*/


void cabecalho()
{
    printf("IFSC - Instituto Federal de Santa Catarina\n");
    printf("Disciplina: Estrutura de Dados\n");
    printf("Aluno: Alex Paulo Pereira Silva\n");
    printf("Recuperacao Questao 3\n");


}


typedef struct
{
    char nome[50];
    int idade;

} tPessoa;

int main()
{
#define max 3
    tPessoa vetPess[max];
    int i, aux, contador;

    cabecalho();
    //entrada dos dados

    for(i=0; i<max; i++)
    {
        printf("%da. pessoa:\n", (i+1));

        printf("Nome..: ");
        scanf("%s%*c", &vetPess[i].nome);

        printf("Idade..: ");
        scanf("%d%*c", &vetPess[i].idade);
    }


    // ordenar as idades em ordem crescente

    for(contador = 1 ; contador<max; contador++)
{
    for(i = 0; i<max - 1; i++)
    {
        if(vetPess[i].idade>vetPess[i+1].idade)
        {
            aux = vetPess[i].idade;
            vetPess[i].idade=vetPess[i+1].idade;
            vetPess[i+1].idade=aux;

        }
    }
}

    printf("Ordem das idades das pessoas:\n");
    for(i=0; i<max; i++)
{
    printf("%d\n", vetPess[i].idade);

}

    printf("\nPressione ENTER para sair\n");
    getchar();
    return 0;
}








