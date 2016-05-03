#include "tool.h"


void *threadBlancheNeige(void *arg)
{
    srand(time(NULL));
    int i;
    struct tool* t=(struct tool*) arg;
    printf("Blanche neige se lave\n");
    sleep(2*rand()%11);
    printf("Blanche neige a finis de se laver\n");
    sem_post(&t->SdB);
    sem_post(&t->SdB);
    sem_post(&t->SdB);

    for(i=0; i<7 ; i++)
    {
        sem_wait(&t->menage);
    }

    printf("Blanche Neige commence son ménage\n");

}



void *threadNains(void *arg)
{
    srand(time(NULL));
    struct tool* a= (struct tool*)arg;
    printf("Le nain se reveille et part petit déjeuné\n");
    sleep(2+rand()%11);
    printf("Le nain attend devant la salle de bain pour se doucher\n");
    sem_wait(&a->SdB);
    printf("Le Nain se douche\n");
    sleep(5+rand()%11);
    printf("Le Nain a finis de se doucher\n");
    sem_post(&a->SdB);
    sem_post(&a->menage);
    printf("Le nain part travailler\n");
}
