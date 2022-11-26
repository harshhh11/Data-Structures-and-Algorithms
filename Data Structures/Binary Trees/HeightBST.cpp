#include <bits/stdc++.h>
using namespace std;

typedef struct BSTNode
{
    int data;
    BSTNode *left;
    BSTNode *right;
} BSTNode;

int FindHeight(BSTNode *root)
{
    if (root == NULL)
    {
        return -1;
    }
    return max(FindHeight(root->left), FindHeight(root->right)) + 1;
}
