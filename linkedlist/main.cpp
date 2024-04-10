#include <iostream>
#include "./src/linkedlist.cpp"
using namespace std;

int main()
{
    LinkedList list;
    cout << list.isEmpty() << endl;
    list.addToHead(34);
    list.addToHead(46);
    list.addToHead(50);

    list.print(' ');

    return 0;
}