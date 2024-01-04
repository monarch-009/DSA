#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) // Constructor
    {
        this->data = val;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory free for node with data " << val << endl;
    }
};

void insertAtHead(Node *&tail, Node *&head, int val) // Insertion at the beginning of the Linked List
{
    Node *temp = new Node(val);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node *&tail, Node *&head, int val) // Insertion at the end of the Linked List
{
    Node *temp = new Node(val);
    if (tail == NULL)
    {
        tail = temp;
        head = temp;
    }
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&tail, Node *&head, int pos, int val) // Insertion at the given position
{
    if (pos == 1) // Insert at head
    {
        insertAtHead(tail, head, val);
        return;
    }

    Node *temp = head;
    int count = 1;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, head, val);
        return;
    }

    Node *nodeToInsert = new Node(val);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(Node *head, int pos)
{
    if (pos == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *current = head;
        Node *prev = NULL;
        int count = 1;
        while (count < pos)
        {
            prev = current;
            current = current->next;
            count++;
        }
        current->prev = NULL;
        prev ->next = current->next;
        current->next = NULL;
        delete current;

    }
}

void print(Node *&head) // Traverse the Linked List
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *&head) // Get the length of the Linked List
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

int main()
{
    // Node *node1 = new Node(10); // Creating a Linked List
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(tail, head, 20);
    insertAtHead(tail, head, 30);
    insertAtHead(tail, head, 40);
    insertAtHead(tail, head, 50);

    insertAtTail(tail, head, 0);
    insertAtTail(tail, head, -10);
    insertAtTail(tail, head, -20);
    insertAtTail(tail, head, -30);
    insertAtTail(tail, head, -40);

    insertAtPosition(tail, head, 1, 100);
    insertAtPosition(tail, head, 6, 500);
    insertAtPosition(tail, head, 12, 1000);

    print(head);
    cout << "Length: " << getLength(head) << endl;

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    return 0;
}