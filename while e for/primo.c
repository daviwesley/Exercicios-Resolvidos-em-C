/**
*
* Programa que recebe um numero e informa se ele e primo ou nao.
*
* Logica: Um numero e primo se ele for divisivel apenas por ele 
* mesmo e por 1.
*
*
*/

#include <stdio.h>

/* Funcao principal */
int main(){
    
    /* Declaracao das variaveis */
    int numero, i, controle=0;
    
    /* Escreve uma mensagem na tela */
    printf("Informe um numero: ");
    
    /* Recebe o numero digitado */
    scanf("%d", &numero);
    
    /* Se o numero for maior que 1, verificamos se e primo */
    if (numero > 1)
    {
    
        /**
        *
        * Aqui iremos dividir o numero informado
        * por todos os numeros que estao entre ele e 1.
        * No final, se ele tiver sido divisivel apenas por
        * 2 numeros sem sobrar resto, entao este e um numero primo.
        *
        */
        for (i = 1; i <= numero; i++)
        {
            
            /**
            * Se for divisivel por um numero sem sobrar resto, 
            * incrementamos a variavel controle, que conta quantos 
            * divisores o numero tem.
            */
            if (numero % i == 0) controle++;    
        }
        
        /** 
        * Apos o loop, verificamos quantos divisores o numero informado possui.
        * Se for apenas dois, ele e primo, caso contrario, nao.
        */
        if (controle == 2)
        {
           printf("O numero %d e um numero primo!\n", numero);             
        }
        else
        {
            printf("O numero %d nao e um numero primo!\n", numero);    
        }
    
    }
    
}
