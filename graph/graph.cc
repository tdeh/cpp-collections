#include "graph.h"

template <class T>
Graph<T>::Graph(GraphImpl<T>* impl) : impl_(impl) {}

template <class T>
Vertex<T>* Graph<T>::GetVertex() {
    return impl_->GetVertex();
}

template <class T>
Vertex<T>* Graph<T>::AddVertex() {
    return impl_->AddVertex();
}

template <class T>
void Graph<T>::AddVertex(const Vertex<T>* v) {
    impl_->AddVertex(v);
}

template <class T>
void Graph<T>::AddEdge(const Vertex<T>* v, const Vertex<T>* w) {
    impl_->AddEdge(v, w);
}

template <class T>
void Graph<T>::RemoveVertex(Vertex<T>* v) {
    impl_->RemoveVertex(v);
}

template <class T>
void Graph<T>::RemoveEdge(const Vertex<T>* v, const Vertex<T>* w) {
    impl_->RemoveEdge(v, w);
}

template <class T>
unsigned int Graph<T>::NumVerticies() {
    return impl_->NumVerticies();
}

template <class T>
bool Graph<T>::Adjacent(const Vertex<T>* v, const Vertex<T>* w) {
    return impl_->Adjacent(v, w);
}

template <class T>
std::vector<Vertex<T>*>* Graph<T>::Neighbors(const Vertex<T>* v) {
    return impl_->Neighbors(v);
}

template <class T>
size_t Graph<T>::GetSize() {
    return impl_->GetSize();
}
