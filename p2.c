
/*Dado um numero inteiro positivo n, imprimir os n
primeiros naturais impares. Exemplo: Para n = 4 a saida dever ser
1; 3; 5; 7.*/
#include <stdio.h>
#include <stdlib.h>
//Usou o padrão de sequencia gerada//
int main()
{
    int a,b=0,k=0;
    printf("Entre com um numero:\n");
    scanf("%d",&a);
    while(k!=a){
        b++;//b recebe mais um
        if(b%2!=0){
            printf("%d\n",b);
            k++;
        }
    }
    return 0;
}
