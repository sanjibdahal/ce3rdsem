#include <iostream>
#include "ArrayStack.h"

using namespace std;

ArrayStack::ArrayStack(int size) : maxStackSize(size), topIndex(-1), data(new int[size]) {}

bool ArrayStack::isEmpty() const {
    return topIndex < 0;
}

bool ArrayStack::isFull() const {
    return topIndex == maxStackSize - 1;
}

void ArrayStack::push(const int element) {
    if(!isFull()) {
        topIndex++;
        data[topIndex] = element;
    } else {
        cout << "Stack overflow" << endl;
    }
}

bool ArrayStack::pop(int &element) {
    if(!isEmpty()) {
        topIndex--;
        element = data[topIndex+1];
        return true;
    } else {
        cout << "Stack Underflow" << endl;
        return false;
    }
}

bool ArrayStack::top(int &element) const {
    if(!isEmpty()) {
        element = data[topIndex];
        return true;
    } else {
        cout << "Stack is empty";
        return false;
    } 
}