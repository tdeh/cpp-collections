#include "adjacency_list.h"
#include <stdexcept>
#include <stdio.h>

template <class T>
AdjacencyList<T>::~AdjacencyList() {
    for (auto it = vertex_map_.begin(); it != vertex_map_.end(); ++it) {
        delete *it;
    }
}

template <class T>
Vertex<T>* AdjacencyList<T>::AddVertex() {
    Vertex<T>* v = new Vertex<T>;
    AddVertex(v);
    return v;
}

template <class T>
void AdjacencyList<T>::AddVertex(const Vertex<T>* v) {
    // Check if vertex is already in the map
    if (vertex_map_.find(v) != vertex_map_.end()) {
        return;
    }

    // Initialize vector for vertex v
    vertex_map_[v] = std::vector<Vertex<T>*>();
}

template <class T>
void AdjacencyList<T>::AddEdge(const Vertex<T>* v, const Vertex<T>* w) {
    // Check if edge already exists
    if (Adjacent(v, w)) {
        return;
    }

    // Add vertecies to eachother's neighbors
    vertex_map_[v].push_back(w);
    vertex_map_[w].push_back(v);
}

template <class T>
void AdjacencyList<T>::RemoveVertex(Vertex<T>* v) {
    // Iterate through neighbors, remove vertex from other vertecies neighbor list
    std::vector<Vertex<T>*>* neighbors = Neighbors(v);
    for (auto it = neighbors->begin(); it != neighbors->end(); ++it) {
        RemoveNeighbor(v, Neighbors(*it));
    }

    delete v;
}

template <class T>
void AdjacencyList<T>::RemoveEdge(const Vertex<T>* v, const Vertex<T>* w) {
    RemoveNeighbor(w, Neighbors(v));
    RemoveNeighbor(v, Neighbors(w));
}

template <class T>
Vertex<T>* AdjacencyList<T>::GetVertex() {
    // Throw an error if there are no vertecies
    if (vertex_map_.size() <= 0) {
        throw std::underflow_error("No vertecies exist!");
    }

    // Return an arbitrary vertex
    return *(vertex_map_.begin());
}

template <class T>
bool AdjacencyList<T>::Adjacent(const Vertex<T>* v, const Vertex<T>* w) {
    std::vector<Vertex<T>*>* neighbors = Neighbors(v);

    if (FindVertex(w, neighbors) != neighbors->end()) {
        return true;
    } else {
        return false;
    }
}

template <class T>
size_t AdjacencyList<T>::GetSize() {
    return vertex_map_.size();
}

template <class T>
std::vector<Vertex<T>*>* AdjacencyList<T>::Neighbors(const Vertex<T>* v) {
    return &(vertex_map_.at(v));
}

template <class T>
void AdjacencyList<T>::RemoveNeighbor(const Vertex<T>* v, const std::vector<Vertex<T>*>* neighbors) {
    typename std::vector<Vertex<T>*>::iterator it = FindVertex(v, neighbors);
    if (it != neighbors->end()) {
        neighbors->erase(it);
    }
}

template <class T>
typename std::vector<Vertex<T>*>::iterator AdjacencyList<T>::FindVertex(const Vertex<T>* v, const std::vector<Vertex<T>*>* neighbors) {
    typename std::vector<Vertex<T>*>::iterator it = neighbors->begin();
    for (; it != neighbors->end(); ++it) {
        if (*it == v) {
            break;
        }
    }

    return it;
}
