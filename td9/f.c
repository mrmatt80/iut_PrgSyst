#include<math.h>
#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
void *f(void * arg)
{
	int * deb=(int *)arg;
	double *total;
	int i=0;
	total=(double*)malloc(sizeof(double));
	*total=0;
	for (i=*deb;i<=100;i=i+2){
		*total=*total+sqrt(i);
		}
		
	pthread_exit((void*)total);
}
