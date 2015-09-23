#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   printf("Digite um numero");
   scanf("%d",&num);
   if(num%3==1 && num%5==0)
   {
       printf("eh divisel por 3 e o resto da divisivel por 3");
   }
   else
   {
     printf("n\203o se aplica");
   }
   return 0;
}
