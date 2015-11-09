#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    //inicialmente n contem 48
    int n=48;
    p=&n;
    //ao mudar o valor de *p é a mesma coisa que mudar o valor de n
    *p=666;
    printf("Valor do Ponteiro(*)%d\n",*p);
    printf("Valor do Ponteiro(&)%d\n",&p);
    printf("Valor do Ponteiro(sem nenhum)%d\n",p);
    return 0;
}
