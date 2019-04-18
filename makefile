CFLAGS = -Wall -Werror
OBJ = g++ $(CFAGS) -c $< -o $@

.PHONY: clean
all: folder1 folder2 bin/geometry.exe

folder1:
	mkdir -p build

folder2:
	mkdir -p bin

bin/geometry.exe: build/main.o build/insercts.o
	g++ $(CFLAGS) $^ -o $@

build/main.o: src/main.c src/geometry.h 
	$(OBJ)
build/insercts.o: src/insercts.c src/geometry.h
	$(OBJ)


clean:
	rm build/*.o
	rm bin/*.exe
	rm -R build
	rm -R bin
