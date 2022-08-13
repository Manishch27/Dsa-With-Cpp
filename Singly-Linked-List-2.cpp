// Linked list program to insert new element from tail and traverse it

#include <iostream>
using namespace std;

class Node
{

public:
    int Data;
    Node *Next;

    Node(int data)
    {
        this->Data = data;
        this->Next = NULL;
    }
};

void InsertAtTail(Node *&tail, int data)
{
    Node *NewNode = new Node(data);
    tail->Next = NewNode;
    tail = NewNode;
}

void printNodes(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->Data << endl;
        temp = temp->Next;
    }
    cout << endl;
}

int main()
{
    int n, n2, n3, n4;
    cout << "Enter the first element : " << endl;
    cin >> n;
    Node *node1 = new Node(n);

    Node *head = node1;
    Node *tail = node1;

    cout << "Enter three more elements : " << endl;
    cin >> n2 >> n3 >> n4;

    InsertAtTail(tail, n2);
    InsertAtTail(tail, n3);
    InsertAtTail(tail, n4);

    cout << "<------- The elements in the linked list are ------->" << endl;

    printNodes(head);

    delete node1;

    return 0;
}
