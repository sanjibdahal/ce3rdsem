#include <iostream>
#include "ArrayQueue.h"

using namespace std;

int main() {
    Queue *queue = new ArrayQueue(5);
    int element, in, out;
    cout << "Enqueue 1: " << queue->enqueue(100) << endl;
    cout << "Enqueue 2: " << queue->enqueue(201) << endl;
    cout << "Enqueue 3: " << queue->enqueue(302) << endl;
    cout << "Enqueue 3: " << queue->enqueue(403) << endl;
    cout << "Enqueue 3: " << queue->enqueue(504) << endl;
    cout << "Dequeue: " << queue->dequeue(element) << " " << element << endl;
    // cout << "Dequeue: " << queue->dequeue(element) << " " << element << endl;
    // cout << "Dequeue: " << queue->dequeue(element) << " " << element << endl;
    // cout << "Dequeue: " << queue->dequeue(element) << " " << element << endl;
    // cout << "Dequeue: " << queue->dequeue(element) << " " << element << endl;
    // cout << "Dequeue: " << queue->dequeue(element) << " " << element << endl;

    // rear element check
    cout << "Rear: " << queue->rear(in) << " " << in << endl;
    cout << "Front: " << queue->front(out) << " " << out << endl;
    return 0;
}
