#include "Stack.h"
#include "LinkedList.h"

class LinkedListStack : public Stack
{
private:
    LinkedList stack;

public:
    LinkedListStack();
    ~LinkedListStack();
    bool isEmpty();
    bool isFull();
    void push(const int element);
    bool pop(int &element);
    bool top(int &element);
};
