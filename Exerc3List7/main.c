#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia uma string e converta ela para maiúsculo. Recorra à tabela ASCII
e os códigos das letras para desenvolver sua lógica.
Obs1.: Proibido usar if string[i]=='a' e também não deve ser usada a função toupper()
Obs2.: Cuidado para não converter caracteres que já estão Maiúsculos
Obs3.: veja os slides, considere o uso do intervalo dos códigos ASCII dos caracteres
para saber se é uma letra maiúscula ou minúscula*/

void cabecalho(){
printf("IFSC\n");
printf("Estrutura de Dados\n");
printf("Aluno: Alex Paulo Pereira Silva\n");
printf("Questao Avaliacao n.3\n");


}

int main()
{
    cabecalho();
    char frase[99];
    int j, i;
    printf("Digite a frase: ");
    gets(frase);

    i = strlen(frase);

    for(j=0;j<i;j++) {
        if(frase[j]>90){
            frase[j] = frase[j]-32;
        }
    }
    printf("Resultado:\n");
    puts(frase);


    return 0;
}
