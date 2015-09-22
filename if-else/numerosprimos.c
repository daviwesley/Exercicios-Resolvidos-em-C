# include <stdio.h>

main(){

int num,cont;

cont=0;

printf("Num..: ");
scanf("%d",&num);


/*Um número só é primo se for divisível por 1 e ele mesmo,
ou seja, se for divisível por apenas 2 número, há não ser
que o número digitado seja 1, que por sua vez é divisível
apenas por um número.*/
int i;
for (i=1; i<=num; ++i)
if (num % i == 0) cont++;

if (cont<=2) printf("\n Primo!\n");
else
printf("Nao e primo!\n");



}
