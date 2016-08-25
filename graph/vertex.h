#ifndef VERTEX_H
#define VERTEX_H

template <class T>
class Vertex {
    public:
        Vertex();
        virtual ~Vertex() {};
        T data() {
            return data_;
        }

    private:
        T data_;
}

#endif // VERTEX_H
