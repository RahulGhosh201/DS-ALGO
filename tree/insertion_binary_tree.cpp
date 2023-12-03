#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Function to insert a new node into the binary tree
void insertNode(Node *root, int val)
{
    if (root == nullptr)
    {
        root = new Node(val);
        return;
    }

    if (val < root->data)
    { // then we should create a new node in the left node using the given value
        if (root->left == nullptr)
        {
            root->left = new Node(val);
        }
        else
        {
            insertNode(root->left, val);
        }
    }
    else
    {
        if (root->right == nullptr)
        {
            root->right = new Node(val);
        }
        else
        {
            insertNode(root->right, val);
        }
    }
}

// Function to traverse the binary tree in preorder (Root->Left->Right)
void preorderTraversal(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(5);
    root->left->right = new Node(6);

    cout << "Preorder Traversal before insertion: ";
    preorderTraversal(root);
    cout << endl;

    insertNode(root, 4);

    cout << "Preorder Traversal after insertion: ";
    preorderTraversal(root);
    cout << endl;

    // Deallocating memory- free the dynamically allocated nodes
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}