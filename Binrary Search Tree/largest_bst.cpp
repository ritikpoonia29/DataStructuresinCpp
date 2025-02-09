#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left, *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

struct nodeinfo
{
    int size;
    int minn;
    int maxx;
    int ans;
    bool isbst;
};

nodeinfo largestbst(node* root)
{
    if(root == NULL)
    {
        return {0, INT_MIN, INT_MAX, 0, true};
    }

    if(root->left == NULL && root->right == NULL)
    {
        return {1, root->data, root->data, 1, true};
    }

    nodeinfo left = largestbst(root->left);
    nodeinfo right = largestbst(root->right);

    nodeinfo curr;

    curr.size = 1 + left.size + right.size;

    if(left.isbst && right.isbst && root->data > left.maxx && root->data < right.minn)
    {
        curr.minn = min(left.minn , min(right.minn, root->data));
        curr.maxx = max(right.maxx, max(right.maxx, root->data));

        curr.ans = curr.size;
        curr.isbst = true;
        return curr;
    }

    curr.ans = max(left.ans, right.ans);
    curr.isbst = false;
    return curr;
}


int main()
{
    node* root = new node(2);
    root->left = new node(1);
    root->left->right = new node(3);
    root->right = new node(5);
    root->right->left = new node(4);
    root->right->right = new node(6);

    cout<<largestbst(root).ans<<endl;
}