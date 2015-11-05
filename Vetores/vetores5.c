#include<stdio.h>

int main(void)
{
// declarando e inicializando o vetor notas em uma única linha
  float notas[5] = {7, 8, 9.5, 9.9, 5.2};
  printf("O vetor tem 5 ")
  printf("Exibindo os Valores do Vetor \n\n");
  printf("notas[0] = %.1f\n", notas[0]);
  printf("notas[1] = %.1f\n", notas[1]);
  printf("notas[2] = %.1f\n", notas[2]);
  printf("notas[3] = %.1f\n", notas[3]);
  printf("notas[4] = %.1f\n", notas[4]);

  getch();
  return 0;
}
