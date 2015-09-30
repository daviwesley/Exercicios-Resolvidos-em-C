/*
 * SOLUCAO 1: simples e direta. Note o cuidado especial com o 
 *     ultimo segmento e ultimo elemento.
 *
 */

#include <stdio.h>

#define FALSE 0
#define TRUE  1

int main() 
{
  int n;            /* no. de elementos na sequencia */
  int i;            /* contador de numeros lidos */
  int numero;       /* usado para ler a sequencia */
  int paridade;     /* indica a paridade do segmento (0 = par, 1 = impar) */
  int k;            /* candidado a grau da alternacia */
  int kaux;         /* tamanho do segmento corrente */  
  int k_alternante; /* indica se a sequencia e' ou nao k-alternate */

  printf("Determino se uma sequencia de n (>0) inteiros e k-alternante.\n");

  /* leia o tamanho da sequecia */
  printf("Entre com n: ");
  scanf ("%d", &n);

  /* determina candidato a k e paridade do primeiro 1o. segmento */
  printf("Entre com o 1o. numero da sequencia: ");
  scanf ("%d", &numero);
  paridade = numero % 2;
  k = 1;
  i = 1; 
  while (i < n && numero % 2 == paridade) 
    {
      printf("Entre com o %do. numero da sequencia: ", i+1);    
      scanf ("%d", &numero);
      i = i + 1; /* mais um numero foi lido */
      if (numero % 2 == paridade)
        {
          k = k + 1;
	}
    }

  /* neste ponto vale que k e' o comprimento do 1o. segmento de 
   * mesma paridade.
   */
  printf("candidato a k = %d\n", k);


  /* a sequencia e' k-alternante ate que se prove o contrario */
  k_alternante = TRUE;
  while (i < n) 
    {
      /* ajuste a alternancia da paridade */
      paridade = (paridade + 1) % 2; 

      kaux = 1;
      while (i < n && numero % 2 == paridade) 
	{
	  printf("Entre com o %do. numero da sequencia: ", i+1);    
	  scanf ("%d", &numero);
	  i = i + 1; /* mais um numero foi lido */
	  if (numero % 2 == paridade)
	    {
	      kaux = kaux + 1;
	    }
	}
      
      if (kaux != k) 
	{
	  k_alternante = FALSE;
	}
    }
  
  /* o ultimo elemento merece um cuidado especial... */
  if (numero % 2 != paridade && k != 1) 
    {
      k_alternante = FALSE;
    }
  
  if (k_alternante == TRUE) 
    printf("A sequencia e %d-alternante\n", k);
  else
    printf("A sequencia nao e' k-alternante\n");
    
  return 0;
} 
