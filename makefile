CC=gcc

# -c = compilation
# -Wall = throws all warnings
CFLAGS=-c -Wall

all: order
# -c = compilation
# -Wall = throws all warnings
order: main.o BIT_build.o update.o algorithm.o
	$(CC) main.o BIT_build.o update.o algorithm.o -o order

main.o: main.c
	$(CC) $(CFLAGS) main.c

BIT_build.o: BIT_build.c
	$(CC) $(CFLAGS) BIT_build.c

update.o: update.c
	$(CC) $(CFLAGS) update.c

algorithm.o: algorithm.c
	$(CC) $(CFLAGS) algorithm.c


