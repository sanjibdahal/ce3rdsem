#include "ArrayQueue.h"
#include <iostream>
using namespace std;

ArrayQueue::ArrayQueue(int maxQueueSize) : maxQueueSize(maxQueueSize), frontIndex(0), rearIndex(0), data(new int[maxQueueSize]) {}

bool ArrayQueue::isEmpty() {
    return frontIndex == rearIndex;
}

bool ArrayQueue::isFull() {
    return rearIndex == maxQueueSize;
}

bool ArrayQueue::enqueue(const int element) {
    if(!isFull()) {
        data[rearIndex] = element;
        rearIndex++;
        return true;
    } else {
        cout << "Queue is full" << endl;
        return false;
    }
}

bool ArrayQueue::dequeue(int &element) {
    if(!isEmpty()) {
        element = data[frontIndex];
        frontIndex++;
        return true;
    } else {
        cout << "Queue is empty" << endl;
        return false;
    }
}

bool ArrayQueue::front(int &element) {
    if(!isEmpty()) {
        element = data[frontIndex];
        return true;
    } else {
        cout << "Queue is empty" << endl;
        return false;
    }
}

bool ArrayQueue::rear(int &element) {
    if(!isEmpty()) {
        element = data[rearIndex-1];
        return true;
    } else {
        cout << "Queue is empty" << endl;
        return false;
    }
}

