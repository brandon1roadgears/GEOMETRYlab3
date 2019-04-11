CFLAGS = -Wall -Werror
OBJ = g++ $(CFAGS) -c $< -o $@

.PHONY: clean

all: folder1 folder2 bin/geometry.exe

folder1:
	mkdir -p build

folder2:
	mkdir -p bin

clean:
	rm build/*.o
	rm bin/*.exe
	rm -R build
	rm -R bin
