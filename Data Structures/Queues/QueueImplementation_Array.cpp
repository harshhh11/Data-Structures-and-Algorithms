#include <iostream>
using namespace std;
#define MAX_SIZE 101

class Queue
{
private:
    int A[MAX_SIZE];
    int front, rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    // To check wheter Queue is empty or not
    bool IsEmpty()
    {
        return (front == -1 && rear == -1);
    }

    // To check whether Queue is full or not
    bool IsFull()
    {
        return (rear + 1) % MAX_SIZE == front ? true : false;
    }

    // Inserts an element in queue at rear end
    void Enqueue(int x) 
    {
        if(IsFull())
        {
            cout << "Error: Queue is Full\n";
            return;
        }
        else if(IsEmpty())
        {
            front = rear = 0;
        }
        else 
        {
            rear = (rear + 1) % MAX_SIZE;
        }
        A[rear] = x;
    }

    // Removes an element in Queue from front end.
    void Dequeue()
    {
        if(IsEmpty())
        {
            cout << "Error: Queue is Empty\n";
            return;
        }
        else if(front == rear)
        {
            rear = front = -1;
        }
        else 
        {
            front = (front+1) % MAX_SIZE;
        }
    }

    // Returns element at front of queue.
    int Front()
    {
        if(IsEmpty())
        {
            cout << "Error: cannot return front from empty queue\n";
            return -1; 
        }
        return A[front];
    }

    void Print() 
    {
        // Finding number of elements in queue
        int count = (rear + MAX_SIZE - front) % MAX_SIZE + 1;
        cout << "Queue       : ";
        for (int i = 0; i < count; i++)
        {
            int index = (front + i) % MAX_SIZE; // Index of element while travesing circularly from front
            cout << A[index] << " ";
        }
        cout << "\n\n";
    }
};

int main()
{
   Queue Q; // creating an instance of Queue. 
   Q.Enqueue(2);  Q.Print();  
   Q.Enqueue(4);  Q.Print();  
   Q.Enqueue(6);  Q.Print();
   Q.Dequeue();	  Q.Print();
   Q.Enqueue(8);  Q.Print();
}