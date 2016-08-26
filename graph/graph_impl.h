#ifndef GRAPH_IMPL_H
#define GRAPH_IMPL_H

#include <stdio.h>
#include "vertex.h"

template <class T>
class GraphImpl {
    public:
        virtual ~GraphImpl()=0;
        virtual Vertex<T>* GetVertex()=0;
        virtual Vertex<T>* AddVertex()=0;
        virtual void AddVertex(const Vertex<T>* v)=0;
        virtual void AddEdge(const Vertex<T>* v, const Vertex<T>* w)=0;
        virtual void RemoveVertex(Vertex<T>* v)=0;
        virtual void RemoveEdge(const Vertex<T>* v, const Vertex<T>* w)=0;
        virtual bool Adjacent(const Vertex<T>* v, const Vertex<T>* w)=0;
        virtual std::vector<Vertex<T>*>* Neighbors(const Vertex<T>* v)=0;
        virtual size_t GetSize()=0;
};

#endif // GRAPH_IMPL_H
