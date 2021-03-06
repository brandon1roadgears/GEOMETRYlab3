CFLAGS = -Wall -Werror
OBJ = gcc $(CFAGS) -c $< -o $@

.PHONY: clean

all: trackone tracktwo bin/geometry.exe

trackone:
	mkdir -p build

tracktwo:
	mkdir -p bin

bin/geometry.exe: build/main.o build/insercts.o	
	gcc $(CFLAGS) $^ -o $@

build/main.o: src/main.c src/geometry.h 
	$(OBJ)
build/insercts.o: src/insercts.c src/geometry.h
	$(OBJ)


clean:
	rm build/*.o
	rm bin/*.exe
	rm -R build
	rm -R bin
