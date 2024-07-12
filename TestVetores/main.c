#include <stdio.h>
#include <stdlib.h>



   int main(){

    int i,j,n,vetor[7];

    int repetido = 0;
    for(i = 0; i < 7; i++){
        scanf("%d", &n);
        //verifica se o numero digitato é igual a algum anterior
        for(j = 0; j <= i-1 ; j++){
            if(n == vetor[j]){
                repetido = 1;
                //Caso encontre, a bandeira recebe 1 e o
                //"for" verificador é quebrado para economizar
                //processamento.
                break;
            }
        }
        //Se a bandeira é igual a 1, isso
        //significa que existe um numero igual
        if(repetido == 1){
            printf("%d repetido \n", n);
            repetido = 0;
            //A variavel "i" recebe menos 1, para garantir que o "i"
            // só vai referenciar a próxima posição do vetor quando o
            //usuário NÃO digitar um número repetido.
            //A bandeira é zerada para poder ser reutilizada.
            i -= 1;
        }else{
            //Caso não houver numero repetido, o numero é colocado
            //no vetor.
            vetor[i] = n;
        }
    }

    //Mostrar o vetor.

    for(i = 0; i < 7; i++){
        printf("%d ", vetor[i]);
    }

    return 0;

}
