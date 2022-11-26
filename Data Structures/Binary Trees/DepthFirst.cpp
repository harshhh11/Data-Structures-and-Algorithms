#include <bits/stdc++.h>
using namespace std;

typedef struct Node
{
    int data;
    Node *left;
    Node *right;
} Node;

void Preorder(Node* root)
{
    if(root == NULL) return;
    cout << root->data;
    Preorder(root->left);
    Preorder(root->right);
}

void Inorder(Node *root)
{
    if (root == NULL) return;
    Inorder(root->left);
    cout << root->data;
    Inorder(root->right);
}
void PostOrder(Node *root)
{
    if (root == NULL) return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data;
}

// Time Complexity: O(n)
// Space Complexity: O(h) , O(n) worst case,  O(logn) best/avg
