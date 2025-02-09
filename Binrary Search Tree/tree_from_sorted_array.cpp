#include<bits/stdc++.h>
using namespace std;


struct node{
    int data;
    node *left, *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

node* sorted_array_to_bst(int arr[], int start, int end)
{
    if(start>end)
    {
        return NULL;
    }

    int mid = (start + end)/2;

    node* root = new node(arr[mid]);
    root->left = sorted_array_to_bst(arr, start, mid-1);
    root->right = sorted_array_to_bst(arr, mid+1, end);

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

    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    node* root = sorted_array_to_bst(a, 0, (n-1));
    inorder(root);
    cout<<endl;

}