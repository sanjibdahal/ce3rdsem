#include <iostream>
#include "LinkedlistStack.h"
#include "linkedlist.h"

using namespace std;

LinkedListStack::LinkedListStack() {}

bool LinkedListStack::isEmpty()
{
    return stack.isEmpty();
}

// bool LinkedListStack::isFull() const {
//     return topIndex == maxStackSize - 1;
// }

void LinkedListStack::push(const int element)
{
    topIndex++;
    data[topIndex] = element;
}

bool LinkedListStack::pop(int &element)
{
    if (!isEmpty())
    {
        topIndex--;
        element = data[topIndex + 1];
        return true;
    }
    else
    {
        cout << "Stack Underflow" << endl;
        return false;
    }
}

bool LinkedListStack::top(int &element) const
{
    if (!isEmpty())
    {
        element = data[topIndex];
        return true;
    }
    else
    {
        cout << "Stack is empty";
        return false;
    }
}