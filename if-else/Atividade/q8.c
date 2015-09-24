#include <stdio.h>
/*Faça um programa que informe quantos primos existem entre 0 e um
número n (incluindo n), passado pelo usuúario.*/
#include<stdio.h>
int main()
{
   int num,i,divisores,n,primos=0;
   printf("Entre com um n\243mero");
   scanf("%d",&n);

   for (num=1; num<=n; num++){
       divisores=0;//atribue zero

       for (i=2;i<=num/2;i++){//formula diferente pra descobrir primos(mais rápido que as outras)
           if (num%i == 0){//se tiver um divisor já é primo
               divisores++;
               break;//força a parada uma vez que já temos um divisor
           }
       }
       if (divisores == 0 && num!= 1)//se o divisor é igual a zero e o numero é diferente de 1
           primos++;//conta mais 1 para a variavel primos
   }
   printf("possui %d primos",primos);
   return 0;
}
