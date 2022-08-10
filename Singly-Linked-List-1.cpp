//  Program to implement a singly linked list and traverse its elements

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

void InsertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->Next = head;
    head = temp;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->Data;

        temp = temp->Next;
    }

    cout << endl;
}

int main()
{
    int element1, element2, element3, element4;
    cout << "Enter four elements of the linked list : " << endl;
    cin >> element1 >> element2 >> element3 >> element4;
    Node *head = new Node(element1);

    InsertAtHead(head, element2);
    InsertAtHead(head, element3);
    InsertAtHead(head, element4);

    print(head);
    return 0;
}