CC = gcc
CFLAGS = -I.

all: main test

main: src/main.c
	$(CC) -o main src/main.c

test: test/test_main.c src/main.c
	$(CC) -o test_main test/test_main.c src/main.c

clean:
	rm -f main test_main
