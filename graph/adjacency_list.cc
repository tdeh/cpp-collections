#include "adjacency_list.h"
#include <stdexcept>
#include <stdio.h>

void AdjacencyList::AddVertex(Vertex* v) {
    // Check if vertex is already in the map
    if (vertex_map_.find(v) != vertex_map_.end()) {
        return;
    }

    // Initialize vector for vertex v
    vertex_map_[v] = std::vector<Vertex*>();
}

void AdjacencyList::AddEdge(Vertex* v, Vertex* w) {
    // Check if edge already exists
    if (Adjacent(v, w)) {
        return;
    }

    // Add vertecies to eachother's neighbors
    vertex_map_[v].push_back(w);
    vertex_map_[w].push_back(v);
}

void AdjacencyList::RemoveVertex(Vertex* v) {
    // Iterate through neighbors, remove vertex from other vertecies neighbor list
    std::vector<Vertex*>* neighbors = Neighbors(v);
    for (auto it = neighbors->begin(); it != neighbors->end(); ++it) {
        RemoveNeighbor(v, Neighbors(*it));
    }
}

void AdjacencyList::RemoveEdge(Vertex* v, Vertex* w) {
    RemoveNeighbor(w, Neighbors(v));
    RemoveNeighbor(v, Neighbors(w));
}

Vertex* AdjacencyList::GetVertex() {
    // Throw an error if there are no vertecies
    if (vertex_map_.size() <= 0) {
        throw std::underflow_error("No vertecies exist!");
    }

    // Return an arbitrary vertex
    return vertex_map_.begin()->first;
}

bool AdjacencyList::Adjacent(Vertex* v, Vertex* w) {
    std::vector<Vertex*>* neighbors = Neighbors(v);

    if (FindVertex(w, neighbors) != neighbors->end()) {
        return true;
    } else {
        return false;
    }
}

size_t AdjacencyList::GetSize() {
    return vertex_map_.size();
}

unsigned int AdjacencyList::NumVerticies() {
    return vertex_map_.size();
}

std::vector<Vertex*>* AdjacencyList::Neighbors(Vertex* v) {
    return &(vertex_map_.at(v));
}

void AdjacencyList::RemoveNeighbor(Vertex* v, std::vector<Vertex*>* neighbors) {
    std::vector<Vertex*>::iterator it = FindVertex(v, neighbors);
    if (it != neighbors->end()) {
        neighbors->erase(it);
    }
}

std::vector<Vertex*>::iterator AdjacencyList::FindVertex(Vertex* v, std::vector<Vertex*>* neighbors) {
    std::vector<Vertex*>::iterator it = neighbors->begin();
    for (; it != neighbors->end(); ++it) {
        if (*it == v) {
            break;
        }
    }

    return it;
}
