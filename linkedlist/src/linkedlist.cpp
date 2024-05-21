#include <iostream>
#include "LinkedList.h"

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
        HEAD = newNode;
    else
        TAIL->next = newNode;

    TAIL = newNode;
}

void LinkedList::add(Node *pred, int data)
{
    if (pred == NULL)
    {
        cout << "Predecessor node is NULL" << endl;
        return;
    }

    Node *newNode = new Node(data, pred->next);
    pred->next = newNode;
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

bool LinkedList::remove(int data)
{
    if(!this->isEmpty())
    {
        if (HEAD->info == data)
        {
            int temp;
            return this->removeFromHead(temp);
        }

        if (TAIL->info == data)
        {
            int temp;
            return this->removeFromTail(temp);
        }

        Node *temp = HEAD;
        while(temp->next != NULL)
        {
            if (temp->next->info == data)
            {
                Node *nodeToDelete = temp->next;
                temp->next = nodeToDelete->next;
                delete nodeToDelete;
                return 1;
            }
            temp = temp->next;
        }
    }

    throw runtime_error("No data to delete");
    return -1;
}

bool LinkedList::retrieve(int data, Node *outputPtr)
{
    if(!this->isEmpty())
    {
        Node *temp = HEAD;
        while(temp != NULL && temp->info != data)
        {
            temp = temp->next;
        }
        if(temp != NULL)
        {
            outputPtr->info = temp->info;
            outputPtr = temp;
            return true;
        } else {
            return false;
        }
    }

    throw runtime_error("No data to retrieve");
    return false;
}

bool LinkedList::search(int data)
{
    if(!this->isEmpty())
    {
        Node *temp = HEAD;
        while(temp != NULL && temp->info != data)
        {
            temp = temp->next;
        }
        if(temp != NULL)
        {
            return true;
        } else {
            return false;
        }
    }

    throw runtime_error("No data to search");
    return false;
}

void LinkedList::traverse(char separator = ' ')
{
    cout << "Contents of list:" << endl;
    for (Node *temp = HEAD; temp != NULL; temp = temp->next)
    {
        cout << temp->info << separator;
    }
    cout << endl;
}