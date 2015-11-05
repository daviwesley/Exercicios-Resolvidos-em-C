#include <stdio.h>
#include <stdlib.h>

int main()
{
    //nao falei o tamanho do vetor
    int vetor[]={1,34,65,8,30,20};
    //o n vai usar um algoritimo pra calcular o tamanho do vetor
    int n=sizeof(vetor)/sizeof(int);
    int i;
    //inicia um laço para exibir os valores dos indices
    for(i=0;i<n;i++){
        printf("O indice %d contem o valor %d\n",i,vetor[i]);
    }
    printf("O vetor contem %d indices",n);
    return 0;
}
