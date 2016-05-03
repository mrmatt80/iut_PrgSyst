#include<semaphore.h>
#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<time.h>


tydepef struct tool{
	sem_t SdB;
	sem_t menage;
	};

void *threadBlancheNeige(void *);
void *threadLesNains(void *);


