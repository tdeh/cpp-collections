#include <iostream>
#include <stdexcept>
#include <cassert>
#include <string>
#include "graph.h"
#include "adjacency_list.h"

int main() {
    GraphImpl<int>* impl = new AdjacencyList<int>;
    Graph<int> graph(impl);

    return 0;
}
