#ifndef _TOOL_H_
#define _TOOL_H_
#include<semaphore.h>
#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<time.h>

typedef	struct tool{
	sem_t SdB;
	sem_t menage;

	}tool;

void *threadBlancheNeige(void *t);
void *threadNains(void *t);

#endif 