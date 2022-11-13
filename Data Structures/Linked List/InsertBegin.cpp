#include <bits/stdc++.h>
using namespace std;

typedef struct Node {
    int data;
    Node* next;
} Node;

// void Insert(int x) 
// {
//     Node* temp = new Node();
//     temp->data = x;
//     temp->next = NULL;
//     if(head != NULL) temp->next = head;
//     temp = temp; 
// }


void Insert(Node** headRef, int x) {
    Node* temp = new Node();
    temp->data = x;
    temp->next = *headRef;
    *headRef = temp;
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
        Insert(&head ,x);
        Print(head);
    }
}

