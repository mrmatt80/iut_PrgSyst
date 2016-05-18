#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<netdb.h>
#include<arpa/inet.h>
#include<unistd.h>

int main(int argn, char* argv[]){

        struct sockaddr_in st;
        int sd;
        int rd,j;
        double i;
        struct addrinfo *res;
        struct sockaddr_in *ptr2;

if(argn!=2)
{
        fprintf(stderr,"erreur : nombre d'arguments invalides");
        exit(1);
}

if((sd=socket(PF_INET,SOCK_STREAM,0))==-1)
{
        perror("TD13 : socket");
        exit(2);
}

st.sin_family=PF_INET;
st.sin_port=htons(3615);
if((getaddrinfo(argv[1],NULL,NULL,&res)==-1)){
        perror("TD13 : addr resolv");
}
ptr2=(struct sockaddr_in*)res->ai_addr;
st.sin_addr.s_addr=ptr2->sin_addr.s_addr;
if(connect(sd,&st,sizeof(st))==-1)
{
        perror("TD13 : connect ");
        exit(3);
}
printf("Veuillez saisir la valeur : ");
scanf("%d",&j);
rd=write(sd,&j,sizeof(int));
rd=read(sd,&i,sizeof(long));
close(sd);
printf("Factorielle = %l ",i);
exit(0);
}

