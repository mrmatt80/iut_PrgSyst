#define Max 100000 
#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<dirent.h>
#include<time.h>

void f1(int * d){
int i;
float x,y;
close(d[0]);
for(i=0; i<Max;i++){

	x=(float)rand()/RAND_MAX;
	y=(float)rand()/RAND_MAX;

	write(d[1],&x,sizeof(float));
	write(d[1],&y,sizeof(float));
}

close(d[1]);
exit(0);
}

