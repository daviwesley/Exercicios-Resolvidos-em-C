#include <stdio.h>
#include <stdlib.h>

int main()
{
    //nao falei o tamanho do vetor
    int vetor[]={1,34,65,8,30,20};
    //o n vai usar um algoritimo pra calcular o tamanho do vetor
    int n=sizeof(vetor)/sizeof(int);
    printf("O vetor contem %d indices\n",n);
    return 0;
}
