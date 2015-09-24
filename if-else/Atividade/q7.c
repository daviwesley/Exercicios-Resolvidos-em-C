#include <stdio.h>
#include <stdlib.h>
/*Faca um programa em C que receba um numero n passado pelo usuario e
informe se n e primo ou não.*/
int main()
{
   int i,j=2,divisores=0;
   printf("Digite um numero");
   scanf("%d",&i);
   while (j<=i/2)
   {
       if(i%j==0)
       {
           printf("%d n\306o eh primo",i);
           divisores=1;
           break;
       }
       else{
        j++;
       }
   }
   if(divisores==0)
   {
       printf("%d \202 primo",i);
   }
}
