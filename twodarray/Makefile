CC=g++

pgm : array2d.o search.o
	$(CC) $^ -o $@

array2d.o : array2d.cpp array2d.h
	$(CC) -c $<
search.o : search.cpp array2d.h
	$(CC) -c $<

clean :
	rm pgm array2d.o search.o
