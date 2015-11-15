#include <stdio.h>
#include <stdlib.h>
/*Encontra o menor valor de um elemento em um vetor*/
int main()
{
   int array[100],minimum,size,c,location = 1;

   printf("Insira o numero de elementos do vetor: ");
   scanf("%d",&size);

   printf("Insira %d inteiros\n",size);

   for(c = 0; c < size; c++){
        scanf("%d",&array[c]);
   }
   //vamos comecar a verificação no primeiro elemento
   minimum = array[0];

   for(c = 1; c < size; c++){
        if(array[c] < minimum){//encontramos um numero menor
            minimum = array[c];//armazeno na variavel minimum
            location = c + 1;//guarde sua localização
        }
   }

   printf("O menor valor de um elemento eh %d e esta na posicao %d",minimum,location);
   return 0;
}
