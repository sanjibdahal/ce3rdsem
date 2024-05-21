#include <iostream>
// #include "ArrayQueue.h"
#include "LinkedListQueue.h"

using namespace std;

int main() {
    // Queue *queue = new ArrayQueue(5);
    Queue *queues = new LinkedListQueue();
    int element, in, out;
    cout << queues->isEmpty() << endl;
    cout << "Enqueue 1: " << queues->enqueue(103) << endl;
    cout << "Enqueue 2: " << queues->enqueue(201) << endl;
    cout << "Enqueue 3: " << queues->enqueue(302) << endl;
    cout << "Enqueue 4: " << queues->enqueue(403) << endl;
    cout << "Enqueue 5: " << queues->enqueue(504) << endl;
    cout << "Enqueue 5: " << queues->enqueue(604) << endl;
    cout << "Enqueue 5: " << queues->enqueue(7046) << endl;
    cout << "Dequeue: " << queues->dequeue(element) << " " << element << endl;
    cout << "Dequeue: " << queues->dequeue(element) << " " << element << endl;
    cout << "Dequeue: " << queues->dequeue(element) << " " << element << endl;
    cout << "Dequeue: " << queues->dequeue(element) << " " << element << endl;
    cout << "Dequeue: " << queues->dequeue(element) << " " << element << endl;
    cout << "Dequeue: " << queues->dequeue(element) << " " << element << endl;

    // rear element check
    cout << "Front: " << queues->front(out) << " " << out << endl;
    cout << "Rear: " << queues->rear(in) << " " << in << endl;
    return 0;
}
