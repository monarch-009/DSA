#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node* &tail, int d){
    //new node created
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail->next;
}

void printlist(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // created a new node
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head point to new node1
    Node * head = node1;
    Node * tail = node1;
    printlist(head);

    InsertAtTail(tail,12);
    printlist(head);
    InsertAtTail(tail,15);
    printlist(head);

    return 0;
}