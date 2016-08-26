#include "graph.h"

Graph::Graph(GraphImpl* impl) : impl_(impl) {}

Vertex* Graph::GetVertex() {
    return impl_->GetVertex();
}

Vertex* Graph::AddVertex() {
    impl_->AddVertex(v);
}

void Graph::AddVertex(const Vertex* v) {
    impl_->AddVertex(v);
}

void Graph::AddEdge(const Vertex* v, const Vertex* w) {
    impl_->AddEdge(v, w);
}

void Graph::RemoveVertex(Vertex* v) {
    impl_->RemoveVertex(v);
}

void Graph::RemoveEdge(const Vertex* v, const Vertex* w) {
    impl_->RemoveEdge(v, w);
}

unsigned int Graph::NumVerticies() {
    return impl_->NumVerticies();
}

bool Graph::Adjacent(const Vertex* v, const Vertex* w) {
    return impl_->Adjacent(v, w);
}

size_t Graph::GetSize() {
    return impl_->GetSize();
}
