#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,j=0,i=0;

    printf("Digite um numero: ");
    scanf("%d",&n);

    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
