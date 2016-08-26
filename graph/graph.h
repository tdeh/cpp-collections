#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <stdio.h>
#include "vertex.h"
#include "graph_impl.h"

class Graph {
    public:
        Graph(GraphImpl* impl);
        virtual ~Graph() {};
        Vertex* GetVertex();
        void AddVertex(Vertex* v);
        void AddEdge(Vertex* v, Vertex* w);
        void RemoveVertex(Vertex* v);
        void RemoveEdge(Vertex* v, Vertex* w);
        unsigned int NumVerticies();
        unsigned int NumEdges();
        bool Adjacent(Vertex* v, Vertex* w);
        std::vector<Vertex*>* Neighbors(Vertex* v);
        size_t GetSize();

    private:
        GraphImpl* impl_;
};

#endif // GRAPH_H
