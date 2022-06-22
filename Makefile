Date.o: Datexe.c Date.c Date.h
	gcc -c Datexe.c

Date : Date.o
	gcc -o Date.o

run : Date
	./Date

clear:
	rm -f Date *.o