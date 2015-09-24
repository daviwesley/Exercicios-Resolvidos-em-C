#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
    int soma=0;

    while(n<200){

        if(n%3==0 && n%7!=0){
        soma=soma+n;
        }
       n++;
    }
    printf("a soma é igual a %d", soma);

    return 0;
}
