# Trees

A tree is a data structure used to represent hierarchical data

e.g:- Employees in an organization and their positions

* It can be defined as a collection of entities called nodes linked together to simulate a hierarchy, it is a non-linear data structure
* The topmost node in the tree is called the root.
* Each node can have children and grandchildren.
* A Node with no children is called Leaf.
* Nodes of the same parent are called siblings.

and so on...

## Properties

* It is also referred to as a recursive data structure.
* A tree with N nodes has n-1 links/edges.
* Depth of a node = length of the path from the root to node OR No. of edges in the path from the root to that node.
* Height of a node = No. of edges in the longest path from the node to a leaf.
* Height of Tree = height of root node.
* Height of an empty tree = -1
* Height of tree with 1 node = 0

## Binary Trees
A Tree in which each node has at most 2 children. 

```cpp
struct Node{
    int data;
    Node* left;
    Node* right;
}
```

* **Strict/Proper Binary Tree** -> each node can have either 2 or 0 children.
* **Complete Binary Tree** -> All levels except possibly the last are filled and all nodes are as left as possible.
* **Perfect Binary Trees** -> All levels are filled.
* Maximum no. of nodes at level i = 2<sup>i</sup>
* Maximum no. of nodes in a binary tree with height h = 2<sup>h+1</sup> - 1  
* Height of perfect binary trees = log<sub>2</sub>(n+1) - 1
* Minimum height of complete binary tree = floor of Log<sub>2</sub>n (n is the number of nodes).
* Maximum height of complete binary tree = n - 1
 
## Applications

1. Storing naturally hierarchical data eg:- file system.
2. Organize data for quick search, insertion, deletion eg:- Binary search trees
3. Trie eg:- Dictionary
4. Network Routing Algorithm

## Balanced binary tree

* When the difference between the height of the left and right subtree for every node is not more than k(mostly 1).
 
* Diff = | h<sub>left</sub> - h<sub>right</sub> |

## We can implement a binary tree using:
1. Dynamically created nodes
2. Arrays(for complete binary trees)