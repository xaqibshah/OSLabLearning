#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(){
	int n, fd, fd1;
	char buf[50];
// if file is exsist	
//       Filepath         mode
//	fd = open("test.txt", O_RDONLY);
//	n = read(fd ,buf, 10);
	n = read(0, buf, 20);
//if file don't exist
//	fd1=open("target", O_WRONLY); 
	fd1=open("target", O_WRONLY|O_APPEND); 
	write(fd1,buf,n); 
}
