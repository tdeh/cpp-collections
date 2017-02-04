#ifndef ADJACENCY_LIST_H
#define ADJACENCY_LIST_H

#include <map>
#include <vector>
#include "vertex.h"
#include "graph_impl.h"

class AdjacencyList : public GraphImpl {
    public:
        AdjacencyList() {};
        virtual ~AdjacencyList() {};
        virtual Vertex* GetVertex();
        virtual void AddVertex(Vertex* v);
        virtual void AddEdge(Vertex* v, Vertex* w);
        virtual void RemoveVertex(Vertex* v);
        virtual void RemoveEdge(Vertex* v, Vertex* w);
        virtual bool Adjacent(Vertex* v, Vertex* w);
        virtual std::vector<Vertex*>* Neighbors(Vertex* v);
        virtual size_t GetSize();
        virtual unsigned int NumVerticies();

    private:
        void RemoveNeighbor(Vertex* v, std::vector<Vertex*>* neighbors);
        std::vector<Vertex*>::iterator FindVertex(Vertex* v, std::vector<Vertex*>* neighbors);

        std::map<Vertex*, std::vector<Vertex*>> vertex_map_;
};

#endif // ADJACENCY_LIST_H
