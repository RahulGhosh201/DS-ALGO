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

void insertNode(Node *root, int val)
{
    // first of all we will check whether a tree exist or not and if not exist then create a node
    if (root == nullptr)
    {
        root = new Node(val);
        return;
    }

    // then check whether the val is less than root and if it is then it will be in the left side of the root
    if (val < root->data)
    {
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

// Function to find the minimum value node in a subtree
Node *findinNode(Node *node)
{
    Node *current = node;
    while (current && current->left != nullptr)
    {
        current = current->left;
    }

    return current;
}

// function to delete a node
Node *deleteNode(Node *root, int val)
{
    if (root == nullptr)
    {
        return root;
    }
    if (val < root->data)
    {
        root->left = deleteNode(root->left, val);
    }
    else if (val > root->data)
    {
        root->right = deleteNode(root->right, val);
    }
    else
    {
        if (root->left == nullptr)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        Node *temp = findinNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int main()
{
    Node *root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(7);
    root->left->left = new Node(2);
    root->left->right = new Node(4);
    root->right->left = new Node(6);
    root->right->right = new Node(8);

    cout << "Original BST: ";
    preorderTraversal(root);
    cout << endl;

    int keyToDelete = 3;
    root = deleteNode(root, keyToDelete);

    cout << "BST after deleting " << keyToDelete << ": ";
    preorderTraversal(root);
    cout << endl;

    // Cleanup: Free memory
    delete root;
    return 0;
}