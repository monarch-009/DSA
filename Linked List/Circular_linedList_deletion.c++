#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory free for node with value " << val << endl;
    }
};

void insertnode(Node *&tail, int element, int d)
{
    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non-empty list
        // assumeing that the element is present in the list
        Node *current = tail;
        while (current->data != element)
        {
            current = current->next;
        }
        // element found -> current is representaing element node
        Node *temp = new Node(d);
        temp->next = current->next;
        current->next = temp;
    }
}

void print(Node *tail)
{
    Node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

void deletenode(Node *&tail, int value)
{
    // empty list
    if (tail == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }
    else
    {
        // non empty

        Node *prev = tail;
        Node *current = prev->next;
        while (current->data != value)
        {
            prev = current;
            current = current->next;
        }
        prev->next = current->next;
        if (tail==current)
        {
            tail= prev;
        }
        
        current->next = NULL;
        delete current;
    }
}
int main()
{
    Node *tail = NULL;
    insertnode(tail, 5, 3);
    print(tail);

    insertnode(tail, 3, 5);
    print(tail);

    insertnode(tail, 5, 7);
    print(tail);

    insertnode(tail, 7, 20);
    print(tail);

    insertnode(tail, 5, 10);
    print(tail);

    deletenode(tail,3); // delete form the node 
    print(tail);

    return 0;
}