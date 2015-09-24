#include <stdio.h>
#include <stdlib.h>
/*Faca um programa em C que receba dois numeros inteiros n1 e n2 passados
pelo usuuario. O seu programa deve informar se n1 e n2 forem ambos
divisiveis por 3 ou forem ambos divisiveis por 5.*/
int main()
{
    int num1,num2;
    printf("Digite dois numeros");
    scanf("%d""%d",&num1,&num2);
    if (num1%3==0 && num2%3==0)
    {
        printf("Eh divisivel por 3");
    }
    if (num1%5==0 && num2%5==0)
    {
         printf("Eh divisivel por 5");
    }
    else{
        printf("n\203o se aplica");
    }
    return 0;
}