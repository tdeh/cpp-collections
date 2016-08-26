#ifndef ADJACENCY_LIST_H
#define ADJACENCY_LIST_H

#include <map>
#include <vector>
#include "vertex.h"
#include "graph_impl.h"

class AdjancencyList : public GraphImpl {
    public:
        AdjancencyList();
        virtual ~AdjancencyList() {};

    private:
        void RemoveNeighbor(const Vertex* v, const std::vector<Vertex*>* neighbors);
        std::vector<Vertex*>::iterator FindVertex(const Vertex* v, const std::vector<Vertex*>* neighbors);

        std::map<Vertex*, std::vector<Vertex*>> vertex_map_;
}

#endif // ADJACENCY_LIST_H
