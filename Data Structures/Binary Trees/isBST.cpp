#include <bits/stdc++.h>
using namespace std;

typedef struct Ndde
{
    int data;
    Node *left;
    Node *right;
} Node;


// O(n^2)
bool IsSubtreeLesser(Node *root, int value)
{
    if (root == NULL)
        return true;
    if (root->data <= value && IsSubtreeLesser(root->left, value) && IsSubtreeLesser(root->right, value))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool IsSubtreeGreater(Node *root, int value)
{
    if (root == NULL)
        return true;
    if (root->data > value && IsSubtreeGreater(root->left, value) && IsSubtreeGreater(root->right, value))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool IsBinarySearchTree(Node *root)
{
    if (IsSubtreeLesser(root->left, root->data) && IsSubtreeGreater(root->right, root->data) && IsBinarySearchTree(root->left) && IsBinarySearchTree(root->right))
    {
        return true;
    }
    else
    {
        return false;
    }
}

// O(n)
bool isBinarySearchTree(Node *root, int minValue, int maxValue)
{
    if (root->data > minValue && root->data < maxValue && isBinarySearchTree(root->left, minValue, root->data) && isBinarySearchTree(root->right, root->data, maxValue))
    {
        return true;
    }
    else
    {
        return false;
    }
}