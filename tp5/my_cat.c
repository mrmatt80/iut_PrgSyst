#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(int argc,char* argv[]){
	int desc;
	char* c;
	c=(char*)malloc(sizeof(char)*512)
	if(argv[0]==""){perror("saisir un argument valide");
	exit(1);}

	if((desc=open(argv[1],O_RDONLY))){
	perror("my_cat:open");
	exit(2);}
	
	if(read(desc,&c,512)==-1){
	perror("my_cat:read");
	exit(3);}
	
	if
	
	close(desc);
	exit(0)
}
	

	

