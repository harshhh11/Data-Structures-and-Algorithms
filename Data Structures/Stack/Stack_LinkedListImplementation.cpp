// Unlike array we don't need to worry about overflow

#include <iostream>
using namespace std;

typedef struct Node {
    int data;
    Node* link;
} Node;

Node* top = NULL;

void Push(int x) {
    Node* newNode = new Node();
    newNode->data = x;
    newNode->link = top;
    top = newNode;
}

void Pop(){
    if (top == NULL) {
        cout << "Error: stack is empty";
        return;
    }
    Node* pop = top;
    top = top->link;
    delete pop;
}

int Top() {
    return top->data;
}

bool IsEmpty() {
    if(top == NULL) return true;
    return false;
}

int main() {

}