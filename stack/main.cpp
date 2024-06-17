#include <iostream>
#include "LinkedListStack.h"
using namespace std;

int main()
{
    Stack *s = new LinkedListStack();
    cout << "Is stack empty: " << s->isEmpty() << endl;
    s->push(10);
    s->push(9);
    cout << "Is stack empty: " << s->isEmpty() << endl;
    cout << "Is stack full: " << s->isFull() << endl;

    int element;

    s->top(element);
    cout << "Top element: " << element << endl;

    s->pop(element);
    cout << "Popped element: " << element << endl;

    s->pop(element);
    cout << "Popped element: " << element << endl;

    s->pop(element);
}