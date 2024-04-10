#include <iostream>
#include "../include/linkedlist.h"

using namespace std;

LinkedList::LinkedList()
{
    this->HEAD = NULL;
    this->TAIL = NULL;
}

LinkedList::~LinkedList() {
    
}

bool LinkedList::isEmpty()
{
    return HEAD == NULL;
}

void LinkedList::addToHead(int data)
{
    Node *newNode = new Node(data, HEAD);

    if (this->isEmpty())
    {
        TAIL = newNode;
    }

    HEAD = newNode;
}

void LinkedList::print(char separator)
{
    cout << "Contents of list:" << endl;
    for (Node *t = HEAD; t != NULL; t = t->next)
    {
        cout << t->info << separator;
    }
    cout << endl;
}