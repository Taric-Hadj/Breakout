run: main
	rm *.o
	@./main

main: main.o fonction.o ./tpGfx/libisentlib.a
	gcc -Wall main.o fonction.o -o main ./tpGfx/libisentlib.a -lm -lglut -lGL -lX11

main.o: main.c 
	gcc -g -Wall -c main.c

fonction.o: fonction.c 
	gcc -g -Wall -c fonction.c 


