#include <iostream>
using namespace std;
class Node // Creating a doubly Lined List
{
public:
    int data;
    Node *prev;
    Node *next;

    // Constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node *head) // Traversing of the Lined List
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *head) // Find the lenght of the Linked List
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node *&tail, Node *&head, int d) // Insert at haed of list
{

    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&tail, Node *&head, int d) // Insert at haed of list
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }

    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void InsertAtPosition(Node *&tail, Node *&head, int pos, int d) // Insert at any position
{
    // insert at Start
    if (pos == 1)
    {
        insertAtHead(tail, head, d);
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
        insertAtTail(tail, head, d);
        return;
    }

    // creating a new node fro d;
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

int main()
{
    // Node *node1 = new Node(10);
    Node *head = NULL; // node1;
    Node *tail = NULL; // node1;
    print(head);

    insertAtHead(tail, head, 15);
    print(head);

    insertAtHead(tail, head, 20);
    print(head);

    insertAtHead(tail, head, 25);
    print(head);

    insertAtTail(tail, head, 5);
    print(head);

    InsertAtPosition(tail, head, 2, 100);
    print(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    return 0;
}