#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 0;
	printf("Digite um numero\n");
	scanf("%d",&numero);

	while(numero !=0){
		int x;
		x = numero%10;
		numero  = numero/10;
        printf("%d\n",x);
	}

	return 0;
}

