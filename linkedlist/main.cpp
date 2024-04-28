#include <iostream>
#include "./src/linkedlist.cpp"
using namespace std;

int main()
{
    try
    {
        LinkedList list;
        cout << list.isEmpty() << endl;
        // list.addToHead(34);
        // list.addToHead(46);
        // list.addToHead(50);

        list.addToTail(55);
        list.addToTail(90);

        list.print(' ');
        int element;

        list.removeFromTail(element);
        cout << element << " removed" << endl;
        list.print();

        list.removeFromHead(element);
        cout << element << " removed" << endl;
        list.print();

        list.removeFromTail(element);
        cout << element << " removed" << endl;
        list.print();
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << '\n';
    }
    catch(const char* msg)
    {
        cerr << msg << endl;
    }


    return 0;
}
