#include <iostream>
#include <stack>
using namespace std; 

typedef struct Node {
    int data;
    Node* next;
} Node;

Node* head;

void Reverse(){
    if (head == NULL) return; 
    stack<Node*> S;
    Node* headRef = head;
    // Travesing LL and pushing references 
    while(headRef != NULL){
        S.push(headRef);
        headRef = headRef->next;
    }

    // Reversing the list
    headRef = S.top(); head = headRef;
    S.pop();
    while(!S.empty()) {
        headRef->next = S.top();
        S.pop();
        headRef = headRef->next;
    }
    headRef->next = NULL;
}   

void Print() {
    Node* headRef = head;
    while(headRef != NULL) {
        cout << headRef->data;
        headRef = headRef->next;
    }
    cout << "\n";
}

void Insert(int x){
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = head;
    head = newNode;
}

int main() {
    head = NULL; // Empty List
    Insert(2); Insert(3); Insert(4); Insert(5);
    Print();
    Reverse();
    Print();
    return 0;
}   