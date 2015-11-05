#include <stdio.h>
/*Exemplo 1: Faça um programa que peça 3 números inteiros ao usuário, 
armazene em um vetor, depois mostre o valor de cada elemento do vetor, assim como seu índice.*/

int main()
{
    int number[3],indice;

        for(indice=0 ; indice <= 2 ; indice++)
        {
            printf("Entre com o numero %d: ", indice+1);
            scanf("%d", &number[indice]);
        }

        for(indice=0 ; indice <= 2 ; indice++)
            printf("Numero %d = %d\n", indice+1, number[indice]);

}
