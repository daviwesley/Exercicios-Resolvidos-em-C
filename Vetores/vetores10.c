#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[100],maximo,tamanho,i,posicao=1;

    printf("Insira o numero de elementos no vetor\n");
    scanf("%d",&tamanho);

    printf("Insira %d inteiros\n",tamanho);

    for(i = 0; i < tamanho; i++){
        scanf("%d",&vetor[i]);
    }
    //suponhamos que o primeiro elemento seja o maior
    maximo=vetor[0];

    for(i=1; i < tamanho; i++){
        if (vetor[i]>maximo){//achamos o maior elemento
            maximo = vetor[i];//maximo agora eh o maior numero, agora repita ate achar outro numero maior
            posicao = i + 1;//pege a posicao
        }
    }

    printf("O maior valor se encontra na posicao %d e seu valor eh %d.\n",posicao,maximo);
    return 0;
}
