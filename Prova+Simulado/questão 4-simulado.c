#include <stdio.h>

int main (){
   int n,produto=1;
   printf("Digite uma sequencia de numeros, e digite 0 para encerar:\n");
   scanf("%d",&n);
   while(n!=0){
       produto=produto*n;
       printf("Digite uma sequencia de numeros, e digite 0 para encerar:\n");
       scanf("%d",&n);
   }
   printf("O valor do produtorio dos numeros eh %d.\n",produto);
   return 0;
}
