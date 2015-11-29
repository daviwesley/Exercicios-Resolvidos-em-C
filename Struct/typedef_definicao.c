#include <stdio.h>
 
int main(void)
{
    typedef int meuInteiro;
    typedef char String[20];
 
    meuInteiro numero = 1;
    String nome;
    scanf("%[^\n]s", nome);
 
    printf("A variavel do tipo 'meuInteiro' eh um int e vale %d\n", numero);
    printf("Ja a variavel 'nome' eh uma String e armazena \"%s\"\n", nome);
 
    return 0;
}
