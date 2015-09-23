#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    int n2;

    printf("Digite o primeiro numero;\n");
    scanf("%d", & n1);
    printf("Digite o segundo numero;\n");
    scanf("%d", & n2);
        if (n1>50 && n1<200){
            printf("O numero %d esta entre 50 e 200\n", n1);
        }

        if(n2>-1 && n2<9){
        printf("O numero %d esta entre -1 e 9\n", n2);
        }

    return 0;
}
