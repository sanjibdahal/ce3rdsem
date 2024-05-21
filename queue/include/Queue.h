class Queue 
{
    public:
        virtual ~Queue() {};
        virtual bool enqueue(int) = 0;
        virtual bool dequeue(int &) = 0;
        virtual bool isEmpty() = 0;
        virtual bool isFull() = 0;
        virtual bool front(int &) = 0;
        virtual bool rear(int &) = 0;
};