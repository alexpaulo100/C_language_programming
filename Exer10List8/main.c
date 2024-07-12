#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define TAM 500


/*Crie um algoritmo/programa que leia diversos números. Para cada número lido, antes de
armazená-lo no vetor, deve-se verificar se ele já foi digitado antes. Caso isto aconteça,
mostre uma mensagem "Já existe". Enquanto o usuário não digitar um número que ainda
não exista, ele deve continuar solicitando. Se o número for "novo", incluir ele no vetor e
mostrar "Ok". Quando o usuário fornecer 0, a repetição deve ser interrompida e o vetor deve
ser apresentado no fina*/

void cabecalho()
{
    printf("IFSC\n");
    printf("Estrutura de Dados\n");
    printf("Aluno: Alex Paulo Pereira Silva\n");
    printf("Avaliacao 4 (Lacos aninhados) questao n.10\n");
}

int vetorA[TAM], contador=0;
int i, j;

int main()
{
    cabecalho();
    for(i=0;i<TAM;i++){
        printf("\nEntre com os numeros ou 0 para interromper:\n");
        scanf("%d", &vetorA[i]);
        contador++;

    if(vetorA[i]==0){
        break;
    }else{
        for(j=0;j<=i-1;j++){
            if(vetorA[i]==vetorA[j]){
                printf("%d Ja existe!\n", vetorA[i]);
                i-=1;
                contador--;
            }
          }
        }
    }
    for(i=0; i<contador; i++){
        if(vetorA[i] == 0){
            contador--;
        }
    }

    for(i=0;i<contador;i++){
        printf("%d ", vetorA[i]);
    }
}
