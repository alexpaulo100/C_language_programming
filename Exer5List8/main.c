#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 1000
/*Crie um algoritmo/programa que leia 5 valores inteiros.
Adicione uma validação, permitindo que o usuário informe apenas valores entre 3 e 7.
Enquanto o usuário não digitar o valor correto, o programa deve solicitar novamente.
Quando a entrada estiver correta, armazene no vetor e apresente "Ok" na tela.
Imprima o vetor no final*/
void cabecalho()
{
    printf("IFSC\n");
    printf("Estrutura de Dados\n");
    printf("Aluno: Alex Paulo Pereira Silva\n");
    printf("Avaliacao 4 (Lacos aninhados) questao n.5\n");
}

int main()
{
    cabecalho();
    int vetor[5];
    int valor, i;
    int tam=0, tam2 = 0;

    printf("Digite um numero entre 3 e 7 ou 0 para terminar:\n ");
    scanf("%d", &valor);

    while(tam2<5){

           if(valor>=3 && valor<=7){
            printf("%d OK!\n", valor);
            vetor[tam] = valor;
            tam++;
            tam2++;
            printf("Digite um numero entre 3 e 7 ou 0 para terminar:\n");
            scanf("%d", &valor);
           }else if (valor<3 || valor>7){
            printf("%d Try Again\n", valor);
            printf("Digite um numero entre 3 e 7 ou 0 para terminar:\n ");
            scanf("%d", &valor);
           }if (valor == 0){
            break;
           }

    }

    for(i=0;i<tam;i++){
        printf("%2d ", vetor[i]);
   }
}
