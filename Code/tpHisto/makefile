run: main
	@./main


main: main.o ../tpGfx/libisentlib.a
	gcc -Wall main.o -o main ../tpGfx/libisentlib.a -lm -lglut -lGL -lX11

main.o: main.c
	gcc -Wall -c main.c

clean:
	rm main *.o
