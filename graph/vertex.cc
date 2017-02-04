#include "vertex.h"

Vertex::Vertex(int value) : value_(value) {};

int Vertex::GetValue() {
    return value_;
}

void Vertex::SetValue(int value) {
    value_ = value;
}
