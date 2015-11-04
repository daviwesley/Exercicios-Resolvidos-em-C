#include <stdio.h>

int main(){

	int *apt1;
	int n;

	//apontando a variavel apt1 aponta para a variável n

	apt1=&n;
	
	//vai para a posição de memória que apt1 está apontando
	//e guarde o valor 10
	*apt1 = 10;
}
