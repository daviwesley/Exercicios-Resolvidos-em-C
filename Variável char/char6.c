#include <stdio.h>
#include <string.h>
int ehMaiscula(char nome[]);

int main(){
	
	if (ehMaiscula("Davi")==1)
		printf("EH MAIUSCULA");
	else
		printf("nao eh minuscula");
	return 0;
}

int ehMaiscula(char nome[]){

    for (int i=0; i < strlen(nome); i ++){
		if (nome[i] >='A' && nome[i]<='Z'){
		
		return 1;
		}
		else{
		return 0;
		}
    }
}
