#ifndef ADJACENCY_LIST_H
#define ADJACENCY_LIST_H

#include <map>
#include <vector>
#include "vertex.h"
#include "graph_impl.h"

template <class T>
class AdjacencyList : public GraphImpl<T> {
    public:
        AdjacencyList();
        virtual ~AdjacencyList();
        virtual Vertex<T>* GetVertex();
        virtual Vertex<T>* AddVertex();
        virtual void AddVertex(const Vertex<T>* v);
        virtual void AddEdge(const Vertex<T>* v, const Vertex<T>* w);
        virtual void RemoveVertex(Vertex<T>* v);
        virtual void RemoveEdge(const Vertex<T>* v, const Vertex<T>* w);
        virtual bool Adjacent(const Vertex<T>* v, const Vertex<T>* w);
        virtual std::vector<Vertex<T>*>* Neighbors(const Vertex<T>* v);
        virtual size_t GetSize();

    private:
        void RemoveNeighbor(const Vertex<T>* v, const std::vector<Vertex<T>*>* neighbors);
        typename std::vector<Vertex<T>*>::iterator FindVertex(const Vertex<T>* v, const std::vector<Vertex<T>*>* neighbors);

        std::map<Vertex<T>*, std::vector<Vertex<T>*>> vertex_map_;
};

#endif // ADJACENCY_LIST_H
