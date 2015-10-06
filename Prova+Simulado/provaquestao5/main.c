#include <stdio.h>

int main(void)
{
    int n;
    float soma=0,cont=1;
    printf("Digite um numero inteiro:\n");
    scanf("%d",&n);
    while (n>0) {
        soma=soma+(cont/n);
        n--;
        cont++;

    }
    printf("O valor da soma eh %.2f.\n",soma);
    return 0;
}
