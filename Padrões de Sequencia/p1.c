#include <stdio.h>
/*Problema 1: Dado um inteiro n > 0, calcular a soma dos divisores
positivos de n.*/

int main()
{
    int n,contador,soma=0;
    printf("Digite um numero");
    scanf("%d",&n);
    while(contador<=n)
    {
        if (n%contador == 0)
        {
            soma=soma+contador;//ou soma +=contador
        }
     contador++;
    }
    printf("o resultador da soma dos divisores eh %d",soma);
    return 0;
}
