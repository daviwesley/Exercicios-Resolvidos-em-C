#include<stdio.h>

int main(){

    int num,i,count=0;
    printf("Digite um numero: ");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){
        if(num%i==0){
         count++;
            break;
        }
    }
   if(count==0 && num!= 1)
        printf("%d eh um numero primo",num);
   else
      printf("%d nao eh um numero primo",num);
   return 0;
}