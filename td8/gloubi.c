#include<semaphore.h>
#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<dirent.h>
#include<time.h>
#include<sys/mman.h>



int main()
{
  sem_t *s,*u,*m;
	s=(sem_t*)mmap(NULL,sizeof(sem_t), PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANONYMOUS,0,0);
	u=(sem_t*)mmap(NULL,sizeof(sem_t), PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANONYMOUS,0,0);
	m=(sem_t*)mmap(NULL,sizeof(sem_t), PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANONYMOUS,0,0);

	if(sem_init(s,1,0)==-1)
		perror(":erreur de semaphore S");
	if(sem_init(u,1,0)==-1)
		perror(":erreur de semaphore U");
	if(sem_init(m,1,2)==-1)
		perror(":erreur de semaphore M");


	srand(TIME(NULL));

if(fork()==0){
	printf("AC1: début bananette\n");
	sleep(2+rand()%2);
	printf("AC1 : fin de la préparation\n");
	sem_post(s);
	sem_post(s);
	sem_post(s);
	exit(0);
	}
	
if(fork()==0){
	sem_wait(s);
	sem_wait(m);

	printf("Début de AC2 : début \n");
	sleep(1+rand()%2);
	printf("fin de AC2 : fin préparation\n");

	sem_post(u);
	sem_post(m);

	exit(0);
}
	
if(fork()==0){
	sem_wait(s);
	sem_wait(m);

	printf("Début de AC3 : début \n");
	sleep(2+rand()%2);
	printf("fin de AC3 : fin préparation \n");

	sem_post(m);
	sem_post(u);
	
	
	exit(0);
}
	
if(fork()==0){
	sem_wait(s);
	sem_wait(m);

	printf("Début de AC4 : début \n");
	sleep(2+rand()%2);
	printf("fin de AC4 : fin préparation\n");
	
	sem_post(m);
	sem_post(u);
	
	
	exit(0);
}

if(fork()==0){
	sem_wait(u);
	sem_wait(u);
	sem_wait(u);

	printf("Début de AC5 : gloubibulvga \n");
	sleep(1+rand()%2);
	printf("fin de AC5 : c'est prêt !! \n");
	
	exit(0);
}
	wait(NULL);
	wait(NULL);
	wait(NULL);
	wait(NULL);
	wait(NULL);
	sem_destroy(s);
	sem_destroy(u);
	sem_destroy(m);
	exit(0);
}
	
