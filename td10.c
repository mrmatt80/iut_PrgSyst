#include<semaphore.h>
#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<pthread.h>
#include<time.h>

void* Ma(){

while(1)
{
	sleep();
	pthread_mutex_lock(&mut);
	if(nb==S){
	printf("Rach A : panier plein \n");
	pthread_mutex_lock(&pplein,&mut);}


	nb++;

	if(nb==1){pthread_cond_signal(&pvide);}

	pthread_mutex_unlock(&mut);
}
}
