#include <iostream>
#include "../include/linkedlist.h"

using namespace std;

LinkedList::LinkedList()
{
    HEAD = NULL;
    TAIL = NULL;
}

LinkedList::~LinkedList()
{
    delete this;
}

bool LinkedList::isEmpty()
{
    return HEAD == NULL && TAIL == NULL;
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
    for (Node *temp = HEAD; temp != NULL; temp = temp->next)
    {
        cout << temp->info << separator;
    }
    cout << endl;
}

bool LinkedList::removeFromHead(int &data)
{
    if(!this->isEmpty())
    {
        Node *nodeToDelete = HEAD;
        data = nodeToDelete->info;
        HEAD = HEAD->next;
        if (HEAD == NULL)
        {
            TAIL = NULL;
        }
        delete nodeToDelete; 
        return 1;
    }
    throw runtime_error("No data to delete");
    return -1;
}

bool LinkedList::removeFromTail(int &data)
{
    if(!this->isEmpty()) {
        Node *nodeToDelete = TAIL;
        data = nodeToDelete->info;
        if (HEAD==TAIL)
        {
            HEAD = NULL;
            TAIL = NULL;
            delete nodeToDelete;
            return 1;
        }
        
        Node *temp = HEAD;
        while(temp->next != TAIL)
        {
            temp = temp->next;
        }

        temp->next = NULL;
        TAIL = temp;
        delete nodeToDelete;
        return 1;
    }

    throw runtime_error("No data to delete");
    return -1;
}