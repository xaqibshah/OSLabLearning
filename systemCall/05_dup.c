#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<stdio.h>
  int main(){

	int fd, fd1;
	fd = open("dup", O_RDONLY);
	printf("OLD file Descriptor %d \n", fd);
//	fd1=dup(fd);
	fd1 = dup2(fd, 7);
	printf("NEW fle descriptor %d \n", fd1);

}
