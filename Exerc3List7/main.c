#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que leia uma string e converta ela para mai�sculo. Recorra � tabela ASCII
e os c�digos das letras para desenvolver sua l�gica.
Obs1.: Proibido usar if string[i]=='a' e tamb�m n�o deve ser usada a fun��o toupper()
Obs2.: Cuidado para n�o converter caracteres que j� est�o Mai�sculos
Obs3.: veja os slides, considere o uso do intervalo dos c�digos ASCII dos caracteres
para saber se � uma letra mai�scula ou min�scula*/

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
