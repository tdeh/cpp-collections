#ifndef GRAPH_IMPL_H
#define GRAPH_IMPL_H

class GraphImpl {
    public:
        virtual GraphImpl()=0;
        virtual ~GraphImpl()=0;
        virtual Vertex* GetVertex()=0;
        virtual void AddVertex()=0;
        virtual void AddVertex(const Vertex* v)=0;
        virtual void AddEdge(const Vertex* v, Vertex* w)=0;
        virtual void RemoveVertex(Vertex* v)=0;
        virtual void RemoveEdge(const Vertex* v, const Vertex* w)=0;
        virtual bool Adjacent(const Vertex* v, const Vertex* w)=0;
        virtual size_t GetSize()=0;
        // virtual std::vector<Vertex*>* GetNeighbors(Vertex* v)=0;
}

#endif // GRAPH_IMPL_H
