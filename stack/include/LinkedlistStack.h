#include "stack.h"

class LinkedListStack : public Stack
{
private:
    LinkedList stack;
    int topIndex;

public:
    LinkedListStack();
    ~LinkedListStack() {}
    bool isEmpty();
    bool isFull() const;
    void push(const int element);
    bool pop(int &element);
    bool top(int &element) const;
};
