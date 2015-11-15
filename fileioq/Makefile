EXEC = cwas
OBJ = loadRecords.o calculateCWA.o processStudents.o main.o
CC = gcc
CFLAGS = -g -Wall -ansi -pedantic

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(EXEC) 

main.o: loadRecords.c calculateCWA.c processStudents.c main.c mytypes.h
	$(CC) $(CFLAGS) -c loadRecords.c calculateCWA.c processStudents.c main.c -o main.o

loadRecords.o: loadRecords.c loadRecords.h mytypes.h
	$(CC) $(CFLAGS) -c loadRecords.c -o loadRecords.o

processStudents.o: processStudents.c processStudents.h mytypes.h
	$(CC) $(CFLAGS) -c processStudents.c -o processStudents.o

calculateCWA.o: calculateCWA.c calculateCWA.h mytypes.h
	$(CC) $(CFLAGS) -c calculateCWA.c -o calculateCWA.o

clean:
	rm -f $(OBJ) $(EXEC) 
