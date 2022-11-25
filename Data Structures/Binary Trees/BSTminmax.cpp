#include <bits/stdc++.h>
using namespace std;

typedef struct BSTNode
{
    int data;
    BSTNode *left;
    BSTNode *right;
} BSTNode;

BSTNode *root = NULL;

// Iteratively

int FindMin(BSTNode *root)
{
    if (root == NULL)
    {
        cout << "Error: Tree is empty\n";
        return -1;
    }
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root->data;
}

int FindMax(BSTNode *root)
{
    if (root == NULL)
    {
        cout << "Error: Tree is empty\n";
        return -1;
    }
    while (root->right != NULL) {
        root = root->right;
    }
    return root->data;
}

// Recursively

int findMin(BSTNode *root)
{
    if (root == NULL)
    {
        cout << "Error: Tree is empty\n";
        return -1;
    }
    else if(root->left != NULL)
    {
        return root->data;
    }
    return findMin(root->left);
}

int findMax(BSTNode *root)
{
    if (root == NULL)
    {
        cout << "Error: Tree is empty\n";
        return -1;
    }
    else if (root->right != NULL)
    {
        return root->data;
    }
    return findMin(root->right);
}