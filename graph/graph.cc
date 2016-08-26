#include "graph.h"

Graph::Graph(GraphImpl* impl) : impl_(impl) {}

Vertex* Graph::GetVertex() {
    return impl_->GetVertex();
}

Vertex* Graph::AddVertex() {
    return impl_->AddVertex();
}

void Graph::AddVertex(Vertex* v) {
    impl_->AddVertex(v);
}

void Graph::AddEdge(Vertex* v, Vertex* w) {
    impl_->AddEdge(v, w);
}

void Graph::RemoveVertex(Vertex* v) {
    impl_->RemoveVertex(v);
}

void Graph::RemoveEdge(Vertex* v, Vertex* w) {
    impl_->RemoveEdge(v, w);
}

unsigned int Graph::NumVerticies() {
    return impl_->NumVerticies();
}

bool Graph::Adjacent(Vertex* v, Vertex* w) {
    return impl_->Adjacent(v, w);
}

std::vector<Vertex*>* Graph::Neighbors(Vertex* v) {
    return impl_->Neighbors(v);
}

size_t Graph::GetSize() {
    return impl_->GetSize();
}
