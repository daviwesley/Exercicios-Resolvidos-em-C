#include <stdio.h>
/*Peça ao usuario para inserir um numero e encerre assim que ele aperta 0*/

int main()
{
	int var;
	int soma=0;
	printf("Digite um número inteiro ou digite zero para ssir");
	scanf("%d",&var);
	
	while(var!=0)
	{
		soma+=var;
		printf("Digite um número inteiro ou digite zero para ssir");
		scanf("%d",&var);
	}
	
	printf("a soma dos numeros eh %i",soma);
}