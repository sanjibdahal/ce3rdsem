#include "Stack.h"
#include "LinkedList.h"

class LinkedListStack : public Stack
{
private:
    LinkedList stack;

public:
    LinkedListStack();
    virtual ~LinkedListStack();
    virtual bool isEmpty();
    virtual bool isFull();
    virtual void push(const int element);
    virtual bool pop(int &element);
    virtual bool top(int &element);
};
