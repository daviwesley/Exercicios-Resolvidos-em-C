#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,n2,soma=0,resto;

    printf("Entre com um numero inteiro");
    scanf("%d",&n);
    n2=n;
    while (n!=0){
        resto= n%100;
        soma= soma + resto;
        n=n/100;
    }
    if(n2*soma){
       printf("A soma do %d eh %d",n2,soma);
    }

    return 0;
}
