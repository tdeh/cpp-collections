#include "vertex.h"

template <class T>
Vertex::Vertex(T value) : value_(value) {};

template <class T>
T Vertex::GetValue() {
    return value_;
}

template <class T>
void Vertex::SetValue(T value) {
    value_ = value;
}
