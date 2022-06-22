Date.o : Date.h Date.c Datexec.c
	gcc -c Datexec.c

Date : Date.o 
	gcc -o Date.o


Run : Date
	./Date

clear : 
	rm -f Date *.o
