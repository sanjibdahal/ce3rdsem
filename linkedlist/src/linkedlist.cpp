#include <iostream>
#include "../include/linkedlist.h"

using namespace std;

LinkedList::LinkedList()
{
    HEAD = nullptr;
    TAIL = nullptr;
}

LinkedList::~LinkedList()
{
    delete this;
}

bool LinkedList::isEmpty()
{
    return HEAD == nullptr && TAIL == nullptr;
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

void LinkedList::addToTail(int data)
{
    Node *newNode = new Node(data);

    if (this->isEmpty())
    {
        HEAD = newNode;
    }
    else
    {
        TAIL->next = newNode;
    }

    TAIL = newNode;
}

void LinkedList::print(char separator = ' ')
{
    cout << "Contents of list:" << endl;
    for (Node *t = HEAD; t != NULL; t = t->next)
    {
        cout << t->info << separator;
    }
    cout << endl;
}

bool LinkedList::removeFromHead(int &data)
{
    if (HEAD == nullptr)
    {
        cout << "No data to delete";
        return 0;
    }
    Node *nodeToDelete = HEAD;
    data = nodeToDelete->info;
    HEAD = HEAD->next;
    delete nodeToDelete; 
    return 1;
}

// bool LinkedList::removeFromTail(int &data)
// {
//     return 0;
// }