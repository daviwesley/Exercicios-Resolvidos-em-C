#include<stdio.h>
int main(){
    int k=1;
    long int i=0,j=1,f;

    printf("Imprime 100 vezes a serie de Fibonacci\n");

    printf("A sequencia de Fibonacci eh: %ld %ld",i,j);//imprime as primeiras duas sequencias

    while(k<100){
         f=i+j;//soma 0 + 1 = 1
         i=j;//i(0) vai receber j(1)
         j=f;//j(1) vai receber f(0 + 1)
         printf(" %ld",j);
         k++;
    }

    return 0;
}
