#include <stdio.h>
#include <stdlib.h>
/*Dados dois naturais n>0 e m>0, determinar entre todos os pares de números inteiros (x,y)
 tias que 0 <= x <= n e 0 <= y <= m, um par para o qual o  alor a expressão x * y - x² + y*/

int main()
{
    int n = 2;
    int i= 0;
    int m = 3;int j = 0;
    int x_max,y_max,exp;
    int max=0;
    //calcular valor de x
    while(i<=n)
    {
        j=0;
    while(j<=m)
    {
        exp = (i*j)-(i*i)+j;
        //printf("Par Gerado: (%d, %d)', i, j);")
        if(exp > max)
        {
            max = exp;
            x_max=i;
            y_max=j;
        }
        j++;
    }
    i++;
    }
    printf("O par (%d,%d) resulta no valor %d",x_max,y_max,max);

}