EXEC = main
OBJ = main.o randimport.o
CC = gcc
CFLAGS = -Wall -ansi -pedantic -g

main: main.o randimport.o
	 $(CC) $(CFLAGS) $(OBJ) -o $(EXEC) 

main.o: main.c randimport.h
	$(CC) $(CFLAGS) -c main.c -o main.o

randimport.o: randimport.c
	$(CC) $(CFLAGS) -c randimport.c -o randimport.o
