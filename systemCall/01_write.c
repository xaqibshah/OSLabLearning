#include<unistd.h>
#include<stdio.h>
int main(){

// 	    fd	constat             sizeof	
	int n=	write(1, "Hello Write System Call", 22);
	printf("\nvalue of n is %d \n", n);

//fd 0 stdinput
//fd 1 stdoutput
//fd 2 stderror

}

