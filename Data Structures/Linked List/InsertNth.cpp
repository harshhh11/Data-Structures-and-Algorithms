#include <iostream>

using namespace std;

typedef struct Node {
    int data;
    Node* next;
} Node;

Node* head;

void Print() {
    Node* headRef = head;
    while(headRef != NULL) {
        cout << headRef->data;
        headRef = headRef->next;
    }
    cout << "\n";
}

void Insert(int data, int n) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    if (n == 1) {
        newNode->next = head;
        head = newNode;
        return;
    } 
    Node* headRef = head;
    for(int i = 1; i < n-1;i++){
        headRef = headRef->next;
    }
    newNode->next = headRef->next; // newNode points to the nth(original) node
    headRef->next = newNode; // newNode is the nth Node
}


int main() {
    head = NULL;
    Insert(2,1); // List: 2
    Insert(3,2); // List: 2,3
    Insert(4,1); // List: 4,2,3
    Insert(5,2); // List: 4,5,2,3
    Print();
}