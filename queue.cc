#include "queue.h"

Queue::Queue(size_t size) : capacity_(capacity), arr[capacity] {
    front_ = rear_ = size_ = 0;
}

void Queue::enqueue(int item) {
    if (isFull()) {
        throw -1;
    }

    ++rear_;
    arr_[rear_] = item;
}
