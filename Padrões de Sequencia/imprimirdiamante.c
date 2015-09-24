#include<stdio.h>
int main()
{
int i,j,k,n;
scanf("%d",&n);
n=(n+1)/2;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
            printf(" ");
        for(k=1;k<=(2*i-1);k++)
            printf("*");
        printf("\n");
    }
    for(i=1;i<=(n-1);i++)
    {
        for(j=0;j<=i;j++)
            printf(" ");
        for(k=(2*n-3);k>=(2*i-1);k--)
            printf("*");
        printf("\n");
}
return 0;
}
