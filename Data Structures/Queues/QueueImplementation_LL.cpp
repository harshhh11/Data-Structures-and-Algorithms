#include <iostream>
using namespace std;

typedef struct Node
{
    int data;
    Node *next;
} Node;

Node *front = NULL;
Node *rear = NULL;

void Enqueue(int x)
{
    Node *newNode = new Node();
    newNode->data = x;
    newNode->next = NULL;
    if (front == NULL && rear == NULL)
    {
        front = rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}

void Dequeue()
{
    Node *pop = front;
    if (front == NULL)
        return;
    if (front == rear)
    {
        front = rear = NULL;
    }
    else
    {
        front = front->next;
    }
    delete (pop);
}

int Front()
{
    if (front == NULL)
    {
        cout << "Queue is Empty";
        return -1;
    }
    return front->data;
}

void Print()
{
    Node *headRef = front;
    cout << "Queue:   ";
    while (headRef != NULL)
    {
        cout << headRef->data << " ";
        headRef = headRef->next;
    }
    cout << "\n\n";
}

int main()
{
    Enqueue(2);
    Print();
    Enqueue(3);
    Print();
    Enqueue(5);
    Print();
    Dequeue();
    Print();
    Enqueue(66);
    Print();
    cout << "The front element is " << Front();
}