#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo/programa que separe os valores pares e ímpares em dois vetores
diferentes:
Entrada Saída
1 2 1
3 7 2
4 1 5
Impares 1 1 3 7 1 5
Pares 2 2 4*/

void cabecalho(){

    printf("IFSC\n");
    printf("Estrutura de Dados\n");
    printf("Aluno: Alex Paulo Pereira Silva\n");
    printf("Avaliacao 6 (Matrizes) questao n.06\n");
    printf("\n");
}


int main()
{
    cabecalho();
    int par[10], impar[10], num, pares = 0, impares = 0;
    int i;

    for (;;){
    printf("Entre com o numero ou digite -1 para encerrar: ");
    scanf(" %d", &num);

    if (num == -1){

      break;
    }

    if (num & 1){
      impar[impares++] = num;

    }
    else{
      par[pares++] = num;

    }
  }

  printf(" \n");
  printf("Impares: ");
  for (i = 0; i < impares; i++)
    printf(" %d\t", impar[i]);

  printf("\n");

  printf("\n");
    printf("Pares: ");
  for (i = 0; i < pares; i++)
    printf(" %d\t", par[i]);

    return 0;
}
