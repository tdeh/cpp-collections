#ifndef ADJACENCY_LIST_H
#define ADJACENCY_LIST_H

class AdjancencyList {
    public:
        AdjancencyList();
        virtual ~AdjancencyList() {};
        void AddEdge(Vertex* v);
        void AddNeighbor(Vertex* v, Vertex* w);
        std::vector<Vertex*>* GetNeighbors(Vertex* v);

    private:
        std::map<Vertex*, std::vector<Vertex*>> adjancency_map_;
}

#endif // ADJACENCY_LIST_H
