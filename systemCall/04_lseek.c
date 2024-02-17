#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>


int main(){

	int n, f, f1;
	char buff[10]
	f=open("seeking", O_RDWR);  // 1234567890abcdefghijx1x2x3x4x5
	read(f,buff,10);
	write(1,buff,10);
	read(f,buff,10);
	write(1,buff,10);
}
