#ifndef GRAPH_H
#define GRAPH_H

#include <map>
#include <verctor>

class Graph {
    public:
        Graph();
        virtual ~Graph() {};
        unsigned int NumVerticies();
        unsigned int NumEdges();
        // TODO(tdeh): verticies iterator, edge iterator
        Vertex* AVortex();
        void InsertEdge(Vertex* v, Vertex* w, int o);

    private:
        AdjancencyList adj_list_;
}

#endif // GRAPH_H
