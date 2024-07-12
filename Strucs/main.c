#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct MyStruct{
    char turma;
    int numero_chamada;
    char nome[50];
};
int main()
{
    struct MyStruct aluno1, aluno2;
    setlocale(LC_ALL,"Portuguese.Brazil");

    //cadastrar o aluno 1

    printf("Digite a turma do aluno 1: ");
    scanf("%c%*c", &aluno1.turma);

    printf("Digite o numero de chamada do aluno 1: ");
    scanf("%d%*c", &aluno1.numero_chamada);

    printf("Digite o nome do aluno 1: ");
    fgets(aluno1.nome, 50, stdin);
    aluno1.nome[strcspn(aluno1.nome, "\n")] = '\0';

    //imprimindo o aluno 1
    printf("\nALUNO 1: \n");
    printf("TURMA: %c\n", aluno1.turma);
    printf("Numero de chamada: %d\n", aluno1.numero_chamada);
    printf("Aluno: %s\n", aluno1.nome);

    // atribuicao

    aluno2 = aluno1;

    //imprimindo o aluno 2

    printf("\nALUNO 2: \n");
    printf("TURMA: %c\n", aluno2.turma);
    printf("Numero de chamada: %d\n", aluno2.numero_chamada);
    printf("Aluno: %s\n", aluno2.nome);

    printf("\nPressione ENTER para sair\n");
    getchar();

    return 0;
}
