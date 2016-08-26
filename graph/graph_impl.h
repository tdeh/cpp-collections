#ifndef GRAPH_IMPL_H
#define GRAPH_IMPL_H

#include <stdio.h>
#include "vertex.h"

class GraphImpl {
    public:
        virtual ~GraphImpl() {};
        virtual Vertex* GetVertex()=0;
        virtual void AddVertex(Vertex* v)=0;
        virtual void AddEdge(Vertex* v, Vertex* w)=0;
        virtual void RemoveVertex(Vertex* v)=0;
        virtual void RemoveEdge(Vertex* v, Vertex* w)=0;
        virtual bool Adjacent(Vertex* v, Vertex* w)=0;
        virtual std::vector<Vertex*>* Neighbors(Vertex* v)=0;
        virtual size_t GetSize()=0;
        virtual unsigned int NumVerticies()=0;
};

#endif // GRAPH_IMPL_H
