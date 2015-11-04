#include <stdio.h>

int main(){

	int n;
	printf("Digite algo");
	scanf("%d",&n);
	
	switch(n){
		case 1:
			printf("Digitou 1");
			break;
		case 2:
			printf("Digitou 2");
			break;
		default:
			printf("Digitou outro numero diferente de 1 e 2");
	}
return 0;
}
