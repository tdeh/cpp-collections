#ifndef VERTEX_H
#define VERTEX_H

#include <vector>

template <class T>
class Vertex {
    public:
        Vertex(T value);
        virtual ~Vertex() {};
        T GetValue();
        void SetValue(T value);

    private:
        T value_;
        std::vector<Vertex*>* neighbors_;
};

#endif // VERTEX_H
