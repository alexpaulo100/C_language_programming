#include <stdio.h>
#include <stdlib.h>



   int main(){

    int i,j,n,vetor[7];

    int repetido = 0;
    for(i = 0; i < 7; i++){
        scanf("%d", &n);
        //verifica se o numero digitato � igual a algum anterior
        for(j = 0; j <= i-1 ; j++){
            if(n == vetor[j]){
                repetido = 1;
                //Caso encontre, a bandeira recebe 1 e o
                //"for" verificador � quebrado para economizar
                //processamento.
                break;
            }
        }
        //Se a bandeira � igual a 1, isso
        //significa que existe um numero igual
        if(repetido == 1){
            printf("%d repetido \n", n);
            repetido = 0;
            //A variavel "i" recebe menos 1, para garantir que o "i"
            // s� vai referenciar a pr�xima posi��o do vetor quando o
            //usu�rio N�O digitar um n�mero repetido.
            //A bandeira � zerada para poder ser reutilizada.
            i -= 1;
        }else{
            //Caso n�o houver numero repetido, o numero � colocado
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
