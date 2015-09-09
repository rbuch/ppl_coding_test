CC=g++

binary: main.o binary.o
	$(CC) -o binary $^

main.o: main.cpp
	$(CC) -c $<

binary.o: binary.cpp binary.h
	$(CC) -c $<

test: binary
	./binary 10

clean:
	rm binary binary.o main.o
