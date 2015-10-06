#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,fatorial=1,i;

    printf("Digite um numero");
    scanf("%d",&n);
    if (n<0){
    printf("Digite um numero novamente");
    scanf("%d",&n);
    }
    for (i=1;i<=n;i++){
        fatorial*=i;
    }
    printf("O fatorial de %d eh %d",n,fatorial);
}
