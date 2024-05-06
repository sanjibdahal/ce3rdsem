class Node
{
public:
    int info;
    Node *next;

    Node() {}
    Node(int d) : info(d), next(NULL) {}
    Node(int d, Node *next) : info(d), next(next) {}
};

class LinkedList
{
private:
    Node *HEAD;
    Node *TAIL;

public:
    LinkedList();
    ~LinkedList();

    bool isEmpty();
    void addToHead(int data);
    void addToTail(int data);
    void add(Node *pred, int data);

    bool removeFromHead(int &data);
    bool removeFromTail(int &data);
    bool remove(int data);

    bool retrieve(int data, Node *output);
    bool search(int data);
    void traverse(char separator);
};