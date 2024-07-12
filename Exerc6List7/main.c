#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*
6. Leia um c�digo de cinco algarismos, armazene ele numa string, e gere o digito verificador
(DV) m�dulo 7 para o mesmo. Supondo que os cinco algarismos do c�digo s�o ABCDE, use
a f�rmula abaixo para calcular o DV. Use fun��es literais quando preciso.
�A*5 + B*4 + C*3 + D*2 + E*1
Para determinar o DV, deve-se obter o resto da divis�o do c�lculo acima por 7*/

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


