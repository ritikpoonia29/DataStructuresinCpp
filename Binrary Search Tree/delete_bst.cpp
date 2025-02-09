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

node* build_bst(node* root, int val)
{
    if(root == NULL)
    {
        return new node(val);
    }

    if(root->data> val)
    {
        root->left = build_bst(root->left, val);
    }
    else if(root->data<val)
    {
        root->right = build_bst(root->right, val);
    }
    return root;
}

node* inordersucc(node* root)
{
    node* curr = root;

    while(curr && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}
node* delete_bst(node* root, int key)
{
    if(root->data > key)
    {
        root->left = delete_bst(root->left, key);
    }
    else if(root->data < key)
    {
        root->right = delete_bst(root->right, key);
    }
    else{
        if(root->left == NULL)
        {
            node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL)
        {
            node* temp = root->left;
            free(root);
            return temp;
        }

        node* temp = inordersucc(root->right);
        root->data = temp->data;
        root->right = delete_bst(root->right, temp->data);
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

    root = build_bst(root, 1);
    build_bst(root, 2);
    build_bst(root, 3);
    build_bst(root, 4);
    build_bst(root, 5);

    inorder(root);
    delete_bst(root, 3);
    cout<<endl;
    inorder(root);

}