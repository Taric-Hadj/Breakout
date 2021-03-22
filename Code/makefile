run: main
	rm *.o
	@./main

main: main.o fonction.o regulateur.o menu.o jeu.o ./tpGfx/libisentlib.a
	gcc -Wall main.o fonction.o  regulateur.o menu.o jeu.o -o main ./tpGfx/libisentlib.a -lm -lglut -lGL -lX11

main.o: main.c 
	gcc -g -Wall -c main.c

fonction.o: fonction.c fonction.h
	gcc -g -Wall -c fonction.c 

regulateur.o : ./Regulateur/regulateur.c fonction.h
	gcc -g -Wall -c ./Regulateur/regulateur.c 

menu.o : ./Menu/menu.c ./Menu/menu.h
	gcc -g -Wall -c ./Menu/menu.c
	
jeu.o : ./Jeu/jeu.c ./Jeu/jeu.h
	gcc -g -Wall -c ./Jeu/jeu.c




