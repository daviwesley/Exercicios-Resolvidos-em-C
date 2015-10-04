#include <stdio.h>

// 1.  Dados n e n seqüências de números inteiros não-nulos, 
// cada qual seguida por um 0, calcular a soma dos números pares de cada seqüência. 


int main(){
	int n, soma = 0, i;

	printf("Digite um número n:");
	scanf("%d", &n);

	for(i = 0; i <= n; i++)
	{	
		if(i % 2 == 0)
		{
		soma = soma + i;	
		}
	}

	printf("A soma dos pares é: %d \n", soma);

return 0;
}
