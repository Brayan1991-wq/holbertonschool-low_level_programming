OBJ = main.o school.o
NAME = school
cc = gcc
SRC =  main.c school.c
school: $(OBJ)
	$(cc)  $(OBJ) -o $(NAME)

main.o : $(OBJ) m.h
	$(cc) -c main.c

school.o : $(SRC) m.h
	$(cc) -c school.c
%.o : %.c
	$(cc) -c $< -o $@

clean:
	rm -f *.o $(NAME)
