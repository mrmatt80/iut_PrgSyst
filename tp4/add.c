#include "temps.h"

teps somme(tps t1,tps t2){
	teps t;
	t =(teps)malloc(sizeof(tps));
	t->minutes=(t1.minutes+t2.minutes)%60;
	t->heures =(t1.heures+t2.heures)+((t1.minutes+t2.minutes)/60);
	return t;
}
		
