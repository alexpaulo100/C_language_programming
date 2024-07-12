#include <stdio.h>
#include <stdlib.h>

/*Disciplina: Programação e Algoritmos I Professor: Davi Bernardo
Aluno:__Alex__________________________________ Data:__/__/____
Lista de exercícios - Comandos de repetição
1. Escreva um algoritmo que calcule a média de salários de uma empresa, pedindo
ao usuário a quantidade de funcionários, o código e o salário de cada funcionário.
O algoritmo deve devolver:
○ A média de salários,
○ O código e o salário do funcionário que ganha mais
○ O código e o salário do funcionário que ganha menos*/

int main()
{
    int quant, i;
    float salario, soma = 0, salarioMaior =0, salarioMenor = 99999;

    do{
    printf("Qual a quantidade de funcionarios? \n");
    scanf("%d", &quant);
    }while(quant<0);

    for(i = 1; i <=quant; i++){
        printf("%d salario: ", i);
        scanf("%f", &salario);

        soma += salario;
        if(salarioMenor > salario)
            salarioMenor = salario;
        if(salarioMaior < salario)
            salarioMaior = salario;

    }
    printf("A media dos salarios = R$%.2f\n", soma / quant);
    printf("Maior salario = R$%.2f\n", salarioMaior);
     printf("Menor salario = R$%.2f\n", salarioMenor);

}
