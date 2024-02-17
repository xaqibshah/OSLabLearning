#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>


int main(){

	int n, f, f1;
	char buff[10];
	f=open("seeking", O_RDWR);  // 1234567890abcdefghijx1x2x3x4x5
	read(f,buff,10); //1234567890
	write(1,buff,10);

			//wehre SEEK_CUR,start Selecting from current position	lseek(f, 10, SEEK_CUR);   
	 // SEEK_SET, start selecting from Begning
	f1=lseek(f,-11, SEEK_END);
	printf("\n Pointer is at %d position \n", f1);	
	read(f,buff,10);//abcdefghij
	write(1,buff,10);
}
