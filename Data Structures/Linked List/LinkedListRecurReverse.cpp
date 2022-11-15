#include <bits/stdc++.h>
using namespace std;

typedef struct Node
{
    int data;
    Node *next;
} Node;

Node* head;

void Insert(int data) // Insert an integer at the end of list
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *headRef = head;
    while (headRef->next != NULL)
    {
        headRef = headRef->next;
    }
    headRef->next = newNode;
    return;
}

void ReverseRecur(Node* p) {
    if(p->next == NULL) {
        head = p;
        return;
    }
    ReverseRecur(p->next);
    Node* q = p->next;
    q->next = p;
    p->next = NULL;
}

void Print() {
    Node* headRef = head;
    while(headRef != NULL) {
        cout << headRef->data << " ";
        headRef = headRef->next; 
    }
}

int main() {
    head = NULL;
    Insert(2);
    Insert(4);
    Insert(5);
    Insert(7);
    Print();
    cout << "\n";
    ReverseRecur(head);
    Print();
}