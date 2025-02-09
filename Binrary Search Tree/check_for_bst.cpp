#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool isBST( node* root, long minvalue, long maxvalue)
{
    if(root== NULL)
    {
        return true;
    }

    if(root->data > maxvalue || root->data < minvalue)
    {
        return false;
    }

    return isBST(root->left, minvalue, root->data) && isBST(root->right, root->data, maxvalue);
}
int main()
{
    node* root = NULL;
    root = new node(5);
    root->left = new node(8);
    root->right = new node(9);

    if(isBST(root, INT_MIN, INT_MAX))
    {
        cout<<"Tree is BST\n";
    }
    else
    {
        cout<<"Tree is not a BST\n";
    }
}