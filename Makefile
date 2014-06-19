app: main.o
	CC -o bin/app main.o

main.o:
	CC -c main.c
