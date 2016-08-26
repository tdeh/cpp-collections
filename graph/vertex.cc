#include "vertex.h"

template <class T>
Vertex<T>::Vertex(T value) : value_(value) {};

template <class T>
T Vertex<T>::GetValue() {
    return value_;
}

template <class T>
void Vertex<T>::SetValue(T value) {
    value_ = value;
}
