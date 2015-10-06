#include <stdio.h>
/*Receber do teclado, vários números e verificar se eles são ou não quadrados perfeitos*/

int main()
{
  int numero,c,p=1;//p começa com um pq eh uma multiplicação
  
  printf("Informe um numero positivo: ");
  scanf("%d", &numero);
  
  c = 1;//contador vai começar por 1
  
  while (p < numero){//multiplica até chegar no numero informado
    c++;
    p=c * c;
  }
  if (p == numero){
    printf("\nO numero %d eh quadrado perfeito.\n",numero);
   }
  else{
    printf("\nO numero %d nao eh quadrado perfeito.\n",numero);
   }
   return 0;
}
