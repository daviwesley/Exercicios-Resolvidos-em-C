#include <stdio.h>
#include <stdlib.h>

void g(int x, int *y){
    *y= x +3;
}
int main()
{
    int a =5, b =3;
    g(a, &b);
    printf("a = %d, b = %d",a,b);
    return 0;
}
