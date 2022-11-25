#include <bits/stdc++.h>
using namespace std;

typedef struct BSTNode
{
    int data;
    BSTNode* left;
    BSTNode* right;
} BSTNode;

BSTNode* GetNewNode(int data)
{
    BSTNode* newNode = new BSTNode();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

BSTNode* Insert(BSTNode* root, int data)
{
    // Empty Tree
    if(root == NULL){ 
        root = GetNewNode(data);
        return root; 
    } 
    else if (data <= root->data) {
        root->left = Insert(root->left, data);
    }
    else {
        root->right = Insert(root->right, data);
    }
}

bool Search(BSTNode* root, int data)
{
    if(root == NULL) return false;
    else if(data == root->data) return true;
    else if(data <= root->data) return Search(root->left, data);
    else return Search(root->right, data);
}

int main()
{
    BSTNode *root = NULL;
    root = Insert(root, 15); root = Insert(root, 8); root = Insert(root, 20);
    root = Insert(root, 25); root = Insert(root, 10); root = Insert(root, 12);
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if(Search(root, number)) cout << "Found\n";
    else cout << "Not Found\n";
}
