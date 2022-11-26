// Breath-first Search

#include <iostream>
#include <queue>
using namespace std;

typedef struct Node{
    char data;
    Node* left;
    Node* right;
} Node;

void LevelOrder(Node* root) {
    if (root == NULL) return;
    queue<Node*> Q;
    Q.push(root);
    // While there is atleast one discovered node
    while (!Q.empty()) {
        Node* current = Q.front();
        cout << current->data << " ";
        if(current->left != NULL) Q.push(current->left);
        if(current->right != NULL) Q.push(current->right);
        Q.pop(); // Removing the element at front which is printed 
    }
}

// Time Complexity = O(n) for all
// Space Complexity = O(n) - worst/avg , O(1) - best (for left aligned tree)