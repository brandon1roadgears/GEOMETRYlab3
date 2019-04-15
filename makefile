CFLAGS = -Wall -Werror
OBJ = g++ $(CFAGS) -c $< -o $@

.PHONY: clean

comp: geometry.o main.o insercts.o

clean:
	rm build/*.o
	rm bin/*.exe
	rm -R build
	rm -R bin
