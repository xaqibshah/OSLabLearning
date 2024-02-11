
#----- this is first method ------

#make:
#	gcc main.c hello.c add.c -o final


# --- First Method End -----

###########################################

#----- 2nd Method started ----

CC = gcc

final: main.o add.o hello.o
	$(CC) main.o add.o hello.o -o final

main.o:	main.c header.h
	$(CC) -c main.c

hello.: hello.c header.h
	$(CC) -c hello.c

add.o: add.c header.h
	$(CC) -c add.c

clean:
	rm *.o final	
