#include <stdio.h>
#include <stdlib.h>
/*Dados dois naturais n>0 e m>0, determinar entre todos os pares de n�meros inteiros (x,y)
 tias que 0 <= x <= n e 0 <= y <= m, um par para o qual o  alor a express�o x * y - x� + y*/

int main()
{

   int n = 2;
    int i= 0;
    int m = 3;int j = 0;int exp;
    int x_max,y_max,max;
    //cualcular valor de x
    //gerar os valores de x
    while(i<=n)
    {
        j=0;
    while(j<=m)
    {
        exp = (i*j)- (i*i) + j;
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
   printf("Par Gerado: (%d, %d) o maximo eh %d);",x_max,y_max,max);


}
