CC = g++

all:
	$(CC) memes/memes.cpp -o bin/memes

init:
	mkdir bin
	mkdir build

run: all
	./bin/memes
