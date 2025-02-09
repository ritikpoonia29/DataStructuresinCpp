#include<bits/stdc++.h>
using namespace std;

struct node
{
    struct node* left = NULL;
    struct node* right = NULL;
    int data;


    node(int val)
    {
        data = val;
    }
};

bool getpath(node* root, int key, vector<int> &path)
{
    if(root == NULL)
    {
        return false;
    }

    path.push_back(root->data);
    if(root->data == key)
    {
        return true;
    }

    if(getpath(root->left, key, path) || getpath(root->right, key, path))
    {
        return true;
    }

    path.pop_back();
    return false;
}

int lca(node* root, int n1, int n2)
{
    vector<int> path1, path2;
    if(!getpath(root, n1, path1) || !getpath(root, n2, path2))
    {
        return -1;
    }

    int i;
    for(i=0;i<path1.size() && path2.size();i++)
    {
        if(path1[i] != path2[i])
        {
            break;
        }
    }

    return path1[i-1];
}

//OR

node* lca2(node* root, int n1, int n2)
{
    if(root == NULL)
    {
        return NULL;
    }

    if(root->data == n1 || root->data == n2)
    {
        return root;
    }

    node* leftt = lca2(root->left, n1, n2);
    node* rightt = lca2(root->right, n1,  n2);

    if(leftt && rightt)
    {
        return root;
    }

    if(leftt!=NULL)
    {
        return leftt;
    }   
    return rightt;
}

int main()
{
 node* root = new node(1);
 root->left = new node(2);
 root->right = new node(3);
 root->left->left = new node(4);
 root->left->right = new node(5);
 root->right->left = new node(6);
 root->right->right = new node(7);
 root->right->left->left = new node(8);

//  cout<<lca(root, 7,8)<<endl;
// cout<<lca2(root, 7,8)<<endl;
node* lca = lca2(root, 7, 8);
cout<<lca<<endl;
}
