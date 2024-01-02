#include <iostream>
using namespace std;

class Node // Creating a singly Lined List
{
public:
    int data;   // Data
    Node *next; // Pointer to next node

    Node(int data) // Constructor
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node() // Destructor
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << val << endl;
    }
};

void insertAtHead(Node *&head, int d) // Insert at haed of list
{
    Node *temp = new Node(d); // new node create
    temp->next = head;        //  new node point to head
    head = temp;              // head point to new node
}

void insertAtTail(Node *&tail, int d) // Insert at tail of list
{
    Node *temp = new Node(d); // new node create
    tail->next = temp;        // tail point to new node
    tail = temp;              // tail point to new node
}

void insertAtPosition(Node *&tail, Node *&head, int d, int position) // Insert at middle of list
{

    if (position == 1)
    { // Insert at head
        insertAtHead(head, d);
        return;
    }

    Node *temp = head; // temp point to head
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next; // temp point to next node
        count++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, d); // Insert at tail
        return;
    }

    Node *nodeToInsert = new Node(d); // new node create
    nodeToInsert->next = temp->next;  // new node point to next node
    temp->next = nodeToInsert;        // temp point to new node
}

void printlist(Node *&head) // How to traverse a linked list
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next; // temp point to next node
    }
    cout << endl;
}

void deleteNode(int position, Node*& head){
    if (position == 1) // deleteing first Node
    {
        Node *temp = head;
        head = head->next;
        // Memory free start node
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last
        Node *current = head;
        Node *prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = current;
            current = current->next;
            count++;
        }
        prev->next = current->next;
        current->next = NULL;
        delete current;

    }
}

int main()
{

    Node *node1 = new Node(10); // created a new node
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node *head = node1; // head point to new node1
    Node *tail = node1; // tail point to new node1
    printlist(head);    // print list

    insertAtHead(head, 5);               // Insert at head
    printlist(head);                     // print list

    insertAtTail(tail, 15);              // Insert at tail
    printlist(head);                     // print list


    insertAtPosition(tail, head, 20, 2); // Insert at middle
    printlist(head); // print list

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    deleteNode(4, head);
    printlist(head);

    return 0;
}