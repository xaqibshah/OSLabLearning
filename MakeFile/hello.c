#include<stdio.h>
#include"header.h"
#include<unistd.h>

void hello(){
	printf("\n I am in hello.c \n");
	printf("\n Adding a new line in Hello.c \n");
	printf("PID of Hello.c is %d\n", getpid());


}
