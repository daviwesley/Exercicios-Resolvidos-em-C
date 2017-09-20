#include <pthread.h>
#include <stdio.h>

int value = 0;

void *runner(void *param){
  value = 5;
  pthread_exit(0);
}

int main(int argc, char *argv[]){
  int pid;
  pthread_t tid;
  pid = fork();

  if(pid == 0){
  pthread_create(&tid,NULL,runner,NULL);
  pthread_join(tid,NULL);
  printf("child: value=%d",value); /*C*/
  }
else if(pid > 0){
  wait(NULL);
  printf("parent: value=%d",value); /*P*/
}
}
