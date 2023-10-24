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

void InsertAtTail(Node *&tail, int d)
{
    // new node created
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void InsertAtPosition(Node *&tail, Node *&head, int pos, int d)
{
    // insert at Start
    if (pos == 1)
    {
        InsertAtHead(head, d);
        return;
    }

    // new node created
    Node *temp = head;
    int count = 1;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }

    // insert at Last
    if (temp->next == NULL)
    {
        InsertAtTail(tail, d);
        return;
    }

    // creating a new node fro d;
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void printlist(Node *&head) // To print lined List
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
    Node *head = node1;
    Node *tail = node1;
    printlist(head);

    InsertAtTail(tail, 12);
    printlist(head);

    InsertAtTail(tail, 15);
    printlist(head);

    InsertAtPosition(tail, head, 3, 22);
    printlist(head);

    InsertAtPosition(tail, head, 5, 28);
    printlist(head);

    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail->data << endl;

    return 0;
}