CC=g++
CFLAGS= -ggdb -Wall -std=c++11

main: Stack.h.gch main.cpp
	$(CC) $(CFLAGS) main.cpp -o main
Stack.h.gch: Stack.h
	$(CC) $(CFLAGS) Stack.h
clean:
	rm -f Stack.h.gch main
