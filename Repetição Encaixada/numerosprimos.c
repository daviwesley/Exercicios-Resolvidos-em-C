#include <stdio.h>
#include <stdlib.h>
/*Dados n>0 números inteiros positivos, calcular a soma dos que são primos
   * Sua solução deve conter uma repetiçao com contador para ler m numeros pelo teclado.
   * Para cada número lido, seu programa deve testar se ele é primo(usando outra repetição).
     Em caso afirmativo acumular em uma soma.*/

int main()
{
    int num,num_dois,soma=0;

    printf("Digite a quantidade da sequencia");
    scanf("%d",&num);
    int i;
    for(i=0; i<num; i++)
    {
        printf("Digite um numero");
        scanf("%d",&num_dois);
        int j;
        for (j = 2; j < num_dois; j++)
        {
            if (num_dois % j == 0)
               {
                  soma=soma+num_dois;
               }
        }
    }
     printf("A soma eh %d",soma);
    return 0;
}


