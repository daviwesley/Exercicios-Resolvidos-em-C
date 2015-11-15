#include <stdio.h>
#include <stdlib.h>
/*Dois loops ao mesmo tempo(simultanamente)*/
int main()
{
    int c,d,n;

    printf("Insira um numero");
    scanf("%d",&n);
    /*a estrutura de um loop for eh
     for(inicio;condição;incremento)
    voce pode fazer varios argumentos apenas separando por
    vigurla como se pode ver no exemplo abaixo*/
    for(c = n, d = 0; c>=0;c--,d++){
        printf(" a=%d b=%d \n",c,d);
    }
    return 0;
}
