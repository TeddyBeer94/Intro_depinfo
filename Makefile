
person.o :  person.h person.c
	gcc -c person.c

elevator.o : elevator.c elevator.h person.h
	gcc -c elevator.c

main.o : main.c elevator.h 
	gcc -c main.c  

main : main.o elevator.o person.o
	gcc -c main main.o elevator.o person.o -lncurses
	
Run : 
	./main

clear : 
	rm -f main*.o
