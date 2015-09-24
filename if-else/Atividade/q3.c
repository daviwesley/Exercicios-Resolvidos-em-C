#include <stdio.h>
#include <stdlib.h>
/*Faca um programa em C que receba um numero inteiro n, passado pelo
usuario, e imprima na tela o valor de n multiplicado por 5 se n for positivo
e o valor de n subtrado de 3 se n for negativo*/
int main()
{
    int num,mult,div;
    printf("Digite um numero");
    scanf("%d",&num);
    if (num>0)
    {
        printf("O numero %d multiplicado por 5 eh %d",num,mult=num*5);
    }
    else{
        printf("O numero %d subtraido por 3 eh %d",num,div=num-3);
    }
    return 0;
}
