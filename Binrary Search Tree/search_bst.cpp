#include<bits/stdc++.h>
using namespace std;


struct node{
    int data;
    node* left;
    node* right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

node* bst_build(node* root, int val)
{
    if(root == NULL)
    {
        return new node(val);
    }

    if(root->data < val)
    {
        root->right = bst_build(root->right, val);
    }
    else if(root->data > val)
    {
        root->left = bst_build(root->left, val);
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
node* search_bst(node* root, int key)
{
    if(root == NULL)
    {
        return NULL;
    }

    if(root->data == key)
    {
        return root;
    }

    if(root->data > key)
    {
        return search_bst(root->left, key);
    }
    else if(root->data < key)
    {
        return search_bst(root->right, key);
    }
    return NULL;
}
int main()
{
    node* root = NULL;
    cout<<"Enter the values for tree: ";
    int a[5];
    for(int i = 0;i<5;i++)
    {
        cin>>a[i];
    }

    root = bst_build(root, a[0]);

    for(int i=1;i<5;i++)
    {
        bst_build(root, a[i]);
    }

    inorder(root);
    int key;
    cout<<"\nEnter the key to be searched: ";
    cin>>key;

    if(search_bst(root, key) == NULL)
    {
        cout<<"\nValue is not present in the tree.\n";
    }
    else{
        cout<<"Value is present in the tree.\n";
    }


}