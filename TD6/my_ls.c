#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<dirent.h>

int main(int argc,char* argv[]){
	
 DIR *rep;
struct dirent *fic;


 if(argc<2){
	fprintf(stderr,"my_ls: un argument requis\n");
	exit(1);
}
 if((rep=opendir(argv[1]))==NULL){
   perror("repertoire inexistant");
   exit(2);
}

chdir(argv[1]);

do{  
 fic=readdir(rep);


 stat(fic->d_name,&st); 
 printf("fichier : %s \n numero : %d \n",fic->d_name,(int)fic->d_ino);
 printf("nombre de liens %d \n",st.st_nlink);
 printf("Proprietaire : %d (%s)",st.st_uid);
 printf("Groupe Proprietaire : %d (%s)",);
 printf("taille en octect : %d",);




 
}while(fic!=NULL);
exit(0);

}
