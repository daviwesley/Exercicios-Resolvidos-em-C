#include <stdio.h>
#define DIM 5
// Curso C Progressivo: www.cprogressivo.net
// Curso online e gratuito de C.
// Artigos, tutoriais e aulas sobre a linguagem C
 
int main(void)
{
    typedef struct
    {
        char nome[30];
        float matematica, fisica, media;
    }Alunos;
 
    Alunos alunos[DIM];
    int count;
 
    for(count = 0 ; count < DIM ; count++)
    {
        fflush(stdin);
        __fpurge(stdin);
        printf("\nNome do aluno %d: ", count+1);
        gets(alunos[count].nome);//melhor usar gets quando for strings
 
        printf("Nota de matematica: ");
        scanf("%f", &alunos[count].matematica);
 
        printf("Nota de fisica: ");
        scanf("%f", &alunos[count].fisica);
 
        alunos[count].media = (alunos[count].matematica + alunos[count].fisica)/2;
    }
 
    printf("\nExibindo nomes e medias:\n");
 
    for(count = 0 ; count < DIM ; count++)
    {
        printf("nAluno %d\n", count+1);
        printf("Nome: %s\n",alunos[count].nome);
        printf("Media: %.2f\n", alunos[count].media);
    }
 
    return 0;
}
