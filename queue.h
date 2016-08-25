#ifndef QUEUE_H
#define QUEUE_H
#include <vector>

class Queue {
    public:
        explicit Queue(unsigned int capacity);
        virtual ~Queue() {};
        void enqueue(int item);
        int dequeue();
        unsigned int size();
        bool isEmpty();
        int front();
        void clear();

    private:
        unsigned int capacity_;
        unsigned int front_;
        unsigned int rear_;
        std::vector<int> vec_;
};

#endif // QUEUE_H
