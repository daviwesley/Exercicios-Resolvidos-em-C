#include <stdio.h>
#include <stdbool.h>
bool saoIguais(char s1[], char[]){
	
	int tam=strlen(s1);
	int tam2=strlen(s2);
	
	if (tam == tam2){
		int i;
		for(i=0;i<tam1;i++){
			if(s1[i] != s2[i])
				return false;
		}
	}
	return true;
}



