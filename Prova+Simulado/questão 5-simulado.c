#include <stdio.h>

int main (){
   int divisor=2,num;
   printf("Digite um numero:\n");
   scanf("%d",&num);
   while (divisor<num){
       if(num%divisor==0){
               printf("o numero não eh primo.\n");
           return 0;
            }
       divisor++;
   }
   printf("O numero eh primo.");
   return 0;
}

