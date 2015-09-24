#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seq=3,mult3=3,numero,contador=1;

    printf("Digite um n\243mero inteiro positivo: ");
    scanf("%d",&numero);

    while (contador<numero)
    {
        contador++;
        seq = seq + mult3;
        mult3 *=3;
    }
    if (seq%2==0)
    {
        seq = seq*(-1);
    }

    printf("Seu n\243mero \202 %d",seq);
    return 0;
}
