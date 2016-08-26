#include "adjacency_list.h"
#include <stdexcept>

AdjancencyList();

virtual ~AdjancencyList() {};

Vertex* AddVertex() {
    Vertex* v = new Vertex;
    AddVertex(v);
    return v;
}

void AddVertex(const Vertex* v) {
    // Check if vertex is already in the map
    if (vertex_map_.find(v) != vertex_map_.end()) {
        return;
    }

    // Initialize vector for vertex v
    vertex_map_[v] = vector();
}

void AddEdge(const Vertex* v, const Vertex* w) {
    // Check if edge already exists
    if (Adjacent(v, w)) {
        return;
    }

    // Add vertecies to eachother's neighbors
    vertex_map_[v].push_back(w);
    vertex_map_[w].push_back(v);
}

void RemoveVertex(Vertex* v) {
    // Iterate through neighbors, remove vertex from other vertecies neighbor list
    std::vector<Vertex*>* neighbors = GetNeighbors(v);
    for (auto it = neighbors->begin(), it != neighbors->end(); ++it) {
        RemoveNeighbor(v, GetNeighbors(*it));
    }

    delete v;
}

void RemoveEdge(const Vertex* v, const Vertex* w) {
    RemoveNeighbor(w, GetNeighbors(v));
    RemoveNeighbor(v, GetNeighbors(w));
}

Vertex* AdjancencyList::GetVertex() {
    // Throw an error if there are no vertecies
    if (vertex_map_.size() <= 0) {
        throw std::underflow_error("No vertecies exist!");
    }

    // Return an arbitrary vertex
    return *(vertex_map_.begin());
}

bool Adjacent(const Vertex* v, const Vertex* w) {
    std::vector<Vertex*>* neighbors = GetNeighbors(v);

    if (FindVertex(w, neighbors) != neighbors->end()) {
        return true;
    } else {
        return false;
    }
}

size_t AdjancencyList::GetSize() {
    return vertex_map_.size();
}

std::vector<Vertex*>* GetNeighbors(const Vertex* v) {
    return &(vertex_map_.at(v));
}

void AdjancencyList::RemoveNeighbor(const Vertex* v, const std::vector<Vertex*>* neighbors) {
    std::vector<Vertex*>::iterator it = FindVertex(v, neighbors);
    if (it != neighbors->end()) {
        neighbors->erase(it);
    }
}

std::vector<Vertex*>::iterator AdjancencyList::FindVertex(const Vertex* v, const std::vector<Vertex*>* neighbors) {
    std::vector<Vertex*>::iterator it = neighbors->begin();
    for (; it != neighbors->end(); ++it) {
        if (*it == v) {
            break;
        }
    }

    return it;
}
