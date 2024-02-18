//ITS not working

#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>




int main(){
	pid_t q;
	printf("befor fork \n");
	q = fork();

 if (q==0){ //child process
	printf("I am child having pid %d \n", getpid());
	printf("My parent's pid is %d \n", getppid());
}
else  // q>0 parent process
{
	printf("I am Parent having pid %d \n", getpid());
	printf("My Child's pid is %d \n", q);


}
}
