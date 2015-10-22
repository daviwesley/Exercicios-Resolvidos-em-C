#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*Aluno 1:  Nome: José Marcelo Silva Santiago Matricula: 381103 */
/*Aluno 2:  Nome: Davi Wesley de Oliveira Silva Matricula: 381097 */

/* Exercícios: Definição e uso de funções */

/* Essa lista de exercícios tem por objetivo iniciar e aprimorar seus conhecimentos
sobre funções em C. As questões são cumulativas, ou seja, você deverá manter
todas as questões implementadas no mesmo arquivo e poderá, caso ache necessário,
usar as funções de qualquer questão como apoio as outras.*/

/* Cabeçalhos (protótipos) das funções */
bool a_eh_maior(int a, int b, int c);
int impares_3_500();
int sequencia(int num);


/**Você deve definir as funções de acordo com o enunciado nos
comentários de cada função **/

/** Definição das funções **/

/** Questão 1: Maior **/
/** Escreva uma função que receba três parâmetros
a, b e c retorne true se o valor de A for maior que o de B e C*/
bool a_eh_maior(int a, int b, int c)
{
    if(a>b && a>c){
        return true;
    }

    return false;
}

/** Questão 2: impares_3_500 **/
/** Escreva uma função que retorne quantos números ímpares
 e divisíveis por 3 existem entre 0 e 500.
*/
int impares_3_500()
{
    int i;
    int soma=0;
    for(i=0; i<=500; i++){
        if(i%2!=0 && i%3==0){
            soma++;
            }
        }
    return soma;
}


/** Questão 3: sequencia **/
/** Escreva uma função que receba um numero n passado pelo usuario
e retorne o enesimo termo da sequencia
  2, -3, 4, -5, 6, -7, 8, -9 ...*/
int sequencia(int num)
{
    int i=2;
    int soma=0;
    num++;
    while(i <= num){
        if(i % 2 != 0){
            soma = i * (-1);
        }else{
            soma = i;
        }
    i ++;
    }

    return soma;
}


/*** Final dos enunciados das questão.*/

/**---------------------------------***/
/*** Início dos testes **/
/** Você poderá utilizar os casos de teste abaixo para verificar
se sua função foi implementada da maneira correta*/

/** Casos de teste para a questão 1.**/
void testesQuestao1(){
    /*Casos de teste - questão 1*/
    if(a_eh_maior(1,3,5) == false && a_eh_maior(3,2,1) == true
       && a_eh_maior(2,3,7) == false && a_eh_maior(5,7,1) == false){
        printf("Questão 1 - correta\n");
    }else{
        printf("Questão 1 - incorreta.\n");
    }
}

/** Casos de teste para a questão 1.**/
void testesQuestao2(){
    /*Casos de teste - questão 2*/
    if(impares_3_500() == 83)
    {
        printf("Questão 2 - correta\n");
    }else{
        printf("Questão 2 - incorreta.\n");
    }
}

/** Casos de teste para a questão 1.**/
void testesQuestao3(){
    /*Casos de teste - questão 3*/
    if(sequencia(1) == 2 && sequencia(2) == -3
        && sequencia(5) == 6 && sequencia(6) == -7
        && sequencia(1234) == -1235)
    {
        printf("Questão 3 - correta\n");
    }else{
        printf("Questão 3 - incorreta.\n");
    }
}


/** A função main chamará os casos de teste.*/
int main()
{
/**Casos de teste para as questões **/
/**Utilize a função testesQuestao<numero-da-questao>()
para verificar se a sua função foi implementada
de forma correta.*/

    testesQuestao1();
    testesQuestao2();
    testesQuestao3();
    
    return 0;
}
