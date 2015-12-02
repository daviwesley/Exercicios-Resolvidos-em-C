#include <stdio.h>
#include <string.h>
 
typedef struct Livro {
   char  titulo[50];
   char  autor[50];
   char  assunto[100];
   int   book_id;
};

/* Declaração da Função */
void ImprimirLivro( Livro livro );

int main( ) {

   Books Livro1;        /* Declare Book1 do Tipo Livro */
   Books Book2;        /* Declare Book2 do Tipo Livro */
 
   /* Especificações do Livro1 */
   strcpy( Livro1.title, "C Programming");
   strcpy( Livro1.author, "Nuha Ali"); 
   strcpy( Livro1.subject, "C Programming Tutorial");
   Book1.book_id = 6495407;

   /* Especificações do Livro2 */
   strcpy( Livro2.title, "Telecom Billing");
   strcpy( Livro2.author, "Zara Ali");
   strcpy( Livro2.subject, "Telecom Billing Tutorial");
   Livro2.book_id = 6495700;
 
   /* Imprimir informação do Livro1 */
   ImprimirLivro( Livro1 );

   /* Imprimir informação do Livro2 */
   ImprimirLivro( Livro2 );

   return 0;
}

void ImprimirLivro( Livro livro ) {

   printf( "Titulo do Livro : %s\n", livro.titulo);
   printf( "Autor do Livro : %s\n", livro.autor);
   printf( "Assunto do Livro : %s\n", livro.assunto);
   printf( "ID do Livro : %d\n", livro.book_id);
}
