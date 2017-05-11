CC = g++

all:
	$(CC) memes/memes.cpp -o bin/memes

init:
	mkdir bin
	mkdir build

clean:
	rm -rf bin
	rm -rf build

vunjo:
	$(CC) memes/vunjo.cpp -o bin/vunjo
	./bin/vunjo

bon:
	$(CC) memes/bon.cpp -o bin/bon
	./bin/bon	

run: all
	./bin/memes
