#include <stdio.h>

int main( int argc, char *argv[] )  {

   if( argc == 2 ) {
      printf("Ola Sr. %s", argv[1]);
   }
   else if( argc > 2 ) {
      printf("muitos argumentos inserido.\n");
   }
   else {
      printf("pelo menos um argumento deve ser inserido.\n");
   }
}
