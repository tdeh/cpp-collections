#ifndef EDGE_H
#define EDGE_H

template <class T>
class Edge {
    public:
        Edge(Vertex* start, Vertex* end);
        virtual ~Edge() {};
        T data() {
            return data_;
        }

        Vertex* start() {
            return start_;
        }
        Vertex* end() {
            return end_;
        }
        bool directed() {
            return directed_;
        }

    private:
        Vertex* start_;
        Vertex* end_;
        bool directed_;
};


#endif // EDGE_H
