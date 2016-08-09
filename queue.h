#ifndef QUEUE_H
#define QUEUE_H

class Queue {
    public:
        explicit Queue(unsigned int capacity);
        virtual ~Queue() {};
        void enqueue(int item);
        int dequeue();
        unsigned int size();
        bool isEmpty();
        int front();

    private:
        int arr_[];
        unsigned int capacity_;
        unsigned int front_;
        unsigned int rear_;
};

#endif // QUEUE_H
