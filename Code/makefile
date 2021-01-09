run: main
	rm *.o
	@./main

main: main.o fonction.o libisentlib.a
	gcc -o main main.o fonction.o libisentlib.a -lm -lglut -lGL -lX11 -fPIC

main.o: main.c tpGfx/BmpLib.h tpGfx/GfxLib.h tpGfx/ESLib.h libisentlib.a
	gcc -g -Wall -c main.c -fPIC

fonction.o: fonction.c tpGfx/BmpLib.h tpGfx/GfxLib.h tpGfx/ESLib.h libisentlib.a
	gcc -g -Wall -c fonction.c libisentlib.a -lm -lglut -lGL -lX11 -fPIC

menu.o: menu.c tpGfx/BmpLib.h tpGfx/GfxLib.h tpGfx/ESLib.h libisentlib.a
	gcc -g -Wall -c menu.o libisentlib.a -lm -lglut -lGL -lX11 -fPIC
