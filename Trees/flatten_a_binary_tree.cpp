#include<bits/stdc++.h>
using namespace std;

struct node{
   struct node* left;
   struct node* right;

   int data;

   node(int val)
   {
       data = val;
       left = NULL;
       right = NULL;
   }
};

void flatten(node* root)
{
    if(root == NULL ||(root->left == NULL && root->right == NULL))
    {
        return;
    }
    if(root->left!=NULL)
    {
        flatten(root->left);
        node* temp = root->right;
        root->right = root->left;
        root->left = NULL;

        node* t = root->right;

        while(t->right!=NULL)
        {
            t = t->right;
        }
        t->right = temp;
    }

    flatten(root->right);
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
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

   flatten(root);
   inorder(root);
}