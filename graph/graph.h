#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <stdio.h>
#include "vertex.h"
#include "graph_impl.h"

template <class T>
class Graph {
    public:
        Graph(GraphImpl<T>* impl);
        virtual ~Graph() {};
        // TODO(tdeh): verticies iterator, edge iterator
        Vertex<T>* GetVertex();
        Vertex<T>* AddVertex();
        void AddVertex(const Vertex<T>* v);
        void AddEdge(const Vertex<T>* v, const Vertex<T>* w);
        void RemoveVertex(Vertex<T>* v);
        void RemoveEdge(const Vertex<T>* v, const Vertex<T>* w);
        unsigned int NumVerticies();
        unsigned int NumEdges();
        bool Adjacent(const Vertex<T>* v, const Vertex<T>* w);
        std::vector<Vertex<T>*>* Neighbors(const Vertex<T>* v);
        size_t GetSize();

    private:
        GraphImpl<T>* impl_;
};

#endif // GRAPH_H
