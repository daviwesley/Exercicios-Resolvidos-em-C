/* 3.  Dados dois naturais m e n determinar, entre todos os pares de números naturais (x,y) tais que x < m e y < n, 
um par para o qual o valor da expressão xy - x2 + y seja máximo e calcular também esse máximo. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	int n, m, y, x, maxy, maxx, valorMax, valor;

	printf("Digite m:");
	scanf("%d", &m);

	printf("Digite n:");
	scanf("%d", &n);

	valorMax = 0;

	for(x = 0; x < m; x++)
	{
		for(y = 0; y < n; y++)
		{
		valor =	(x*y - x*x + y);
			if(valor > valorMax) 
			{
			valorMax = valor;
			maxy = y;
			maxx = x;	
			}
		}
	}

	printf("Valor máximo: %d.\nX máximo: %d.\nY máximo:%d.\n", valorMax, maxx, maxy);

return 0;
}
