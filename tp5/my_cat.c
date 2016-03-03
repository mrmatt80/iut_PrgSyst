#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>

int main(int argc,char* argv[]){
	int desc;
	int i,d,j,taille;
	char* c=NULL;
	char* nomFi=NULL;
	c=(char*)malloc(sizeof(char)*512);

if(argc<2){
	perror("saisir au moins un argument");
	exit(1);}

for(j=1; j <argc;j++){

	if((desc=open(argv[j],O_RDONLY))==-1){
		perror("my_cat:open");
		exit(2);}
		i=0;
		taille=sizeof(strlen(argv[j]))+25;
		nomFi=(char*)malloc(taille);
		strcat(nomFi,"---- Fichier");
		strcat(nomFi,argv[j]);
		strcat(nomFi," ----\n");
		write(1,nomFi,taille);

	while((d=read(desc,c,512))!=0){
		write(1,c,d);
		i++;
		};

	free(nomFi);
}
	
	close(desc);
	free(c);
	exit(0);
}
	

	

