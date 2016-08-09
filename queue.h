#ifndef QUEUE_H
#define QUEUE_H

class Queue {
    public:
        explicit Queue(size_t size);
        ~Queue();
        void enqueue(int item);
        void dequeue(int item);
        size_t size();
        bool isEmpty();
        int front();
};

#endif // QUEUE_H
