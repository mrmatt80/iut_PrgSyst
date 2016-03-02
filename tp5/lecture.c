#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>


int main(){
	int desc;
	int i;
	char c;
	float r;
	desc=open("Mystere",O_RDONLY);
	if(desc==-1){
	perror("TD5:open");
	exit(1);
	}
	read(desc,&i,sizeof(int));
	printf("%d\n",i);
	read(desc,&c,sizeof(char));
	printf("%c\n",c);
	read(desc,&r,sizeof(float));
	printf("%f\n",r);
	exit(0);
}
