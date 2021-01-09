run: main
	@./main
main: main.o fonction.o fonction.o
	gcc -o main main.o fonction.o fonction.o libisentlib.a
main.o: main.c
	gcc -g -Wall -c main.c
fonction.o: fonction.c
	gcc -g -Wall -c fonction.c libisentlib.a
menu.o: menu.c
	gcc -g -Wall -c menu.o libisentlib.a
clean auto:
	rm *.o
