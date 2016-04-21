#include<pthread.h>
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

void *f(void* arg);

int main (){

	pthread_t t1,t2;
	int deb1=1,deb2=2;
	double* res1,res2;
	double somme;
	

	pthread_create(&t1,NULL,f,(void*)&deb1);	
	pthread_create(&t2,NULL,f,(void*)&deb2);


	pthread_join(t1,(void**)&res1);
	pthread_join(t2,(void**)&res2);

	printf("%lf",*res1 + *res2);
	exit(0);
}

