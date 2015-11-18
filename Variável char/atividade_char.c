#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX 100

/* Faça uma função que receba duas strings e compara as mesmas, verificando se são iguais. Retorne true se for igual
ou retorne false se for diferente. */
bool verifica(char *str, char *str2)
{
    if((*str) == (*str2)){
        return true;
    }
    return false;
}

/*Faça uma função que receba uma string e verifica se é minúscula, caso ela seja retorne 1, se não, retorne 0.*/
int minuscula(char str[])
{
    int i = 0;
    int soma = 0;
    while(i < strlen(str)){
        if(str[i] >='a' && str[i] <='z'){
            soma++;
        }
        i++;
    }
    if(soma == strlen(str)){
                return 1;
    }
    return 0;
}

/* Faça uma função que receba uma string e verifica se há espaço, caso tenha algum espaço retorne 1, se não, retorne 0.
Ex: universidade federal. return 1. universidade. return 0.*/
int verifica_espaco(char str[])
{
    int i = 0;
    while(i < strlen(str)){
        if(str[i] == ' '){
            return 1;
        }
        i++;
    }
    return 0;
}

/*Faça uma função que recebe uma string e retorne o seu tamanho.*/
int tamanho_string(char str[])
{
    int tamanho;
    tamanho = strlen(str);
    return tamanho;
}

/*Faça uma função que recebe duas strings, compare o tamanho da duas e retorne o tamanho da maior string.
OBS: Se as strings tiverem o mesmo tamanho, retorne 0;*/
int compara_strings(char str[], char str2[])
{
    if(strlen(str) == strlen(str2)){
        return 0;
    }else if(strlen(str) > strlen(str2)){
        return strlen(str);
    }else if(strlen(str) < strlen(str2)){
        return strlen(str2);
    }
}

/*Faça uma funçao que recebe uma string e retorna a soma dos valores
do codigo ascii dos seus caracteres */
int soma_codigo_ascii(char str[])
{
    int soma = 0;
    int i = 0;
    while(i < strlen(str)){
        soma = str[i] + soma;
        i++;
    }
    return soma;
}

/*Faça uma funçao que recebe duas strings. a primeira, tem palavras separadas
por varios espaços em branco. A segunda irá gravar essas palavras separadas
por somente um espaço.

EXEMPLO
string 1: LABORATORIO     DE      PROGRAMACAO      I
depois da função:
string 2: LABORATORIO DE PROGRAMACAO I
*/

void retira_espacos_desnecessarios(char A[], char B[])
{
    int i = 0;
    int j = 0;
    int cont = 0;
    for(i=0;A[i]!='\0';i++){
        if(A[i] != ' '){
            B[j] = A[i];
            cont=0;
            j++;
        }
        if(A[i] == ' ' && cont==0){
            B[j]=' ';
            j++;
            cont=1;
        }
    }
}

/* Retorne true se a string menor esta no comeco da string maior
Exemplo:
    menor = "pavao"
    maior = "pavao eh lindo"*/

bool esta_no_comeco(char menor[], char maior[])
{
    int tam = strlen(menor);
    int i = 0;
    int soma = 0;
    while(i < tam){
        if(menor[i] == maior[i]){
            soma ++;
        }
        i++;
    }
    if(soma == tam){
        return true;
    }
    return false;
}

/*Implementação das funções de teste */
void test_verifica()
{
    printf("testando a funcao verifica\n");

    char str1[MAX] = "corda";
    char str2[MAX] = "corda";
    char str3[MAX] = "faculdade";
    char str4[MAX] = "faculdade";

    if(verifica(str1, str2) == 1 && verifica(str3, str4) == 1
        && verifica(str1, str3) == 0 && verifica(str4, str2) == 0){
            printf("    ok!\n");
    }else{
        printf("    not ok!\n");
    }
    printf("-----------------------------------\n");
}

void test_minuscula()
{
    printf("testando funcao minuscula\n");

    char str1[MAX] = "corda";
    char str2[MAX] = "eSCOLA";
    char str3[MAX] = "FACULdADE";
    char str4[MAX] = "casa";

    if(minuscula(str1) == 1 && minuscula(str2) == 0
        && minuscula(str3) == 0 && minuscula(str4) == 1){
            printf("    ok!\n");
    }else{
            printf("    not ok!\n");
    }
    printf("-----------------------------------\n");
}

void test_verifica_espaco()
{
    printf("testando a funcao verifica_espaco\n");

    char str1[MAX] = "corda";
    char str2[MAX] = "sua casa";
    char str3[MAX] = "universidade federal";
    char str4[MAX] = "casa";

    if(verifica_espaco(str1) == 0 && verifica_espaco(str2) == 1
        && verifica_espaco(str3) == 1 && verifica_espaco(str4) == 0){
            printf("    ok!\n");
    }else{
        printf("    not ok!\n");
    }
    printf("-----------------------------------\n");
}

void test_tamanho_string()
{
    printf("testando funcao tamanho_string\n");

    char str1[MAX] = "corda";
    char str2[MAX] = "pai";
    char str3[MAX] = "faculdade";
    char str4[MAX] = "casa";

    if(tamanho_string(str1) == 5 && tamanho_string(str2) == 3
        && tamanho_string(str3) == 9 && tamanho_string(str4) == 4){
            printf("    ok!\n");
    }else{
        printf("    not ok!\n");
    }
    printf("-----------------------------------\n");
}

void test_compara_strings()
{
    printf("testando a funcao compara_strings\n");

    char str1[MAX] = "corda";
    char str2[MAX] = "pai";
    char str3[MAX] = "faculdade";
    char str4[MAX] = "casa";

    char c1[MAX] = "terra";
    char c2[MAX] = "brasil";
    char c3[MAX] = "luz";
    char c4[MAX] = "apartamento";

    if(compara_strings(str1, c1) == 0 && compara_strings(str2, c2) == 6
        && compara_strings(str3, c3) == 9 && compara_strings(str4, c4) == 11){
            printf("    ok\n");
    }else{
        printf("    not ok\n");
    }
    printf("-----------------------------------\n");
}

void test_soma_codigo_ascii()
{
    printf("testando soma_codigo_ascii\n");
    char str1[MAX] = "pai";
    char str2[MAX] = "escola";
    char str3[MAX] = "faculdade";
    char str4[MAX] = "casa";

    if(soma_codigo_ascii(str1) == 314 && soma_codigo_ascii(str2) == 631
        && soma_codigo_ascii(str3) == 921 && soma_codigo_ascii(str4) == 408){
            printf("    ok\n");
    }else{
        printf("    not ok\n");
    }
    printf("-----------------------------------\n");
}

void test_retira_espacos_desnecessarios()
{
    printf("testando retira_espacos_desnecessarios\n");
    char str1[MAX] = "LABORATORIO     DE      PROGRAMACAO      I";
    char c1[MAX];
    char d1[MAX] = "LABORATORIO DE PROGRAMACAO I";

    retira_espacos_desnecessarios(str1, c1);
    if(strcmp(c1, d1) == 0){
        printf("    ok\n");
    }else{
        printf("    not ok\n");
    }
    printf("-----------------------------------\n");
}

void   test_esta_no_comeco()
{
    printf("testando a funcao esta_no_comeco\n");

    char str1[MAX] = "pavao";
    char str2[MAX] = "terra";
    char str3[MAX] = "paralelo";
    char str4[MAX] = "vida";

    char c1[MAX] = "pavao eh lindo";
    char c2[MAX] = "terra dourada";
    char c3[MAX] = "universo paralelo";
    char c4[MAX] = "licao de vida";

    if(esta_no_comeco(str1, c1) == true && esta_no_comeco(str2, c2) == true
        && esta_no_comeco(str3, c3) == false && esta_no_comeco(str4, c4) == false){
        printf("    ok\n");
    }else{
        printf("    not ok.\n");
    }
    printf("-----------------------------------\n");
}

int main()
{
    test_verifica();
    test_minuscula();
    test_verifica_espaco();
    test_tamanho_string();
    test_compara_strings();
    test_soma_codigo_ascii();
    test_retira_espacos_desnecessarios();
    test_esta_no_comeco();
    return 0;
}
