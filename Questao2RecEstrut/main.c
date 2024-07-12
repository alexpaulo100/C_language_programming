#include <stdio.h>
#include <stdlib.h>
#include<math.h>


/*Crie um programa que leia dois vetores de 7 elementos cada.
Em seguida, deve-se criar uma rotina para fazer a União destes vetores, sendo que o vetor
resultante não deve conter valores duplicados.
entrada
1 7 4 7 3 9 3
2 4 7 1 9 8 1
saida
1 7 4 3 9 2 8*/

void cabecalho()
{

    printf("IFSC\n");
    printf("Estrutura de Dados\n");
    printf("Aluno: Alex Paulo Pereira Silva\n");
    printf("Recuperacao questao n.02\n");
    printf("\n");
}


int main()
{
    cabecalho();
    int vet1[7], vet2[7], vet3[14], i, j;


    //entrada do primeiro vetor

    for (i = 0; i<7; i++)
    {
        printf("Entre com o %i numero do primeiro vetor:  ", i + 1);
        scanf("%i", &vet1[i]);
        vet3[i]=vet1[i];
    }
    // entrada do segundo vetor
    for (i = 0; i<7; i++)
    {
        printf("Entre com o %i numero do segundo vetor: ", i + 1);
        scanf("%i", &vet2[i]);
        vet3[i+7]=vet2[i];
    }

    //fazer eliminação de repetidos
    for(i = 0; i<14; i++)
    {
        for(j = i+1; j<14; j++)
        {
            if(vet3[i]==vet3[j])
            {
                vet3[j]=0;

            }
            else
            {

            }
        }
    }
    printf("Resultado: ");
    for(i=0; i<14; i++)
    {
        if(vet3[i]!=0)
        {
            printf("\nNumeros: %d ", vet3[i]);

        }
        else {}
    }




    getchar();
    return 0;
}

