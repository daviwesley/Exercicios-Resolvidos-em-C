#include <stdio.h>
#include <stdlib.h>

int main()
{
    int totalFUP=1,totalREAL=1,resto,soma=0;
    int n;

    printf("Digite um numero");
    scanf("%d",&n);

    while (n!= 0){
        resto=n%10;
        if (resto%3 == 0){
                totalFUP=totalFUP*3;
        }
        else{
            totalFUP=totalFUP*1;
        }
       printf("%d",resto);
        n=n/10;
    }
    printf("Total de FUP's: %d\n",totalFUP);
    printf("Sera depositado %d reais na sua conta\n",totalFUP*2);
}
