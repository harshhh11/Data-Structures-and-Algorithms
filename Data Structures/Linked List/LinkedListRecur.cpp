#include <bits/stdc++.h>
using namespace std;

typedef struct Node
{
    int data;
    Node *next;
} Node;

Node *Insert(Node *head, int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL)
        head = newNode;
    else
    {
        Node *headRef = head;
        while (headRef->next != NULL)
            headRef = headRef->next;
        headRef->next = newNode;
    }
    return head;
}

void Print(Node *head)
{
    if (head == NULL) return;
    cout << head->data << " ";
    Print(head->next);
}

void ReversePrint(Node *head)
{
    if (head == NULL) return;
    ReversePrint(head->next);
    cout << head->data << " ";
}

int main()
{
    Node *head = NULL;      // Emply List
    head = Insert(head, 2); // Head Only Modifies when list is empty or head == NULL
    head = Insert(head, 4);
    head = Insert(head, 6);
    head = Insert(head, 5);
    Print(head);
    cout << "\n";
    ReversePrint(head);
}