#include <stdio.h>

int main(){
	int v[80], i;
/*posição 3 do vetor v recebe o inteiro 4 */

	v[3] = 4;
	i = 2;
/*posicão 2 do vetor v recebe o inteiro 3*/
	v[i] = 3;
/*Qual a posição do vetor v que recebe a posição 10*/
	v[[v[v[i]]]];
	return 0;
}