<<<<<<< HEAD
run: main
	rm *.o
	@./main

main: main.o options.o ../tpGfx/libisentlib.a
	gcc -Wall main.o options.o -o main ../tpGfx/libisentlib.a -lm -lglut -lGL -lX11

main.o: main.c 
	gcc -g -Wall -c main.c

options.o: options.c 
	gcc -g -Wall -c options.c
=======
run: main
	rm *.o
	@./main

main: main.o options.o ./tpGfx/libisentlib.a
	gcc -Wall main.o options.o -o main ./tpGfx/libisentlib.a -lm -lglut -lGL -lX11

main.o: main.c 
	gcc -g -Wall -c main.c

options.o: options.c 
	gcc -g -Wall -c options.c
>>>>>>> parent of b57315b (grains  +  pac man)
