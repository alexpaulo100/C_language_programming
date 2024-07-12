#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/*Crie um algoritmo/programa que leia uma string e verifique se ela é palíndroma. Uma
palavra palíndroma tem a mesma leitura, lendo de frente para trás ou de trás para frente.
Entrada Saída
paralelepipedo não é palíndroma
anilina é palíndroma*/


void cabecalho()
{
    printf("IFSC\n");
    printf("Estrutura de Dados\n");
    printf("Aluno: Alex Paulo Pereira Silva\n");
    printf("Questao Avaliacao n.9\n");


}

int main()
{

    char palavra[60], opcao;
    int cont1, cont2, tamanho, resposta=0;

    do
    {
        resposta = 0;
        cabecalho();
        printf("Digite uma palavra: ");
        gets(palavra);
        tamanho=strlen(palavra);
        cont1=tamanho;
        for(cont2=0; cont2<tamanho; cont2++)
        {
            if(palavra[cont2]==palavra[cont1-1])
                resposta++;
            cont1--;
        }
        if(resposta==tamanho)
            printf("\nA palavra %c%s%c %c um palindromo.", 34,palavra,34,130,161);
        else
            printf("\nA palavra %c%s%c nao %c um palindromo.",34,palavra,34,130,161);
        printf("\n\nDeseja executar novamente (S/N): ");
        scanf("%c",&opcao);
        fflush(stdin);
        while(opcao!='s'&& opcao!='S'&& opcao!='n'&& opcao!='N')
        {
            printf("\n\Erro! Deseja executar novamente (S/N): ");
            scanf("%c", &opcao);
            fflush(stdin);
        }

        system("cls");
    }
    while(opcao=='s'|| opcao=='S');


}
