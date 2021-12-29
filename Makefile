# Compile the c files into the .o and create the main executable

CC = g++
#CFLAGS = -g -Wall -Werror

all: main

main: main.o tree.o
	$(CC) main.o tree.o -o main
main.o: main.cpp
	$(CC) -c main.cpp
tree.o: tree.cpp tree.hpp
	$(CC) -c tree.cpp
clean:
	rm -f core *.o main 
