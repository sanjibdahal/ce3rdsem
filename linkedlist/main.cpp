#include <iostream>
#include "./src/linkedlist.cpp"
using namespace std;

int main()
{
    try
    {
        LinkedList list;
        list.addToHead(10);
        list.addToTail(34);
        list.addToTail(46);
        list.addToTail(50);
        list.traverse(' ');
        // 10 34 46 50







        

        // if(list.search(34)) {
        //     cout << "Found" << endl;
        // } else {
        //     cout << "Not Found" << endl;
        // }

        // if(list.search(47)) {
        //     cout << "Found" << endl;
        // } else {
        //     cout << "Not Found" << endl;
        // }

        // Node outputPtr, outputPtr2;
        // cout << list.retrieve(34, &outputPtr) << endl;
        // cout << outputPtr.info << endl;
        // cout << list.retrieve(47, &outputPtr2) << endl;
        // cout << outputPtr2.info << endl;

        // list.traverse(' ');

        // list.addToTail(55);
        // list.addToTail(18);
        // list.addToTail(90);
        // list.addToTail(27);
        // list.addToTail(85);

        // list.traverse(' ');
        // int element;
        // Node ele;

        // cout << list.retrieve(85, &ele) << endl;
        // list.traverse(' ');
        // cout << ele.info << endl;
        // cout << list.search(90);

        // list.removeFromTail(element);
        // cout << element << " removed" << endl;
        // list.traverse();

        // list.removeFromHead(element);
        // cout << element << " removed" << endl;
        // list.traverse();

        // list.removeFromTail(element);
        // cout << element << " removed" << endl;
        // list.traverse();
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << '\n';
    }
    catch (const char *msg)
    {
        cerr << msg << endl;
    }

    return 0;
}
