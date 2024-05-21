#include <iostream>
#include "LinkedlistStack.h"
using namespace std;

int main()
{
    // Stack *s = new ArrayStack(10);
    Stack *s = new LinkedListStack();
    s->push(10);
    s->push(9);

    int element;

    cout << s->top(element) << endl;
    cout << element << endl;

    cout << s->pop(element) << endl;
    cout << element << endl;

    cout << s->pop(element) << endl;
    cout << element << endl;
    cout << s->pop(element) << endl;
    s->push(8);
    s->top(element);
    cout << element << endl;
}