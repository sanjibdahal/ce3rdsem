class Stack
{
    public:
        virtual ~Stack() {};
        virtual void push(int item) = 0;
        virtual bool pop(int &element) = 0;
        virtual bool top(int &element) = 0;
        virtual bool isEmpty() = 0;
        virtual bool isFull() = 0;
};