#include <stdio.h>

int main()
{
  int n;       /* numero dado */
  int fator;   /* candidato a fator do numero dado */
  int mult;    /* multiplicidade de fator */


  printf("Decomponho um numero dado em fatores primos.\n");
  printf("Entre com o numero (> 1) a ser decomposto: ");
  scanf("%d", &n);
  printf("Decomposicao de %d em fatores primos:\n", n);  

  fator = 2;
  while (n > 1) 
    {
      mult = 0;
      while (n % fator == 0) 
        {
          mult ++;
          n = n / fator; 
        }
      if (mult != 0) 
        {
          printf("  fator %d multiplicidade %d\n", fator, mult); 
        }
      fator++; 
    }

  return 0;
}
