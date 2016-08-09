OBJS = main.o queue.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c -std=c++11 $(DEBUG)
LFLAGS = -Wall $(DEBUG)

a.out : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o a.out

main.o : main.cc queue.h
	$(CC) $(CFLAGS) main.cc

queue.o : queue.h queue.cc
	$(CC) $(CFLAGS) queue.cc

clean:
	\rm *.o a.out
