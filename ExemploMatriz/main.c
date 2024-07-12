#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*Desenvolva um programa que possua uma matriz de
4X8 de números inteiros e some cada uma das linhas
da matriz, guardando o resultado da soma em um
vetor somalinha. A seguir, apresente os valores da
matriz e do vetor*/

void cabecalho(){
    printf("IFSC - Instituto Federal de Santa Catarina\n");
    printf("Alex Paulo Pereira Silva\n");

    printf("Tecnico em Desenvolvimento de Sistemas\n");

}


int main(){
   int matriz [4][8], somalinha[4] = {0,0,0,0};//inicialização do vetor
   int contl, contc;
   //chamada do cabeçalho
   cabecalho();
   //inicio do programa
   for(contl = 0;contl<4; contl++)
    {
    printf("Digite os elementos da %d.a linha: \n", contl +1);
    for(contc=0;contc<8;contc++)
    {
        printf("Digite o elemento da %d.a coluna: ", contc +1);
        scanf("%d", &matriz[contl][contc]);

    }
        printf("\n");
   }
   //Realizando a soma da linha
   for(contl=0;contl<4;contl++)
    for(contc=0;contc<8;contc++)
        somalinha[contl]=somalinha[contl] + matriz[contl][contc];
//Apresentação de resultados
    for(contl=0;contl<4;contl++)
        {
        printf("\n");
        for(contc=0;contc<8;contc++)
        printf("%d ", matriz[contl][contc]);
    }
   printf("\n\n");
   for(contl=0; contl<4; contl ++)
    printf("Soma da linha %d: %d\n", contl+1, somalinha[contl]);
   getch();//função aguarda entrada de dados no teclado
}
