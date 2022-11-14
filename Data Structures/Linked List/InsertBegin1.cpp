#include <bits/stdc++.h>
using namespace std;

typedef struct Node {
    int data;
    Node *next;
} Node;


Node *head = NULL;

void Insert(int x)
{
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = head;
    head = newNode;
}

void Print()
{   
    Node* headRef = head;
    cout << "The List is: ";
    while(headRef != NULL) {
        cout << headRef->data << " ";
        headRef = headRef->next;
    }  
    cout << "\n";
}   

int main()
{
    head = NULL;
    int n, x;
    cout << "How many numbers?\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number\n";
        cin >> x;
        Insert(x);
        Print();   
    }
}
