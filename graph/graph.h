#ifndef GRAPH_H
#define GRAPH_H

#include <verctor>
#include "vertex.h"
#include "graph_impl.h"

class Graph {
    public:
        Graph(GraphImpl* impl);
        virtual ~Graph() {};
        // TODO(tdeh): verticies iterator, edge iterator
        Vertex* GetVertex();
        Vertex* AddVertex();
        void AddVertex(const Vertex* v);
        void AddEdge(const Vertex* v, const Vertex* w);
        void RemoveVertex(Vertex* v);
        void RemoveEdge(const Vertex* v, const Vertex* w);
        unsigned int NumVerticies();
        unsigned int NumEdges();
        size_t GetSize();

    private:
        GraphImpl* impl_;
}

#endif // GRAPH_H
