#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 4.  Dados n números inteiros positivos, calcular a soma dos que são primos. 

/* 
n = 9
1, 2, 3, 5, 7
*/

int main(){
	int n, soma = 0, i, j, ehPrimo;

	printf("Digite um número n:");
	scanf("%d", &n);

	for(i = 0; i <= n; i++)
	{	
	ehPrimo = 0;
		for(j = 1; j < i; j++)
			{
			if(i % j == 0)
				{
				ehPrimo++;
				}	
			}
		
		if(ehPrimo < 2)
		{
		printf("%d \n", i);
		soma = soma + i;	
		}
	}

	printf("A dos primos é: %d \n", soma);

return 0;
}
