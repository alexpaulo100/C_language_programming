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

    struct MyStruct alunos [100];
    int count;

    setlocale(LC_ALL,"Portuguese.Brazil");

    do{

    printf("Digite a letra da turma: ");
    scanf("%c%*c", &alunos[count].turma);

    printf("Digite o numero de chamada: ");
    scanf("%d%*c", &alunos[count].numero_chamada);

    printf("Digite o nome do aluno: ");
    fgets(alunos[count].nome, 50, stdin);
    alunos[count].nome[strcspn(alunos[count].nome, "\n")] = '\0';
    count++;
    }while(alunos[count-1].numero_chamada != 0);

    for (int i = 0; i < count; i++){

    printf("\nALUNO %d: \n", i);
    printf("TURMA: %c\n", alunos[i].turma);
    printf("Numero: %d\n", alunos[i].numero_chamada);
    printf("Aluno: %s\n", alunos[i].nome);

    }


    printf("\nPressione ENTER para sair\n");
    getchar();
    return 0;
}
