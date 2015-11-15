#include <stdio.h>
#include <stdlib.h>
/*Inverta os valores de um vetor*/
int main()
{
    int n,c,d,a[100],b[100];

    printf("Insira o numero de elementos do vetor\n");
    scanf("%d",&n);

    printf("Insira os elementos dos vetores\n");
    //loop para atribuir valores nos elementos
    for(c = 0; c < n; c++){
        scanf("%d",&a[c]);
    }
    /*copia os elementos no vetor b começando do final do
    vetor a*/
    for(c = n - 1, d = 0; c>=0;c--,d++){
        b[d] = a[c];
    }

    /*copia o vetor invertido para o original*/
    for(c = 0; c < n; c++){
        a[c] = b[c];
    }

    printf("O vetor invertido eh\n");

    for(c = 0; c < n; c++){
        printf("%d\n",a[c]);
    }
    return 0;
}
