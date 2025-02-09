#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left, *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }    
};

vector<node*> constructtrees(int start, int end)
{
    vector<node*> trees;

    if(start>end)
    {
        trees.push_back(NULL);
        return trees;
    }

    for(int i=start;i<=end;i++)
    {
        vector<node*> leftsubtree = constructtrees(start, i-1);
        vector<node*> rightsubtree = constructtrees(i+1, end);

        for(int j=0;j<leftsubtree.size();j++)
        {
            node* left = leftsubtree[j];
            for(int k=0;k<rightsubtree.size();k++)
            {
                node* right = rightsubtree[k];
                node* Node = new node(i);
                Node->left = left;
                Node->right = right;
                trees.push_back(Node);
            }
        }
    }
    return trees;
}

void preorder(node* root)
{
    if(root == NULL)
    {
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    vector<node*> totaltrees = constructtrees(1,3);
    for(int i=0;i<totaltrees.size();i++)
    {
        cout<<i+1<<": ";
        preorder(totaltrees[i]);
        cout<<endl;
    }
}