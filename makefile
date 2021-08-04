run: main.o parsing.o
	gcc  -g -ansi -pedantic -Wall main.o parsing.o -o run
parsing.o: parsing.c
	gcc -c -g -ansi -pedantic -Wall parsing.c -o parsing.o
main.o: main.c
	gcc -c -g -ansi -pedantic -Wall main.c -o main.o


