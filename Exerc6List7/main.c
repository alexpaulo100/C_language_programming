#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*
6. Leia um código de cinco algarismos, armazene ele numa string, e gere o digito verificador
(DV) módulo 7 para o mesmo. Supondo que os cinco algarismos do código são ABCDE, use
a fórmula abaixo para calcular o DV. Use funções literais quando preciso.
•A*5 + B*4 + C*3 + D*2 + E*1
Para determinar o DV, deve-se obter o resto da divisão do cálculo acima por 7*/

int main(){
    char codigo[5];
    int  j, tam, soma=0, resto=0, dec=5;

    printf("Digite o codigo de cinco algarismos:\n");
    scanf("%s", codigo);

    tam = strlen(codigo);

    for(j = 0; j < tam; j++){

        codigo[j] = (codigo[j]-48)*(dec--);
        soma += codigo[j];
    }

    resto = soma % 7;
    printf("DV %d", resto);

    return 0;
}


