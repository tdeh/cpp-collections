OBJS = main.o graph.o adjacency_list.o vertex.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c -std=c++11 $(DEBUG)
LFLAGS = -Wall $(DEBUG)

a.out : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o a.out

main.o : main.cc graph.h adjacency_list.h vertex.h
	$(CC) $(CFLAGS) main.cc

graph.o : graph.h graph.cc vertex.h graph_impl.h
	$(CC) $(CFLAGS) graph.cc

adjacency_list.o : adjacency_list.h adjacency_list.cc graph_impl.h vertex.h
	$(CC) $(CFLAGS) adjacency_list.cc

vertex.o : vertex.h vertex.cc
	$(CC) $(CFLAGS) vertex.cc

clean:
	\rm *.o a.out
