#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<dirent.h>
#include<time.h>


int main (){


int f;
int desc[2];
srand(time(NULL));
if (pipe(desc)==-1){
	perror(":erreur de tube\n");
}

if(fork()==0)
  f1(desc);

if(fork()==0)
  f2(desc);



exit(0);

}
