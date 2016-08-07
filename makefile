OBJS = main.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c -std=c++11 $(DEBUG)
LFLAGS = -Wall $(DEBUG)

a.out : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o a.out

main.o : main.cc
	$(CC) $(CFLAGS) main.cc

clean:
	\rm *.o a.out
