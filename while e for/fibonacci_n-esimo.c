#include <stdio.h>
#include <stdlib.h>

int main()
{
   int var1=0,var2=1,fibo;
   int n;

   printf("Digite o numero da sequencia: ");
   scanf("%d",&n);
   int i;

   for (i=1; i<=n;i++){
       fibo=var1+var2;
       var1=var2;
       var2=fibo;
       //printf("%5d,",fibo);
   }
   printf("%3d",fibo);
   return 0;
}
