#include <stdio.h>
#include <pthread.h>
#define NUM_PHILOSOPHERS 5
#define NUM_FORKS 5

semaphore_t forks[NUM_FORKS];


long saldo = 1000;
pthread_mutex_t lock;

void * printHello(void * td) {
	long id = (long) td;
	while(1){
		//pensar
		if(td % 2 == 0){
			sem_wait(&forks[id]); //decrementa el semaforo
			sem_wait(&forks[id + 1] % NUM_PHILOSOPHERS); 
		}
		else{
			sem_wait(&forks[id + 1] % NUM_PHILOSOPHERS); 
			sem_wait(&forks[id]); //decrementa el semaforo
		}
		//comer
	}
}

int main() {
	pthread_t threads[NUM_THREAD];
	long t;
	for (t=0; t< NUM_THREAD; t++) {
		pthread_create(&threads[t], NULL, printHello, (void *) t);
	}
	
	for (t=0; t< NUM_THREAD; t++) {
		pthread_join(threads[t], NULL);
	}

	printf("Saldo final %ld \n", saldo);
	pthread_exit(NULL);
}