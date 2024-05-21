#include "Queue.h"

class ArrayQueue : public Queue
{
    private:
        int *data;
        int frontIndex;
        int rearIndex;
        int maxQueueSize;
    public:
        ArrayQueue(int maxQueueSize);
        ~ArrayQueue()
        {
            delete[] data;
        }
        virtual bool isEmpty();
        virtual bool isFull();
        virtual bool enqueue(const int element);
        virtual bool dequeue(int &element);
        virtual bool front(int &element);
        virtual bool rear(int &element);
};