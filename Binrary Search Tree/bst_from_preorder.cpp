#include<bits/stdc++.h>
using namespace std;

struct node
{
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

node* build_bst(int preorder[], int *preorderidx, int key, int min, int max, int n)
{
    if(*preorderidx >= n)
    {
        return NULL;
    }
    node* root = NULL;

    if(key>min && key< max)
    {
        root = new node(key);
        *preorderidx = *preorderidx + 1;

        if(*preorderidx < n)
        {
            root->left = build_bst(preorder, preorderidx, preorder[*preorderidx], min, key, n);
        }

        if(*preorderidx < n)
        {
            root->right = build_bst(preorder, preorderidx, preorder[*preorderidx], key, max, n);
        }
    }
    return root;
}

void print_preorder(node* root)
{
    if(root == NULL)
    {
        return;
    }

    cout<<root->data<<" ";

    print_preorder(root->left);
    print_preorder(root->right);
}
int main()
{
    int preorder[] = {10,2,3,13,11};
    int n = 5;
    int preorderidx = 0;
    node* root = build_bst(preorder, &preorderidx, preorder[0], INT_MIN, INT_MAX, n);
     print_preorder(root);
}