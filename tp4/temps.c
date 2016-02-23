#include"temps.h"

int main(){
	int x;
	teps t,t1,t2;
	t1=(teps)malloc(sizeof(tps));
	t2=(teps)malloc(sizeof(tps));
	printf("veuillez saisir l'heure 1: (HH:MM)\n");
	scanf("%d:%d",&t1->heures,&t1->minutes);
	printf("veuillez saisir l'heure 2: (HH:MM)\n");
	scanf("%d:%d",&t2->heures,&t2->minutes);
	t=somme(*t1,*t2);
	printf("Temps total (HH:MM) : %d:%d\n",t->heures,t->minutes);
	x=conver(*t);
	printf("Temps total (MM) : %d minutes",x);
	exit(0);
}
