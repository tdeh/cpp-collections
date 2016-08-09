#ifndef QUEUE_H
#define QUEUE_H

class Queue {
    public:
        explicit Queue(size_t capacity);
        virtual ~Queue();
        void enqueue(int item);
        void dequeue(int item);
        size_t size();
        bool isEmpty();
        int front();

    private:
        size_t capacity_;
        size_t size_;
        int arr_[];
        unsigned int front_;
        unsigned int rear_;
};

#endif // QUEUE_H
