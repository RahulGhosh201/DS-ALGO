#include <bits/stdc++.h>
using namespace std;

// Node class for the binary tree
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // constructor to initiate the node
    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

int main()
{
    // creating nodes for the binary tree
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    //         1
    //     2       3
    // 4       5
    // the above tree will be built

    // Traversing the binary tree
    cout << "Preorder Traversal of Binary Tree: ";
    cout << root->data << " ";
    cout << root->left->data << " ";
    cout << root->right->data << " ";
    cout << root->left->left->data << " ";
    cout << root->left->right->data << endl;

    // Deallocating memory- free the dynamically allocated nodes
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}