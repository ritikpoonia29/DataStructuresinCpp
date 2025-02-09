#include<bits/stdc++.h>
using namespace std;


struct node{
    int data;
    node*left, *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

node* bst(node* root, int val)
{
    if(root == NULL)
    {
        return new node(val);
    }

    if(root->data < val)
    {
        root->right = bst(root->right, val);
    }

    else if(root->data > val)
    {
        root->left = bst(root->left, val);
    }
    return root;
}

void inorder(node* root)
{
    if(root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{

    node* root = NULL;

    root = bst(root, 5);
    
    bst(root, 7);
    bst(root, 8);
    bst(root, 3);
    bst(root, 1);
    bst(root, 2);
    bst(root, 6);
    bst(root, 4);

    inorder(root);

}