#ifndef VERTEX_H
#define VERTEX_H

#include <vector>

class Vertex {
    public:
        Vertex() {};
        Vertex(int value);
        virtual ~Vertex() {};
        int GetValue();
        void SetValue(int value);

    private:
        int value_;
        std::vector<Vertex*>* neighbors_;
};

#endif // VERTEX_H
