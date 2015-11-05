#include <stdio.h>
#include <stdlib.h>
/*Exemplo: Faça um programa em C que peça ao usuário duas notas que
ele tirou e mostre a média.Use vetores! Aliás, use somente um
vetor para essas três variáveis.*/

int main()
{
    float nota[3];
    printf("Digite sua primeira nota: ");
    scanf("%f",&nota[0]);
    printf("Digite sua primeira nota: ");
    scanf("%f",&nota[1]);

    nota[3]= (nota[0]+nota[1])/2;
    printf("%.1f",nota[3]);
    return 0;
}
