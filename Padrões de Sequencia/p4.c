#include <stdio.h>
/*Problema 4: Dizemos que um numero i e congruente modulo m a
j se i%m = j%m. Exemplo: 35 e congruente modulo 4 a 39, pois
35%4 = 3 = 39%4. Dados inteiros positivos n, j e m, imprimir os n
primeiros naturais congruentes a j modulo m.*/

int main()
{
    int a,b,c,var,var2,var3=0;
    printf("Digite 3 numeros");
    scanf("%d""%d""%d",&a,&b,&c);

    var=a%b;
    var2=c%b;

    if (var == var2)
    {
        printf("\n%d eh congruente modulo %d a %d",a,b,c);
        while (var3<=var2)
        {
            printf("%d\n",var3);
            var3++;
        }
    }
    else{
        printf("\nnao sao congruentes");
    }
    return 0;
}
