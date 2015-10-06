#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var1=0,var2=1,fibo=0;
    int n,i;

    printf("Digite um numero");
    scanf("%d",&n);
    printf(" 1");
    for (i=1;i<n; i++){
        fibo=var1+var2;
        var1=var2;
        var2=fibo;
        printf("% d",fibo);
    }
}
