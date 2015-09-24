#include <stdio.h>
#include <stdlib.h>
/*Dao um numero pelo usuario verifique se é um numero triangular
ex: 4x5x6 = 120 eh triangula*/
int main()
{
    int numero=0;
    printf("Digite um numero: ");
    scanf("%d",&numero);

    int i;
    for (i=1; i*(i+1)*(i+2)<=numero; i++)
    {
        if (i*(i+1)*(i+2)==numero)
        {
           printf("eh triangular");
        }
    }
    if (i*(i+1)*(i+2)>numero || i*(i+1)*(i+2)!=numero )
        {
           printf("Nao eh triangular");
        }
    return 0;
}
