#include <iostream>
#include "LinkedListStack.h"

using namespace std;

LinkedListStack::LinkedListStack() {}

LinkedListStack::~LinkedListStack() {
    stack.~LinkedList();
}

bool LinkedListStack::isEmpty()
{
    return stack.isEmpty();
}

bool LinkedListStack::isFull()
{
    return false;
}

void LinkedListStack::push(const int element)
{
    stack.addToHead(element);
}

bool LinkedListStack::pop(int &element)
{
    if (!stack.isEmpty())
    {
        stack.removeFromHead(element);
        return true;
    }
    else
    {
        cout << "Stack Underflow" << endl;
        return false;
    }
}

bool LinkedListStack::top(int &element)
{
    if (!stack.isEmpty())
    {
        element = stack.HEAD->info;
        return true;
    }
    else
    {
        cout << "Stack is empty";
        return false;
    }
}