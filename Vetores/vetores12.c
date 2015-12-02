#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool adicionaElemento(int v[], int elem, int *tam);

int main()
{
    int v[4]={1,2,3,4};
    int elem=4;
    int tam=sizeof(v)/sizeof(int);
    adicionaElemento(v,elem,&tam);
    //imprimir novo vetor
    int i;
    for(i=0;i<sizeof(v)/sizeof(int);i++){
        printf("%d",v[i]);
    }
    printf("\nTamanho do vetor eh %d",tam);
    return 0;
}
bool adicionaElemento(int v[], int elem, int *tam){

    if(*tam <20){
        tam++;
        v[*tam-1]=elem;
        return true;
    }
    else
        return false;//vetor lotado
}
