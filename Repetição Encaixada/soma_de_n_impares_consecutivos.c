#include <stdio.h>
/*Sabe-se que um número da forma n3 é igual a soma de n ímpares consecutivos.

Exemplo: 13= 1, 2³= 3+5,3³= 7+9+11,  4³= 13+15+17+19,...*/
int main() {
  int n, m, i, inicio, soma;

  printf("Digite o valor de m: ");
  scanf("%d", &m);

  for (n = 1; n <= m; n++) {
    soma = 0;
    for (inicio = 1; soma != n * n * n; inicio = inicio + 2) {
      soma = 0;
      for (i = 0; i < n; i++)
	soma = soma + inicio + 2 * i;
    }
    inicio = inicio - 2;
    printf("%d*%d*%d = %d", n, n, n, inicio);
    for (i = 1; i < n; i++)
      printf("+%d", inicio+2*i);
    printf("\n");    
  }

  return 0;
}