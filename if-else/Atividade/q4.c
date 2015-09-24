#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    int n2;
    int res;

    printf("Digite o primeiro numero;\n");
    scanf("%d", & n1);
    printf("Digite o segundo numero;\n");
    scanf("%d", & n2);
        res=n1%n2*n1;

        if(res%2==0){
        res/2;
        }
        printf("%d", res);

    return 0;
}
