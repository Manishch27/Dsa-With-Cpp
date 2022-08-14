// Linked list program to add an element at Nth position in a singly linked list.

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

void InsertAtHead(Node *&Head, int data)
{

    Node *NewNode = new Node(data);
    NewNode->Next = Head;
    Head = NewNode;
}

void InsertAtTail(Node *&Tail, int data)
{
    Node *NewNode = new Node(data);
    Tail->Next = NewNode;
    Tail = NewNode;
}

void InsertAtPos(Node *&tail, Node *&head, int pos, int data)
{

    if (pos == 1)
    {
        InsertAtHead(head, data);
        return;
    }

    Node *Temp = head;

    int count = 1;

 

    while (count <= pos - 1)
    {
        Temp = Temp->Next;
        count++;
    }   
    
    if (Temp->Next == NULL)
    {
        InsertAtTail(tail, data);
        return;
    }

    Node *NewNode = new Node(data);

    NewNode->Next = Temp->Next;
    Temp->Next = NewNode;
}

void PrintNode(Node *&Head)
{
    Node *Temp = Head;

    while (Temp != NULL)
    {
        cout << Temp->Data << endl;
        Temp = Temp->Next;
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the first element : " << endl;
    cin >> n;

    Node *Node1 = new Node(n);

    Node *head = Node1;
    Node *tail = Node1;

    InsertAtHead(head, 5);
    InsertAtHead(head, 10);
    InsertAtTail(tail, 20);

    cout << "<---------- Data before adding an element at Nth position ---------->" << endl;

    PrintNode(head);

    int pos;
    cout<<"Enter the position where you want to add an element : "<<endl;
    cin>>pos;

    InsertAtPos(tail, head, pos, 15);

    cout << "<---------- Data after adding an element at Nth position ---------->" << endl;

    PrintNode(head);

    cout<<"Head = "<<head->Data<<endl;
    cout<<"Tail = "<<tail->Data;
    return 0;
}