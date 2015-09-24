#include <stdio.h>
#include <stdlib.h>
/*Faça um programa em C que receba um número n passado pelo usúario e
informe o n-ésimo termo da sequência*/
/*
\243 = ú
\202 = é
\306 = ã*/
int main()
{
    int numero,seq=1;
    printf("Digite um n\243mero positivo: ");
    scanf("%d",&numero);

    int i;
    for (i=1;i<=numero;i++)
    {
        seq=seq + 1;
    }
    if (seq%2 !=0){
        seq=seq*(-1);
    }
    printf("O n\243mero \202 %d",seq);
    return 0;
}
