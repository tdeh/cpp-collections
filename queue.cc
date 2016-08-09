#include "queue.h"
#include <stdexcept>
#include <iostream>

Queue::Queue(unsigned int capacity) :
    capacity_(capacity) {
        front_ = rear_ = 0;
        arr_[capacity] = {};
    }

void Queue::enqueue(int item) {
    if (!isEmpty() && size() == capacity_ - 1) {
        throw std::overflow_error("Queue is full!");
    }

    std::cout << "Addr of capacity " << &capacity_ << std::endl;
    std::cout << "Addr of 0th elem " << &(arr_[rear_]) << std::endl;
    arr_[rear_] = item;
    rear_ = (rear_ + 1) % capacity_;
}

int Queue::dequeue() {
    if (isEmpty()) {
        throw std::underflow_error("Queue is empty!");
    }

    int res = arr_[front_];
    front_ = (front_ + 1) % capacity_;
    return res;
}

unsigned int Queue::size() {
    return (capacity_ - front_ + rear_) % capacity_;
}

bool Queue::isEmpty() {
    return front_ == rear_;
}

void Queue::clear() {
    front_ = rear_ = 0;
}
