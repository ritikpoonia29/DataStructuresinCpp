#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* right;
    node* left;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};


void swapp(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void calpointers(node* root, node** first, node** mid, node** last, node** temp)
{
    if(root)
    {

    calpointers(root->left, first, mid, last, temp);

    if(*temp && root->data < (*temp)->data)
    {
        if(!*first)
        {
            *first = *temp;
            *mid = root;
        }
        else{
            *last = root;
        }
    }

    *temp = root;

    calpointers(root->right, first, mid, last, temp);
    }
}

void restorebst(node* root)
{
    node* first, *mid, *last, *temp;

    first = NULL;
    mid = NULL;
    last = NULL;
    temp = NULL;
    
    calpointers(root, &first, &mid, &last, &temp);

    if(first && last)
    {
        swapp(&(first->data) , &(last->data));
    }
    else if(first && mid)
    {
        swapp(&(first->data) , &(mid->data));
    }
}

void inorder(node* root)
{
    if(root == NULL)
    return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    struct node *root  = new node(6);
    root->left         = new node(10);
    root->right        = new node(2);
    root->left->left   = new node(1);
    root->left->right  = new node(3);
    root->right->right = new node(12);
    root->right->left  = new node(7);

    inorder(root);

    cout<<endl;
    restorebst(root);

    inorder(root);
    cout<<endl;
}