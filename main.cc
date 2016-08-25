#include <iostream>
#include <stdexcept>
#include <cassert>
#include "queue.h"

int main() {
    std::cout << "==== Start of Queue tests ===" << std::endl;

    Queue q(6);

    std::cout << "Testing isEmpty()..." << std::endl;
    assert(q.isEmpty());
    q.enqueue(1);
    assert(!q.isEmpty());
    q.clear();

    std::cout << "Testing wrap around..." << std::endl;
    for (int i = 0; i < 10; ++i) {
        q.enqueue(i);
        assert(q.dequeue() == i);
    }

    std::cout << "Testing size()..." << std::endl;
    q.clear();
    for (int i = 0; i < 5; ++i) {
        q.enqueue(i);
        assert(int(q.size()) == i + 1);
    }

    std::cout << "Testing enqueue() on full queue..." << std::endl;
    bool caught = false;
    try {
        q.enqueue(1);
    } catch (std::overflow_error) {
        caught = true;
    }
    assert(caught);

    std::cout << "Testing dequeue() on empty queue..." << std::endl;
    q.clear();
    caught = false;
    try {
        q.dequeue();
    } catch (std::underflow_error) {
        caught = true;
    }
    assert(caught);

    std::cout << "==== End of Queue tests ===" << std::endl;

    return 0;
}
