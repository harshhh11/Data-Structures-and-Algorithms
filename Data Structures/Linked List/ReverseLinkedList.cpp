#include <bits/stdc++.h>
using namespace std;

typedef struct Node
{
    int data;
    Node *next;
} Node;


Node* Reverse(Node* head) 
{
    Node *currNode = head, *prevNode = NULL, *nextNode;
    while(currNode != NULL) {
        nextNode = currNode->next;
        currNode->next = prevNode;
        prevNode = currNode;
        currNode = nextNode;
    }
    head = prevNode;
    return head;
}

Node* Insert(Node* head, int data) {
    Node* newNode = new Node;
    newNode->data= data; newNode->next = NULL;
    if(head == NULL) head = newNode;
    else {
    Node* headRef = head;
    while(headRef->next != NULL) headRef = headRef->next;
    headRef->next = newNode;
    }
    return head;
}

void Print(Node* head) {
    while(head !=NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
} 

int main() {
    Node* head = NULL;
    head = Insert(head, 2);
    head = Insert(head, 4);
    head = Insert(head, 6);
    head = Insert(head, 8);
    Print(head);
    head = Reverse(head);
    Print(head);
}