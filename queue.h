#ifndef QUEUE_H
#define QUEUE_H

class Queue {
    public:
        explicit Queue(size_t size);
        ~Queue();
        void Enqueue(int item);
        void Dequeue(int item);
        size_t Size();
        bool IsEmpty();
        int Front();
};

#endif // QUEUE_H
