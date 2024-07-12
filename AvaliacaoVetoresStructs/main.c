#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
#define max 10

void cabecalho()
{
    printf("IFSC\n");
    printf("Estrutura de Dados\n");
    printf("Aluno: Alex Paulo Pereira Silva\n");
    printf("Avaliacao Structs\n");


}

typedef struct
{
    int id;
    char produto[50];
    float qtd;
    float valor;

}
tEstoque;

int main()
{
    int i, cont=0;
    tEstoque vetEstoque[max];
    float total;

    cabecalho();
    for (i=0; i<max; i++)
    {

        fflush(stdin);
        printf("Produto: ");
        gets(vetEstoque[i].produto);

        if(strcmp(vetEstoque[i].produto,"")== 0)
        {
            break;
        }

        printf("Quantidade: ");
        scanf("%f", &vetEstoque[i].qtd);

        printf("Valor: ");
        scanf("%f", &vetEstoque[i].valor);

        vetEstoque[i].id = i+1;
        total = vetEstoque[i].valor * vetEstoque[i].qtd + total;

        cont++;
    }

    for(i=0; i<cont; i++)
    {

        printf("\n %s ID %d\n", vetEstoque[i].produto, vetEstoque[i].id);
    }

    printf("\nValor Total Estoque: %.2f", total);

}

