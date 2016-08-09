#include "queue.h"

Queue::Queue(size_t size) : capacity_(capacity), arr[capacity] {
    front_ = rear_ = size_ = 0;
}

void Queue::enqueue(int item) {
    if (isFull()) {
        throw std::overflow_error("Queue is full!");
    }

    rear_ = (rear_ + 1) % capacity_;
    ++size_;
    arr_[rear_] = item;
}

int Queue::dequeue() {
    if (size_ == 0) {
        throw std::underflow_error("Queue is empty!");
    }

    int res = arr_[front_];
    front_ = (front_ - 1) % capacity_;
    --size_;

    return res_;
}
