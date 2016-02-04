#include <stdio.h>
#include <stdlib.h>
int main(){
    unsigned char num;

    printf("Insira o numero a ser invertido\n");
    scanf("%i",&num);

    printf("\nNumero original: %i\n",num);
    num=~(num);
    printf("Numero invertido com NOT: %i\n",num);
}
