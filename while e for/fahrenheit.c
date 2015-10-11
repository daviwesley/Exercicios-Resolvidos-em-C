#include <stdio.h>

/*Imprime a tabela de conversao Fahrenheit-Celsius
  para fahr= 0,20,...300*/

int main()
{
	int fahr,celsius;
	int inicio,fim,incr;

	inicio = 0; /*Limite inferior da tabela(minimo)*/
	fim = 300;  /*Limite superior(maximo)*/
	incr= 20;  /*Incremento */

	fahr = inicio;
	while(fahr<=fim) {
		celsius = 5 * (fahr - 32)/9;//5x(0-32)/9
		printf("%d\t%d\n", fahr,celsius);
		fahr = fahr + incr;
	}
}
