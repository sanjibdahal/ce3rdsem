#include <iostream>
#include "LinkedListQueue.h"
using namespace std;

int main() {
    Queue *queue = new LinkedListQueue();
    int element, rear, front;
    queue->enqueue(103);
    queue->enqueue(201);
    queue->enqueue(302);
    // rear and front element
    cout << "Front: " << queue->front(front) << " " << front << endl;
    cout << "Rear: " << queue->rear(rear) << " " << rear << endl;

    if(queue->dequeue(element))
        cout << "Dequeued: " << element << endl;
    if(queue->dequeue(element))
        cout << "Dequeued: " << element << endl;
    if(queue->dequeue(element))
        cout << "Dequeued: " << element << endl;
    if(queue->dequeue(element))
        cout << "Dequeued: " << element << endl;

    return 0;
}
