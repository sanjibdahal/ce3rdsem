#include <iostream>
#include "LinkedListQueue.h"
using namespace std;

LinkedListQueue::LinkedListQueue() {}

LinkedListQueue::~LinkedListQueue() {
    queue.~LinkedList();
}

bool LinkedListQueue::isEmpty() {
    return queue.isEmpty();
}

bool LinkedListQueue::isFull() {
    return false;
}

bool LinkedListQueue::enqueue(const int element) {
    queue.addToTail(element);
    return true;
}

bool LinkedListQueue::dequeue(int &element) {
    if (!isEmpty()) {
        queue.removeFromHead(element);
        return true;
    } else {
        cout << "Queue is empty" << endl;
        return false;
    }
    
}

bool LinkedListQueue::front(int &element) {
    if(!isEmpty()) {
        element = queue.HEAD->info;
        return true;
    } else {
        cout << "Queue is empty" << endl;
        return false;
    }
}

bool LinkedListQueue::rear(int &element) {
    if(!isEmpty()) {
        element = queue.TAIL->info;
        return true;
    } else {
        cout << "Queue is empty" << endl;
        return false;
    }
}

