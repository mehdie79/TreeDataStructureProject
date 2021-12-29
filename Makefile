# Compile the c files into the .o and create the main executable

CC = g++
#CFLAGS = -g -Wall -Werror

all: main

main: main.o 
	$(CC) main.o -o main
main.o: main.cpp
	$(CC) -c main.cpp
clean:
	rm -f core *.o main 
