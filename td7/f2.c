#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<dirent.h>
#include<time.h>

#define max 100000

void f2(int *d){
int i;
int m,n,res,s=0;
float x,y;
close(d[1]);

for(i=0;i<max;i++){
	read(d[0],&x,sizeof(float));
	read(d[0],&y,sizeof(float));
	m=x*x+y*y;
	n=i;
	res=4.0*m/n;
printf("%d",res);
	if(m<=1)
	  s=s+1;
}


close(d[0]);
exit(0);
}
