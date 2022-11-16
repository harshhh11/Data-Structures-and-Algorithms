// Doubly Linked List Implementation
#include <bits/stdc++.h>
using namespace std;

typedef struct Node
{
    int data;
    Node* next;
    Node* prev;
} Node;

Node* head; 

// Creates a new Node and returns pointer to it
Node* GetNewNode(int x) {
    Node* newNode = new Node();
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Insert a Node at head of doubly linked list
void InsertAtHead(int x) {
    Node* newNode = GetNewNode(x);
    if (head == NULL) {
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

// Insert a Node at tail of Doubly linked list
void InsertAtTail(int x)
{
    Node *newNode = GetNewNode(x);
    if (head == NULL) head = newNode;
    else
    {
        Node *headRef = head;
        while (headRef->next != NULL) headRef = headRef->next; // Go to last Node
        headRef->next = newNode;
        newNode->prev = headRef;
        return;
    }
}
    
// Prints all the elements in linkedlist in forward traversal order
void Print() {
    Node* headRef = head;
    while(headRef != NULL) {
        cout << headRef->data << " ";
        headRef = headRef->next;
    }
    cout << "\n";
}

// Prints all elements in linked list in reverse traversal order.
void ReversePrint() {
    Node* headRef = head;
    if (headRef == NULL) return; // empty list exit 
    // Going to last Node
    while(headRef->next != NULL) {
        headRef = headRef->next;
    }
    // Traversing backward using prev pointer 
    cout << "Reverse: ";
    while(headRef != NULL) {
        cout << headRef->data;
        headRef = headRef->prev;
    }
    cout << "\n";
}



int main() {
    head = NULL; // empty list
    InsertAtHead(2); Print(); ReversePrint();
    InsertAtHead(4); Print(); ReversePrint();
    InsertAtHead(6); Print(); ReversePrint();
}