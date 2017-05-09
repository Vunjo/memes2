CC = g++

all:
	$(CC) memes/main.cpp -o bin/memes

init:
	mkdir bin
	mkdir build
	