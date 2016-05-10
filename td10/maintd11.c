#include "tool.h"

int main()
{
	int i;
	pthread_t blancheNeige, lesNains ;
	struct tool* t;
	pthread_t nains[7];
    srand(time(NULL));

	t=(struct tool*)malloc(sizeof(struct tool));
	if(sem_init(&t->SdB,1,0)==-1)
    {
		perror("sem_init: erreur de creation du semaphore A\n");
		exit(2);
	}

	if(sem_init(&t->menage,1,0)==-1)
    {
		perror("sem_init: erreur de creation du semaphore B\n");
		exit(2);
	}

	printf("Lancement de la journée\n");

	if(pthread_create(&blancheNeige, NULL, threadBlancheNeige, (void*)t) !=0)
    {
			fprintf(stderr,"Blanche Neige est encore au lit toute fatiguee\n");
			exit(3);
	}
	for(i=0; i<7 ; i++ )
    {
		if(pthread_create(&nains[i],NULL, threadNains, (void*)t) != 0)
        {
    		fprintf(stderr,"Erreur de queue devant la douche\n");
			exit(3);
        }
	}
	pthread_exit(NULL);
	exit(1);
}
