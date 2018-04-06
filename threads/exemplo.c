#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#define MAX 5
//variavel local pra que neh ;) kjkjk
pthread_mutex_t mutex;
pthread_cond_t cond_produtor, cond_consumidor;
int buffer[MAX];
int producao = 0;
int posAtual = 0;
int atraso1, atraso2 = 0;

void imprimirVetor(){
  for (size_t i = 0; i < MAX; i++) {
    printf("%d-",buffer[i]);
    /* code */
  }
}

void sleepms(int millisegundos){
	millisegundos = 1000 * millisegundos;
	usleep(millisegundos);
}

void *produtor(void *ptr) {
  int n = 0;
  while (1) {
    pthread_mutex_lock(&mutex);
    //sleep(1);
    while(producao !=0) pthread_cond_wait(&cond_produtor,&mutex);
    n = (int)(drand48() * 90.0);
    printf("\t\t[HD]produzindo numero %d\n",n );
    if(posAtual == MAX){
      posAtual = 0;
    }
    buffer[posAtual] = n;
    producao=1;
    posAtual++;
    imprimirVetor();
    pthread_cond_signal(&cond_consumidor);
    pthread_mutex_unlock(&mutex);
    sleepms(atraso1);
  }
  pthread_exit(0);
}

void *consumidor(void *ptr) {
  while (1) {
    pthread_mutex_lock(&mutex);
    //sleep(2);
    while(producao == 0) pthread_cond_wait(&cond_consumidor,&mutex);
    printf("\t[PENDRIVER]Consumindo %d\n",buffer[posAtual-1]);
    producao=0;
    pthread_cond_signal(&cond_produtor);
    pthread_mutex_unlock(&mutex);
    sleepms(atraso2);
  }
  pthread_exit(0);
}

int main(int argc, char const *argv[]) {
  pthread_t prod,cons;
  srand48(time(NULL));

  printf("Digite o atraso do HD: ");
	scanf("%d",&atraso1);

	printf("Digite o atraso do PENDRIVER: ");
	scanf("%d",&atraso2);

  pthread_mutex_init(&mutex,0);
  pthread_cond_init(&cond_consumidor,0);
  pthread_cond_init(&cond_produtor,0);

  pthread_create(&cons,0,consumidor,0);
  pthread_create(&prod,0,produtor,0);

  pthread_join(prod,0);
  pthread_join(cons,0);

  pthread_cond_destroy(&cond_consumidor);
  pthread_cond_destroy(&cond_produtor);

  pthread_mutex_destroy(&mutex);
  return 0;
}
