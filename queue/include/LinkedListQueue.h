#include "Queue.h"
#include "LinkedList.h"

class LinkedListQueue : public Queue
{
    private:
        LinkedList queue;
    public:
        LinkedListQueue();
        virtual ~LinkedListQueue();
        virtual bool isEmpty();
        virtual bool isFull();
        virtual bool enqueue(const int element);
        virtual bool dequeue(int &element);
        virtual bool front(int &element);
        virtual bool rear(int &element);
};