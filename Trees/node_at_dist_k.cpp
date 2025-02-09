#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* left = NULL;
    struct node* right = NULL;

    node(int val)
    {
        data = val;
    }
};

void printnodes(node *root, int k)
{
    if(root==NULL || k<0)
    {
        return;
    }

    if(k==0)
    {
        cout<<root->data<<" ";
    }

    printnodes(root->left, k-1);
    printnodes(root->right, k-1);
}

int nodesatk(node* root, node* target, int k)
{
    if(root == NULL)
    {
        return -1;
    }

    if(root == target)
    {
        printnodes(root, k);
        return 0;
    }

    int dl = nodesatk(root->left, target, k);

    if(dl!=-1)
    {
        if(dl+1 == k)
        {
            cout<<root->data<<" ";
        }
        else
        {
            printnodes(root->right, k-dl-1);
        }

        return 1+dl;
    }

    int dr = nodesatk(root->right, target,  k);

    if(dr!=-1)
    {
        if(dr+1 == k)
        {
            cout<<root->data<<" ";
        }
        else
        {
            printnodes(root->left, k-dr-1);
        }

        return 1+dl;
    }

    return -1;

}

int main()
{
  node* root = new node(1);
  root->left = new node(2);
  root->right = new node(3);
  root->left->left = new node(4);

  nodesatk(root, root->left, 1);

//   printnodes()
}