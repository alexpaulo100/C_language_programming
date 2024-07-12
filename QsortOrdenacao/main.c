#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


struct pessoas{

    char nome[30];
    int idade;
};
int main()
{

    struct pessoas[50];
    int count;

     do{

    printf("Digite o nome: ");
    scanf("%c%*c", &idadePessoas[count].nome);

    printf("Digite a idade: ");
    scanf("%d%*c", &idadePessoas[count].idade);

    fgets(idadePessoas[count].nome, 30, stdin);
     idadePessoas[count].nome[strcspn(idadePessoas[count].nome, "\n")] = '\0';
    count++;
    }while(idadePessoas[count-1].nome != 0);

    for (int i = 0; i < count; i++){

    printf("\nPessoas %d: \n", i);
    printf(" Nome: %c\n", idadePessoas[i].nome);
    printf(" Idade: %d\n", idadePessoas[i].idade);


    }

    printf("\nPressione ENTER para sair\n");
    getchar();

    return 0;
}
