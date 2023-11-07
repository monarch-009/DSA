#include <bits/stdc++.h>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for inserting in left " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right " << data << endl;
    root->right = buildTree(root->right);
    return root;
}



void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    node *root = NULL;

    // creating a Tree
    root = buildTree(root);

    // data to feed ->  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    // level order

    cout << "Preorder Traversal: " << endl;
    preorder(root);

    return 0;
}