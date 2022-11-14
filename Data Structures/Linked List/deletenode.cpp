#include <bits/stdc++.h>
using namespace std;

typedef struct Node {
    int data; 
    Node* next; 
} Node;

Node* head; // Head Node

// void Delete(int n); // Delete node at position n

void Insert(int data) // Insert an integer at the end of list
{
	Node* newNode = new Node();
	newNode->data = data;
	newNode->next = NULL;
	if (head == NULL) {
		head = newNode;
		return;
	}
	Node *headRef = head;
	while (headRef->next != NULL)
	{
		headRef = headRef->next;
	}
	headRef->next = newNode;
}

void Print() // Print all elements in the list
{
	Node *headRef = head;
	cout << "The List is: ";
	while (headRef != NULL)
	{
		cout << headRef->data << " ";
		headRef = headRef->next;
	}
	cout << "\n";
}

int main() {
	head = NULL;
	Insert(2);
	Insert(4);
	Insert(6);
	Insert(5); // List : 2, 4, 6, 5
	Print();
	// int n;
	// cout << "Enter a position\n";
	// cin >> n;
	// Delete(n); 
	// Print();
}









	
		
