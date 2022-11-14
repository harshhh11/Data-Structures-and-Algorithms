#include <bits/stdc++.h>
using namespace std;

typedef struct Node {
    int data;
    Node* next;
} Node;

// Passing Pointer to a Pointer to dereference and update the head to the newNode
void Insert(Node** headRef, int x) {
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = *headRef;
    *headRef = newNode;
}

void Print(Node* head) {
    cout << "The list is: ";
    while(head != NULL){
        cout << " " << head->data;
        head = head->next;
    }
    cout << "\n";
}

int main() {
    Node* head = NULL;
    int n, x;
    cout << "How many numbers?\n";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter the number\n";
        cin >> x;
        Insert(&head ,x); // Address of the head Node 
        Print(head); // Address of the first node
    }
}

