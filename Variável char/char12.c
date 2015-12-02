#include <stdio.h>
#include <stdlib.h>

#include <strings.h>

int main(){
  char texto[100], inverso[100];
  int i,j;
  printf("Digite um texto: ");
  gets(texto);
  printf("O tamanho e : %d \n", strlen(texto));
  j=0;
  for (i=strlen(texto)-1; i >=0; i--){
      inverso[j] = texto[i];
      j++;
  }
  inverso[j] = '\0';
  printf("O inverso e : %s \n",inverso);

  if(strcmp(texto,inverso)==0){
    printf("E palindromo");
  }
  else{
    printf("Nao e palindromo");
  }
  printf("\n\n");

}
