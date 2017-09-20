#include <stdio.h>
#include <unistd.h>
//
int main(){
  fork();
  fork();
  fork();
  printf("Ola\n" );
  return 0;
}
