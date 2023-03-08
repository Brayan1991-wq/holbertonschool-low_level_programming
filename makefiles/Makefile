cc = gcc
SRC =  main.c school.c

school: main.o school.o
	gcc  main.o school.o -o school

main.o : main.c school.c m.h
	gcc -c main.c

school.o : school.c main.c m.h
	gcc -c school.c

clean:
	rm -f *.o school
