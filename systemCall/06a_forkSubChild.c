//ITS not working

#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>




int main(){
	pid_t q;
	printf("befor fork \n");
	q = fork();

 if (q==0){ //child process
	printf("The value of q is: %d \n", q); 
	printf("I am child having pid %d \n", getpid());
	printf("My parent's pid is %d \n", getppid());
	pid_t subProc;
	subProc = fork();

	if (q==0){
		printf("i'm sub child process %d \n", getpid());
		printf("my  parent process is %d \n", getppid());
}
	else{
		printf("i'm sub parent PID is %d \n",getpid());
		printf("i'm sub child having PID is %d \n", q); 
}
}
else  // q>0 parent process
{
	printf("I am Parent having pid %d \n", getpid());
	printf("My Child's pid is %d \n", q);


}
printf("common \n");
}
