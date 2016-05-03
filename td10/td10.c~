include "toll.h"



int main(){

	srand(TIME(NULL));
	pthread_t blancheNeige, lesNains ;
	struct t;
	
	if(sem_init(&t.SdB,1,0)==-1){
		perror("sem_init: erreur de creation du semaphore A");
		exit(2);}

	if(sem_init(&t.menage,1,0)==-1){
		perror("sem_init: erreur de creation du semaphore B");
		exot(2);}

	printf("Lancement de la journée");

	if(pthread_create(&blancheNeige, NULL, threadblancheNeige, (void*)&t !=0){
			fprintf(stderr,"Blanche Neige est encore au lit toute fatiguee");
			exit(3);
	}
	if(pthread_create(&lesNains, NULL, threadlesNains, (void*)&t !=0){
			fprintf(stderr,"Les nains ont trop piocher hier soir");
			exit(3);
	}

	pthread_exit(NULL);
		
	  
