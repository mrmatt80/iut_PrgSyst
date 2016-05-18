#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<netdb.h>
#include<arpa/inet.h>
#include<unistd.h>


int main(){
	int sd;
	int st,i;
	struct sockaddr_in st;
	pthread pth_socket;
if((sd=socket(PF_INET,SOCK_STREAM,0))==-1){
	perror("TD14 : error socket");		
}	
st.sin_family=PF_INET;
st.sin_port=3615;
st.sin_addr.s_addr=INADDR_ANY;

if((bind(sd,&st,sizeof(st))==-1)){
	perror("TD14 : error bind");
}

listen(sd,4);

while(1){

	if((st=accept(sd,NULL,NULL))==-1){
		perror("TD14 : error eccept");
	}
	(pthread_create(&pth_socket,NULL,threadfacto,(void*)i));
pthread_detach(pth_socket)	
}

	
}


threadfacto(void* i){
	int j,k;
	(int)i =k;
	for(j=1;j<k;j++){
		j=j*k
	}	
}


}

